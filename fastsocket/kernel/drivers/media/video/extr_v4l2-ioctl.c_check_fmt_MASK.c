
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ioctl_ops {int vidioc_g_fmt_type_private; int vidioc_g_fmt_sliced_vbi_out; int vidioc_g_fmt_sliced_vbi_cap; int vidioc_g_fmt_vbi_out; int vidioc_g_fmt_vbi_cap; int vidioc_g_fmt_vid_out_overlay; int vidioc_g_fmt_vid_out; int vidioc_g_fmt_vid_overlay; int vidioc_g_fmt_vid_cap; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(const struct v4l2_ioctl_ops *VAR_1, enum v4l2_buf_type VAR_2)
{
 if (VAR_1 == ((void*)0))
  return -VAR_0;

 switch (VAR_2) {
 case 131:
  if (VAR_1->vidioc_g_fmt_vid_cap)
   return 0;
  break;
 case 128:
  if (VAR_1->vidioc_g_fmt_vid_overlay)
   return 0;
  break;
 case 130:
  if (VAR_1->vidioc_g_fmt_vid_out)
   return 0;
  break;
 case 129:
  if (VAR_1->vidioc_g_fmt_vid_out_overlay)
   return 0;
  break;
 case 133:
  if (VAR_1->vidioc_g_fmt_vbi_cap)
   return 0;
  break;
 case 132:
  if (VAR_1->vidioc_g_fmt_vbi_out)
   return 0;
  break;
 case 135:
  if (VAR_1->vidioc_g_fmt_sliced_vbi_cap)
   return 0;
  break;
 case 134:
  if (VAR_1->vidioc_g_fmt_sliced_vbi_out)
   return 0;
  break;
 case 136:
  if (VAR_1->vidioc_g_fmt_type_private)
   return 0;
  break;
 }
 return -VAR_0;
}
