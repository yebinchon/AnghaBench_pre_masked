
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxfb_info {int dummy; } ;
struct fb_info {struct imxfb_info* par; } ;







 int FUNC_0 (struct imxfb_info*) ;
 int FUNC_1 (struct imxfb_info*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct fb_info *VAR_1)
{
 struct imxfb_info *VAR_2 = VAR_1->par;

 FUNC_2("imxfb_blank: blank=%d\n", VAR_0);

 switch (VAR_0) {
 case 130:
 case 128:
 case 132:
 case 131:
  FUNC_0(VAR_2);
  break;

 case 129:
  FUNC_1(VAR_2);
  break;
 }
 return 0;
}
