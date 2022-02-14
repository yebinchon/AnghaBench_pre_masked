
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_data {int is_streaming; } ;
struct urb {int actual_length; int transfer_buffer_length; scalar_t__ status; scalar_t__ transfer_buffer; struct front_face* context; } ;
struct front_face {TYPE_1__* pd; } ;
struct TYPE_2__ {struct video_data video_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct video_data*,char*,int) ;
 int FUNC_1 (struct video_data*,char*,int) ;
 int FUNC_2 (struct front_face*,struct video_data*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_2)
{
 struct front_face *VAR_3 = VAR_2->context;
 struct video_data *VAR_4 = &VAR_3->pd->video_data;
 char *VAR_5 = (char *)VAR_2->transfer_buffer;
 int VAR_6 = VAR_2->actual_length;
 int VAR_7 = 0;

 if (!VAR_4->is_streaming || VAR_2->status) {
  if (VAR_2->status == -VAR_0)
   goto resend_it;
  return;
 }
 if (!FUNC_2(VAR_3, VAR_4))
  goto resend_it;

 if (VAR_6 == VAR_2->transfer_buffer_length)
  FUNC_1(VAR_4, VAR_5, VAR_6);
 else
  FUNC_0(VAR_4, VAR_5, VAR_6);

resend_it:
 VAR_7 = FUNC_4(VAR_2, VAR_1);
 if (VAR_7)
  FUNC_3(" submit failed: error %d", VAR_7);
}
