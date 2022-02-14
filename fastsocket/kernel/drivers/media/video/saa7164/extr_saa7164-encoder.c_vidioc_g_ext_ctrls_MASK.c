
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int dummy; } ;
struct saa7164_port {int dummy; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct saa7164_port*,struct v4l2_ext_control*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
 struct v4l2_ext_controls *VAR_4)
{
 struct saa7164_encoder_fh *VAR_5 = VAR_2->private_data;
 struct saa7164_port *VAR_6 = VAR_5->port;
 int VAR_7, VAR_8 = 0;

 if (VAR_4->ctrl_class == VAR_1) {
  for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
   struct v4l2_ext_control *VAR_9 = VAR_4->controls + VAR_7;

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
