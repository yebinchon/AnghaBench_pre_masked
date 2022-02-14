
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int layers_count; int * name; int * layers; int * screens; } ;
typedef TYPE_1__ view_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(view_t *VAR_0)
{
   int VAR_1;

   FUNC_0(VAR_0->screens);

   for (VAR_1 = 0; VAR_1 < VAR_0->layers_count; ++VAR_1)
      FUNC_1(&VAR_0->layers[VAR_1]);

   FUNC_0(VAR_0->layers);
   FUNC_0(VAR_0->name);
}
