
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ state; int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {int blank_mode; int regbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned char) ;
 int FUNC_3 (int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_4(int VAR_3, struct fb_info *VAR_4)
{
 unsigned char VAR_5;
 struct cirrusfb_info *VAR_6 = VAR_4->par;
 int VAR_7 = VAR_6->blank_mode;

 FUNC_0(VAR_4->device, "ENTER, blank mode = %d\n", VAR_3);

 if (VAR_4->state != VAR_1 ||
     VAR_7 == VAR_3) {
  FUNC_0(VAR_4->device, "EXIT, returning 0\n");
  return 0;
 }


 if (VAR_7 == 131 ||
     VAR_7 == 129)

  VAR_5 = 0;
 else

  VAR_5 = 0x20;

 VAR_5 |= FUNC_1(VAR_6->regbase, VAR_2) & 0xdf;
 FUNC_3(VAR_6->regbase, VAR_2, VAR_5);

 switch (VAR_3) {
 case 129:
 case 131:
  VAR_5 = 0x00;
  break;
 case 128:
  VAR_5 = 0x04;
  break;
 case 132:
  VAR_5 = 0x02;
  break;
 case 130:
  VAR_5 = 0x06;
  break;
 default:
  FUNC_0(VAR_4->device, "EXIT, returning 1\n");
  return 1;
 }

 FUNC_2(VAR_6->regbase, VAR_0, VAR_5);

 VAR_6->blank_mode = VAR_3;
 FUNC_0(VAR_4->device, "EXIT, returning 0\n");


 return (VAR_3 == 131) ? 1 : 0;
}
