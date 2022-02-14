
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {unsigned int ctl_input; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct saa7134_fh *VAR_3 = VAR_1;
 struct saa7134_dev *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->ctl_input;
 return 0;
}
