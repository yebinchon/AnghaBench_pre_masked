
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfb_info {int blank; } ;
struct fb_info {struct mfb_info* par; } ;
__attribute__((used)) static int FUNC_0(int VAR_0, struct fb_info *VAR_1)
{
 struct mfb_info *VAR_2 = VAR_1->par;

 VAR_2->blank = VAR_0;

 switch (VAR_0) {
 case 128:
 case 132:

 case 131:

  break;
 case 130:

  break;
 case 129:

  break;
 }

 return 0;
}
