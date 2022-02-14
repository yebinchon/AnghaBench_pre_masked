
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_info {int dummy; } ;
struct fb_cmap {int member_1; int* member_2; int* member_3; int* member_4; int * member_5; int member_0; } ;


 int FUNC_0 (struct fb_cmap*,struct fb_cmap*,int) ;

__attribute__((used)) static int FUNC_1(struct fb_cmap *VAR_0, int VAR_1, int VAR_2,
    struct fb_info *VAR_3)
{
 static u16 VAR_4[2] = {0x0000, 0x000f};
 static struct fb_cmap VAR_5 = {0, 2, VAR_4, VAR_4, VAR_4, ((void*)0)};

 FUNC_0(&VAR_5, VAR_0, VAR_1 ? 0 : 2);
 return 0;
}
