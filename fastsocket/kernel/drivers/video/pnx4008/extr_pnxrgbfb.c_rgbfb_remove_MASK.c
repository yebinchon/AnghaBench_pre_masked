
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; } ;
struct fb_info {int cmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 struct fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2) {
  FUNC_6(VAR_2);
  FUNC_0(&VAR_2->cmap);
  FUNC_1(VAR_2);
  FUNC_3(VAR_1, ((void*)0));
 }

 FUNC_4(VAR_0, VAR_1->id);
 FUNC_5(VAR_1->id);

 return 0;
}
