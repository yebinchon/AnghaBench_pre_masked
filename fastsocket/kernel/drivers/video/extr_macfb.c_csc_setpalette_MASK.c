
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {int clut_data; int clut_waddr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_2 (unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      struct fb_info *VAR_5)
{
 FUNC_0(1);
 FUNC_1(VAR_1, &VAR_0->clut_waddr);
 FUNC_1(VAR_2, &VAR_0->clut_data);
 FUNC_1(VAR_3, &VAR_0->clut_data);
 FUNC_1(VAR_4, &VAR_0->clut_data);
 return 0;
}
