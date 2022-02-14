
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct firedtv_tuner_status {int dummy; } ;
struct firedtv {int device; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct firedtv* priv; } ;







 int VAR_0 ;
 int FUNC_0 (struct firedtv*,struct firedtv_tuner_status*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct firedtv*,void*) ;
 int FUNC_4 (struct firedtv*,void*) ;
 int FUNC_5 (struct firedtv*) ;
 int FUNC_6 (struct firedtv*,void*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2,
       unsigned int VAR_3, void *VAR_4)
{
 struct dvb_device *VAR_5 = VAR_2->private_data;
 struct firedtv *VAR_6 = VAR_5->priv;
 struct firedtv_tuner_status VAR_7;
 int VAR_8;

 switch (VAR_3) {
 case 129:
  VAR_8 = FUNC_5(VAR_6);
  break;
 case 132:
  VAR_8 = FUNC_2(VAR_4);
  break;
 case 130:
  VAR_8 = FUNC_4(VAR_6, VAR_4);
  break;
 case 131:
  VAR_8 = FUNC_3(VAR_6, VAR_4);
  break;
 case 128:
  VAR_8 = FUNC_6(VAR_6, VAR_4);
  break;
 default:
  FUNC_1(VAR_6->device, "unhandled CA ioctl %u\n", VAR_3);
  VAR_8 = -VAR_0;
 }


 FUNC_0(VAR_6, &VAR_7);

 return VAR_8;
}
