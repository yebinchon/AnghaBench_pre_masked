
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layers_count; int * layers; } ;
typedef TYPE_1__ view_t ;
typedef int layer_t ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (void**,int,int) ;
 int * FUNC_2 (TYPE_1__*,char const*) ;

layer_t *FUNC_3(view_t *VAR_0, const char *VAR_1)
{
   layer_t *VAR_2 = FUNC_2(VAR_0, VAR_1);

   if (!VAR_2)
   {
      FUNC_1((void**)&VAR_0->layers, sizeof(layer_t), ++VAR_0->layers_count);

      VAR_2 = &VAR_0->layers[VAR_0->layers_count - 1];
      FUNC_0(VAR_2, VAR_1);
   }

   return VAR_2;
}
