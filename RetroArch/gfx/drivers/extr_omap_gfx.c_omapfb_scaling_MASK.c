
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nat_h; scalar_t__ nat_w; } ;
typedef TYPE_1__ omapfb_data_t ;



__attribute__((used)) static float FUNC_0(omapfb_data_t *VAR_0, int VAR_1, int VAR_2)
{
   const float VAR_3 = (float)VAR_0->nat_w / (float)VAR_1;
   const float VAR_4 = (float)VAR_0->nat_h / (float)VAR_2;

   return (VAR_3 < VAR_4 ? VAR_3 : VAR_4);
}
