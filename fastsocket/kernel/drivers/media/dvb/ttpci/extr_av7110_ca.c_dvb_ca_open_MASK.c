
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct av7110 {int ci_wbuffer; int ci_rbuffer; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct dvb_device *VAR_2 = VAR_1->private_data;
 struct av7110 *VAR_3 = VAR_2->priv;
 int VAR_4 = FUNC_2(VAR_0, VAR_1);

 FUNC_1(8, "av7110:%p\n",VAR_3);

 if (VAR_4 < 0)
  return VAR_4;
 FUNC_0(&VAR_3->ci_rbuffer, &VAR_3->ci_wbuffer);
 return 0;
}
