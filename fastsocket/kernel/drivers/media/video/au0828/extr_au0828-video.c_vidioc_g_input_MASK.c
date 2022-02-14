
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {unsigned int ctrl_input; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct au0828_fh *VAR_3 = VAR_1;
 struct au0828_dev *VAR_4 = VAR_3->dev;
 *VAR_2 = VAR_4->ctrl_input;
 return 0;
}
