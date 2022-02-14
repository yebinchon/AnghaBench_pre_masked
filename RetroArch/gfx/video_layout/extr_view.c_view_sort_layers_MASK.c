
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int layers_count; TYPE_2__* layers; } ;
typedef TYPE_1__ view_t ;
struct TYPE_7__ {void* blend; } ;
typedef TYPE_2__ layer_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(view_t *VAR_3)
{
   layer_t VAR_4[6];
   layer_t *VAR_5;
   int VAR_6 = 0;


   if ((VAR_5 = FUNC_0(VAR_3, "screen")))
   {
      VAR_5->blend = VAR_2;
      VAR_4[VAR_6] = *VAR_5;
      ++VAR_6;
   }

   if ((VAR_5 = FUNC_0(VAR_3, "overlay")))
   {
      VAR_5->blend = VAR_2;
      VAR_4[VAR_6] = *VAR_5;
      ++VAR_6;
   }

   if ((VAR_5 = FUNC_0(VAR_3, "backdrop")))
   {
      VAR_5->blend = VAR_0;
      VAR_4[VAR_6] = *VAR_5;
      ++VAR_6;
   }

   if ((VAR_5 = FUNC_0(VAR_3, "bezel")))
   {
      VAR_5->blend = VAR_1;
      VAR_4[VAR_6] = *VAR_5;
      ++VAR_6;
   }

   if ((VAR_5 = FUNC_0(VAR_3, "cpanel")))
   {
      VAR_5->blend = VAR_1;
      VAR_4[VAR_6] = *VAR_5;
      ++VAR_6;
   }

   if ((VAR_5 = FUNC_0(VAR_3, "marquee")))
   {
      VAR_5->blend = VAR_1;
      VAR_4[VAR_6] = *VAR_5;
      ++VAR_6;
   }

   for (VAR_6 = 0; VAR_6 < VAR_3->layers_count; ++VAR_6)
      VAR_3->layers[VAR_6] = VAR_4[VAR_6];
}
