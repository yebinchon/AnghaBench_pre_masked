
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_video {TYPE_1__* sunxi_disp; } ;
struct TYPE_2__ {float refresh_rate; } ;



__attribute__((used)) static float FUNC_0 (void *VAR_0)
{
   struct sunxi_video *VAR_1 = (struct sunxi_video*)VAR_0;

   return VAR_1->sunxi_disp->refresh_rate;
}
