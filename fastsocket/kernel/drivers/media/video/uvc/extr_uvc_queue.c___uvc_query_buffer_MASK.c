
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int flags; } ;
struct uvc_buffer {int state; scalar_t__ vma_use_count; int buf; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_buffer*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct uvc_buffer *VAR_3,
  struct v4l2_buffer *VAR_4)
{
 FUNC_0(VAR_4, &VAR_3->buf, sizeof *VAR_4);

 if (VAR_3->vma_use_count)
  VAR_4->flags |= VAR_1;

 switch (VAR_3->state) {
 case 131:
 case 132:
  VAR_4->flags |= VAR_0;
  break;
 case 129:
 case 133:
 case 128:
  VAR_4->flags |= VAR_2;
  break;
 case 130:
 default:
  break;
 }
}
