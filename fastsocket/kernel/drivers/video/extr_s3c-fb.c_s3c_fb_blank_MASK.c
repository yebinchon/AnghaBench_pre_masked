
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c_fb_win {unsigned int index; struct s3c_fb* parent; } ;
struct s3c_fb {int enabled; scalar_t__ regs; int dev; } ;
struct fb_info {struct s3c_fb_win* par; } ;







 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct s3c_fb*,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(int VAR_2, struct fb_info *VAR_3)
{
 struct s3c_fb_win *VAR_4 = VAR_3->par;
 struct s3c_fb *VAR_5 = VAR_4->parent;
 unsigned int VAR_6 = VAR_4->index;
 u32 VAR_7;

 FUNC_3(VAR_5->dev, "blank mode %d\n", VAR_2);

 VAR_7 = FUNC_4(VAR_5->regs + FUNC_0(VAR_6));

 switch (VAR_2) {
 case 130:
  VAR_7 &= ~VAR_0;
  VAR_5->enabled &= ~(1 << VAR_6);


 case 131:

  FUNC_6(VAR_1 | FUNC_2(0x0),
         VAR_5->regs + FUNC_1(VAR_6));
  break;

 case 129:
  FUNC_6(0x0, VAR_5->regs + FUNC_1(VAR_6));
  VAR_7 |= VAR_0;
  VAR_5->enabled |= (1 << VAR_6);
  break;

 case 128:
 case 132:
 default:
  return 1;
 }

 FUNC_6(VAR_7, VAR_5->regs + FUNC_0(VAR_6));
 if (VAR_6 == 0)
  FUNC_5(VAR_5, VAR_2 != 130 ? 1 : 0);

 return 0;
}
