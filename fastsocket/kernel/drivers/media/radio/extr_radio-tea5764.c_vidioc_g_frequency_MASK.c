
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct tea5764_regs {int tnctrl; } ;
struct tea5764_device {struct tea5764_regs regs; } ;
struct file {int dummy; } ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_frequency*,int ,int) ;
 int FUNC_1 (struct tea5764_device*) ;
 int FUNC_2 (struct tea5764_device*) ;
 struct tea5764_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct tea5764_device *VAR_5 = FUNC_3(VAR_2);
 struct tea5764_regs *VAR_6 = &VAR_5->regs;

 FUNC_2(VAR_5);
 FUNC_0(VAR_4, 0, sizeof(VAR_4));
 VAR_4->type = VAR_1;
 if (VAR_6->tnctrl & VAR_0)
  VAR_4->frequency = (FUNC_1(VAR_5) * 2) / 125;
 else
  VAR_4->frequency = 0;

 return 0;
}
