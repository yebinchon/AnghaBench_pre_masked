
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {unsigned int ctl_input; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct em28xx_fh *VAR_3 = VAR_1;
 struct em28xx *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->ctl_input;

 return 0;
}
