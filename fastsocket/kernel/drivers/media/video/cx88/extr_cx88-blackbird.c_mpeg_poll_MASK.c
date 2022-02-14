
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cx8802_fh* private_data; } ;
struct cx8802_fh {int mpegq; struct cx8802_dev* dev; } ;
struct cx8802_dev {int mpeg_active; } ;


 int FUNC_0 (struct file*,struct cx8802_fh*) ;
 unsigned int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct file *VAR_0, struct poll_table_struct *VAR_1)
{
 struct cx8802_fh *VAR_2 = VAR_0->private_data;
 struct cx8802_dev *VAR_3 = VAR_2->dev;

 if (!VAR_3->mpeg_active)
  FUNC_0(VAR_0, VAR_2);

 return FUNC_1(VAR_0, &VAR_2->mpegq, VAR_1);
}
