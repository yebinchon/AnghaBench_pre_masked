
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visual; } ;
struct TYPE_4__ {int cmap; TYPE_1__ fix; } ;
struct pxafb_info {int palette_size; TYPE_2__ fb; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct fb_info*) ;
 int FUNC_1 (struct pxafb_info*,int ) ;
 int FUNC_2 (int,int ,int ,int ,int ,struct fb_info*) ;

__attribute__((used)) static int FUNC_3(int VAR_4, struct fb_info *VAR_5)
{
 struct pxafb_info *VAR_6 = (struct pxafb_info *)VAR_5;
 int VAR_7;

 switch (VAR_4) {
 case 130:
 case 128:
 case 132:
 case 131:
  if (VAR_6->fb.fix.visual == VAR_2 ||
      VAR_6->fb.fix.visual == VAR_3)
   for (VAR_7 = 0; VAR_7 < VAR_6->palette_size; VAR_7++)
    FUNC_2(VAR_7, 0, 0, 0, 0, VAR_5);

  FUNC_1(VAR_6, VAR_0);

  break;

 case 129:

  if (VAR_6->fb.fix.visual == VAR_2 ||
      VAR_6->fb.fix.visual == VAR_3)
   FUNC_0(&VAR_6->fb.cmap, VAR_5);
  FUNC_1(VAR_6, VAR_1);
 }
 return 0;
}
