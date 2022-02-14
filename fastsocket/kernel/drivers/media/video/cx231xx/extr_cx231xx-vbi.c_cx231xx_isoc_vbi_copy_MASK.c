
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct urb {unsigned char* transfer_buffer; scalar_t__ actual_length; int status; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {int last_sav; int partial_buf; scalar_t__ is_partial_line; } ;
struct cx231xx_buffer {int dummy; } ;
struct TYPE_3__ {struct cx231xx_buffer* buf; } ;
struct TYPE_4__ {TYPE_1__ bulk_ctl; } ;
struct cx231xx {int state; TYPE_2__ vbi_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,scalar_t__*) ;
 int FUNC_1 (unsigned char*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*,int,unsigned char*,scalar_t__) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (struct cx231xx*,int,int ) ;

__attribute__((used)) static inline int FUNC_5(struct cx231xx *VAR_3, struct urb *VAR_4)
{
 struct cx231xx_buffer *VAR_5;
 struct cx231xx_dmaqueue *VAR_6 = VAR_4->context;
 int VAR_7 = 1;
 unsigned char *VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11 = 0;

 if (!VAR_3)
  return 0;

 if ((VAR_3->state & VAR_0) || (VAR_3->state & VAR_1))
  return 0;

 if (VAR_4->status < 0) {
  FUNC_4(VAR_3, -1, VAR_4->status);
  if (VAR_4->status == -VAR_2)
   return 0;
 }

 VAR_5 = VAR_3->vbi_mode.bulk_ctl.buf;


 VAR_8 = VAR_4->transfer_buffer;
 VAR_10 = VAR_4->actual_length;

 if (VAR_10 > 0) {
  VAR_9 = 0;

  if (VAR_6->is_partial_line) {


   VAR_11 = VAR_6->last_sav;
  } else {



   VAR_11 = FUNC_0(VAR_8,
         VAR_6->partial_buf,
         &VAR_9);
  }

  VAR_11 &= 0xF0;


  if (VAR_11) {
   VAR_9 += FUNC_2(VAR_3, VAR_6,
    VAR_11,
    VAR_8 + VAR_9,
    VAR_10 - VAR_9);
  }


  VAR_6->is_partial_line = 0;

  while (VAR_9 < VAR_10) {
   u32 VAR_12 = 0;

   VAR_11 = FUNC_1(
    VAR_8 + VAR_9,
    VAR_10 - VAR_9,
    &VAR_12);

   VAR_9 += VAR_12;

   VAR_11 &= 0xF0;
   if (VAR_11 && (VAR_9 < VAR_10)) {
    VAR_9 += FUNC_2(VAR_3,
     VAR_6, VAR_11,
     VAR_8+VAR_9,
     VAR_10-VAR_9);
   }
  }



  FUNC_3(VAR_6->partial_buf, VAR_8 + VAR_10 - 4, 4);
  VAR_9 = 0;
 }

 return VAR_7;
}
