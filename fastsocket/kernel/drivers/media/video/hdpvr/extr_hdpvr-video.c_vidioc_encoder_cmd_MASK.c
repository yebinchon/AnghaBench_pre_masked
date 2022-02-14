
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int cmd; int flags; int raw; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {int io_mutex; int v4l2_dev; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct hdpvr_device*) ;
 int FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4,
          struct v4l2_encoder_cmd *VAR_5)
{
 struct hdpvr_fh *VAR_6 = VAR_3->private_data;
 struct hdpvr_device *VAR_7 = VAR_6->dev;
 int VAR_8;

 FUNC_3(&VAR_7->io_mutex);

 FUNC_2(&VAR_5->raw, 0, sizeof(VAR_5->raw));
 switch (VAR_5->cmd) {
 case 129:
  VAR_5->flags = 0;
  VAR_8 = FUNC_0(VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_1(VAR_7);
  break;
 default:
  FUNC_5(VAR_1, VAR_2, &VAR_7->v4l2_dev,
    "Unsupported encoder cmd %d\n", VAR_5->cmd);
  VAR_8 = -VAR_0;
 }
 FUNC_4(&VAR_7->io_mutex);
 return VAR_8;
}
