
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinxfb_drvdata {int reg_ctrl_default; } ;
struct fb_info {int dummy; } ;







 int VAR_0 ;
 struct xilinxfb_drvdata* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct xilinxfb_drvdata*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct fb_info *VAR_2)
{
 struct xilinxfb_drvdata *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_1) {
 case 129:

  FUNC_1(VAR_3, VAR_0, VAR_3->reg_ctrl_default);
  break;

 case 131:
 case 128:
 case 132:
 case 130:

  FUNC_1(VAR_3, VAR_0, 0);
 default:
  break;

 }
 return 0;
}
