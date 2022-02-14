
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int capability; int type; int name; } ;
struct saa7164_port {struct saa7164_dev* dev; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct saa7164_dev {int dummy; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
 struct v4l2_tuner *VAR_7)
{
 struct saa7164_encoder_fh *VAR_8 = VAR_5->private_data;
 struct saa7164_port *VAR_9 = VAR_8->port;
 struct saa7164_dev *VAR_10 = VAR_9->dev;

 if (0 != VAR_7->index)
  return -VAR_1;

 FUNC_1(VAR_7->name, "tuner");
 VAR_7->type = VAR_2;
 VAR_7->capability = VAR_3 | VAR_4;

 FUNC_0(VAR_0, "VIDIOC_G_TUNER: tuner type %d\n", VAR_7->type);

 return 0;
}
