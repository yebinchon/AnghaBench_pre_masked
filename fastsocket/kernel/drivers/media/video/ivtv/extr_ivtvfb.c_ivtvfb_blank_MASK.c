
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv {TYPE_1__* osd_info; } ;
struct fb_info {scalar_t__ par; } ;
struct TYPE_2__ {int blank_cur; } ;


 int VAR_0 ;





 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ivtv*,int ,int ,int ,int) ;
 int FUNC_2 (struct ivtv*,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4, struct fb_info *VAR_5)
{
 struct ivtv *VAR_6 = (struct ivtv *)VAR_5->par;

 FUNC_0("Set blanking mode : %d\n", VAR_4);
 switch (VAR_4) {
 case 129:
  FUNC_2(VAR_6, VAR_0, 1, 1);
  FUNC_1(VAR_6, VAR_1, VAR_3, VAR_2, 1);
  break;
 case 131:
 case 132:
 case 128:
  FUNC_2(VAR_6, VAR_0, 1, 0);
  FUNC_1(VAR_6, VAR_1, VAR_3, VAR_2, 1);
  break;
 case 130:
  FUNC_1(VAR_6, VAR_1, VAR_3, VAR_2, 0);
  FUNC_2(VAR_6, VAR_0, 1, 0);
  break;
 }
 VAR_6->osd_info->blank_cur = VAR_4;
 return 0;
}
