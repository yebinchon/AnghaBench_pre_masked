
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {unsigned int ctl_input; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct em28xx_fh *VAR_5 = VAR_3;
 struct em28xx *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4 >= VAR_1)
  return -VAR_0;
 if (0 == FUNC_0(VAR_4)->type)
  return -VAR_0;

 VAR_6->ctl_input = VAR_4;

 FUNC_2(VAR_6, VAR_6->ctl_input);
 return 0;
}
