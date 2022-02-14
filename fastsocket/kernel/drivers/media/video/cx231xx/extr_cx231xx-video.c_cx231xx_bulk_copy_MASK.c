
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct urb {unsigned char* transfer_buffer; int actual_length; int status; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {int last_sav; int partial_buf; scalar_t__ is_partial_line; } ;
struct cx231xx_buffer {int vb; } ;
struct TYPE_3__ {struct cx231xx_buffer* buf; } ;
struct TYPE_4__ {TYPE_1__ bulk_ctl; } ;
struct cx231xx {int state; TYPE_2__ video_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int*) ;
 int FUNC_1 (unsigned char*,int,int*) ;
 int FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*,int,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (struct cx231xx*,int,int ) ;
 unsigned char* FUNC_5 (int *) ;

__attribute__((used)) static inline int FUNC_6(struct cx231xx *VAR_3, struct urb *VAR_4)
{
 struct cx231xx_buffer *VAR_5;
 struct cx231xx_dmaqueue *VAR_6 = VAR_4->context;
 unsigned char *VAR_7 = ((void*)0);
 int VAR_8 = 1;
 unsigned char *VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0;

 if (!VAR_3)
  return 0;

 if ((VAR_3->state & VAR_0) || (VAR_3->state & VAR_1))
  return 0;

 if (VAR_4->status < 0) {
  FUNC_4(VAR_3, -1, VAR_4->status);
  if (VAR_4->status == -VAR_2)
   return 0;
 }

 VAR_5 = VAR_3->video_mode.bulk_ctl.buf;
 if (VAR_5 != ((void*)0))
  VAR_7 = FUNC_5(&VAR_5->vb);

 if (1) {


  VAR_9 = VAR_4->transfer_buffer;
  VAR_11 = VAR_4->actual_length;
  VAR_10 = 0;

  if (VAR_6->is_partial_line) {

   VAR_12 = VAR_6->last_sav;
  } else {


   VAR_12 =
       FUNC_0(VAR_9,
         VAR_6->partial_buf,
         &VAR_10);
  }

  VAR_12 &= 0xF0;


  if (VAR_12) {
   VAR_10 += FUNC_2(VAR_3, VAR_6,
    VAR_12,
    VAR_9 + VAR_10,
    VAR_11 - VAR_10);
  }




  while (VAR_10 < VAR_11) {
   u32 VAR_13 = 0;

   VAR_12 = FUNC_1(
    VAR_9 + VAR_10,
    VAR_11 - VAR_10,
    &VAR_13);

   VAR_10 += VAR_13;

   VAR_12 &= 0xF0;
   if (VAR_12 && (VAR_10 < VAR_11)) {
    VAR_10 += FUNC_2(VAR_3,
     VAR_6, VAR_12,
     VAR_9 + VAR_10,
     VAR_11 - VAR_10);
   }
  }



  FUNC_3(VAR_6->partial_buf, VAR_9 + VAR_11 - 4, 4);
  VAR_10 = 0;

 }
 return VAR_8;
}
