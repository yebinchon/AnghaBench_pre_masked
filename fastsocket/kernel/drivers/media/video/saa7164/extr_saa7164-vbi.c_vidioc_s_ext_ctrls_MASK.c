
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int dummy; } ;
struct saa7164_vbi_fh {struct saa7164_port* port; } ;
struct saa7164_port {int dummy; } ;
struct file {struct saa7164_vbi_fh* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct saa7164_port*,struct v4l2_ext_control*) ;
 int FUNC_1 (struct v4l2_ext_control*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
 struct v4l2_ext_controls *VAR_4)
{
 struct saa7164_vbi_fh *VAR_5 = VAR_2->private_data;
 struct saa7164_port *VAR_6 = VAR_5->port;
 int VAR_7, VAR_8 = 0;

 if (VAR_4->ctrl_class == VAR_1) {
  for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
   struct v4l2_ext_control *VAR_9 = VAR_4->controls + VAR_7;

   VAR_8 = FUNC_1(VAR_9, 0);
   if (VAR_8) {
    VAR_4->error_idx = VAR_7;
    break;
   }
   VAR_8 = FUNC_0(VAR_6, VAR_9);
   if (VAR_8) {
    VAR_4->error_idx = VAR_7;
    break;
   }
  }
  return VAR_8;

 }

 return -VAR_0;
}
