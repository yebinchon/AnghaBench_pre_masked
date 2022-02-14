
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; scalar_t__ actual_length; struct si470x_device* context; } ;
struct si470x_device {int* registers; size_t wr_index; int buf_size; int rd_index; scalar_t__ int_in_running; TYPE_1__* intf; int int_in_urb; scalar_t__ usbdev; int read_queue; int * buffer; int * int_in_buffer; scalar_t__ disconnected; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned char VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 unsigned short VAR_22 ;
 int FUNC_2 (int *,unsigned char**,int) ;
 int FUNC_3 (unsigned short,unsigned char**) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_23)
{
 struct si470x_device *VAR_24 = VAR_23->context;
 unsigned char VAR_25[VAR_11];
 int VAR_26;
 unsigned char VAR_27;
 unsigned char VAR_28;
 unsigned short VAR_29;
 unsigned short VAR_30;
 unsigned char VAR_31[3];

 if (VAR_23->status) {
  if (VAR_23->status == -VAR_1 ||
    VAR_23->status == -VAR_0 ||
    VAR_23->status == -VAR_2) {
   return;
  } else {
   FUNC_0(&VAR_24->intf->dev,
    "non-zero urb status (%d)\n", VAR_23->status);
   goto resubmit;
  }
 }


 if (VAR_24->disconnected)
  return;
 if ((VAR_24->registers[VAR_20] & VAR_21) == 0)
  goto resubmit;

 if (VAR_23->actual_length > 0) {

  VAR_25[0] = VAR_10;
  for (VAR_27 = 0; VAR_27 < VAR_9; VAR_27++)
   VAR_24->registers[VAR_16 + VAR_27] =
       FUNC_1(&VAR_24->int_in_buffer[
    VAR_27 * VAR_4 + 1]);

  if ((VAR_24->registers[VAR_16] & VAR_18) == 0) {

   goto resubmit;
  }
  if ((VAR_24->registers[VAR_16] & VAR_19) == 0) {

   goto resubmit;
  }
  for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
   switch (VAR_28) {
   default:
    VAR_29 = (VAR_24->registers[VAR_16] &
      VAR_17) >> 9;
    VAR_30 = VAR_24->registers[VAR_5];
    break;
   case 1:
    VAR_29 = (VAR_24->registers[VAR_12] &
      VAR_13) >> 14;
    VAR_30 = VAR_24->registers[VAR_6];
    break;
   case 2:
    VAR_29 = (VAR_24->registers[VAR_12] &
      VAR_14) >> 12;
    VAR_30 = VAR_24->registers[VAR_7];
    break;
   case 3:
    VAR_29 = (VAR_24->registers[VAR_12] &
      VAR_15) >> 10;
    VAR_30 = VAR_24->registers[VAR_8];
    break;
   };


   FUNC_3(VAR_30, &VAR_31);
   VAR_31[2] = VAR_28;
   VAR_31[2] |= VAR_28 << 3;
   if (VAR_29 > VAR_22)
    VAR_31[2] |= 0x80;
   else if (VAR_29 > 0)
    VAR_31[2] |= 0x40;


   FUNC_2(&VAR_24->buffer[VAR_24->wr_index], &VAR_31, 3);
   VAR_24->wr_index += 3;


   if (VAR_24->wr_index >= VAR_24->buf_size)
    VAR_24->wr_index = 0;


   if (VAR_24->wr_index == VAR_24->rd_index) {

    VAR_24->rd_index += 3;
    if (VAR_24->rd_index >= VAR_24->buf_size)
     VAR_24->rd_index = 0;
   }
  }
  if (VAR_24->wr_index != VAR_24->rd_index)
   FUNC_5(&VAR_24->read_queue);
 }

resubmit:

 if (VAR_24->int_in_running && VAR_24->usbdev) {
  VAR_26 = FUNC_4(VAR_24->int_in_urb, VAR_3);
  if (VAR_26) {
   FUNC_0(&VAR_24->intf->dev,
          "resubmitting urb failed (%d)", VAR_26);
   VAR_24->int_in_running = 0;
  }
 }
}
