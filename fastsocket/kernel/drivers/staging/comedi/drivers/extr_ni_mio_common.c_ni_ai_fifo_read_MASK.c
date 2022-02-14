
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_async {int events; } ;
typedef int data ;
struct TYPE_4__ {scalar_t__ reg_type; } ;
struct TYPE_3__ {short* ai_fifo_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct comedi_subdevice*,short*,int) ;
 int FUNC_1 (struct comedi_subdevice*,short) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int ) ;
 short FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_9,
       struct comedi_subdevice *VAR_10, int VAR_11)
{
 struct comedi_async *VAR_12 = VAR_10->async;
 int VAR_13;

 if (VAR_5.reg_type == VAR_7) {
  short VAR_14[2];
  u32 VAR_15;

  for (VAR_13 = 0; VAR_13 < VAR_11 / 2; VAR_13++) {
   VAR_15 = FUNC_3(VAR_0);

   VAR_14[0] = (VAR_15 >> 16) & 0xffff;
   VAR_14[1] = VAR_15 & 0xffff;
   FUNC_0(VAR_10, VAR_14, sizeof(VAR_14));
  }

  if (VAR_11 % 2) {
   VAR_15 = FUNC_3(VAR_0);
   VAR_14[0] = VAR_15 & 0xffff;
   FUNC_1(VAR_10, VAR_14[0]);
  }
 } else if (VAR_5.reg_type == VAR_8) {
  short VAR_16[2];
  u32 VAR_17;


  for (VAR_13 = 0; VAR_13 < VAR_11 / 2; VAR_13++) {
   VAR_17 = FUNC_3(VAR_3);

   VAR_16[0] = (VAR_17 >> 16) & 0xffff;
   VAR_16[1] = VAR_17 & 0xffff;
   FUNC_0(VAR_10, VAR_16, sizeof(VAR_16));
  }
  if (VAR_11 % 2) {

   FUNC_5(0x01, VAR_2);
   VAR_17 = FUNC_3(VAR_3);
   VAR_16[0] = (VAR_17 >> 16) & 0xffff;
   FUNC_1(VAR_10, VAR_16[0]);
  }
 } else {
  if (VAR_11 > sizeof(VAR_6->ai_fifo_buffer) /
      sizeof(VAR_6->ai_fifo_buffer[0])) {
   FUNC_2(VAR_9, "bug! ai_fifo_buffer too small");
   VAR_12->events |= VAR_4;
   return;
  }
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
   VAR_6->ai_fifo_buffer[VAR_13] =
       FUNC_4(VAR_1);
  }
  FUNC_0(VAR_10, VAR_6->ai_fifo_buffer,
       VAR_11 *
       sizeof(VAR_6->ai_fifo_buffer[0]));
 }
}
