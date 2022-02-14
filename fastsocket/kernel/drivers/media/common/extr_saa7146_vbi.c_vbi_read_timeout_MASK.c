
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct saa7146_fh*,struct file*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct file *VAR_1 = (struct file*)VAR_0;
 struct saa7146_fh *VAR_2 = VAR_1->private_data;
 struct saa7146_dev *VAR_3 = VAR_2->dev;

 FUNC_0(("dev:%p, fh:%p\n",VAR_3, VAR_2));

 FUNC_1(VAR_2, VAR_1);
}
