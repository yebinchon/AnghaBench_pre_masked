
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct leo_par {TYPE_1__* ld_ss1; } ;
struct fb_info {scalar_t__ par; } ;
struct TYPE_2__ {int ss1_misc; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1)
{
 struct leo_par *VAR_2 = (struct leo_par *) VAR_1->par;
 u32 VAR_3;

 VAR_3 = FUNC_1(&VAR_2->ld_ss1->ss1_misc);
 VAR_3 |= VAR_0;
 FUNC_2(VAR_3, &VAR_2->ld_ss1->ss1_misc);

 FUNC_0(VAR_1);
}
