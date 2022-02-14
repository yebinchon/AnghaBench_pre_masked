
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* img_comp; } ;
typedef TYPE_2__ stbi__jpeg ;
struct TYPE_4__ {int * linebuf; scalar_t__ coeff; int * raw_coeff; int * data; int * raw_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(stbi__jpeg *VAR_0, int VAR_1, int VAR_2)
{
   int VAR_3;
   for (VAR_3=0; VAR_3 < VAR_1; ++VAR_3) {
      if (VAR_0->img_comp[VAR_3].raw_data) {
         FUNC_0(VAR_0->img_comp[VAR_3].raw_data);
         VAR_0->img_comp[VAR_3].raw_data = ((void*)0);
         VAR_0->img_comp[VAR_3].data = ((void*)0);
      }
      if (VAR_0->img_comp[VAR_3].raw_coeff) {
         FUNC_0(VAR_0->img_comp[VAR_3].raw_coeff);
         VAR_0->img_comp[VAR_3].raw_coeff = 0;
         VAR_0->img_comp[VAR_3].coeff = 0;
      }
      if (VAR_0->img_comp[VAR_3].linebuf) {
         FUNC_0(VAR_0->img_comp[VAR_3].linebuf);
         VAR_0->img_comp[VAR_3].linebuf = ((void*)0);
      }
   }
   return VAR_2;
}
