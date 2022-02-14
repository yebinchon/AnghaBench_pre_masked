
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_8__* shader_preset; TYPE_4__* luts; TYPE_7__* pass; } ;
typedef TYPE_5__ wiiu_video_t ;
struct TYPE_15__ {unsigned int passes; unsigned int luts; } ;
struct TYPE_9__ {int * image; } ;
struct TYPE_10__ {TYPE_1__ surface; } ;
struct TYPE_14__ {TYPE_2__ texture; scalar_t__ mem1; int ** ps_ubos; int ** vs_ubos; int gfd; } ;
struct TYPE_11__ {int * image; } ;
struct TYPE_12__ {TYPE_3__ surface; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*,int ,int) ;

__attribute__((used)) static void FUNC_5(wiiu_video_t *VAR_0)
{
   unsigned VAR_1;
   if (!VAR_0->shader_preset)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->shader_preset->passes; VAR_1++)
   {
      FUNC_3(VAR_0->pass[VAR_1].gfd);
      FUNC_1(VAR_0->pass[VAR_1].vs_ubos[0]);
      FUNC_1(VAR_0->pass[VAR_1].vs_ubos[1]);
      FUNC_1(VAR_0->pass[VAR_1].ps_ubos[0]);
      FUNC_1(VAR_0->pass[VAR_1].ps_ubos[1]);
      if(VAR_0->pass[VAR_1].mem1)
         FUNC_0(VAR_0->pass[VAR_1].texture.surface.image);
      else
         FUNC_1(VAR_0->pass[VAR_1].texture.surface.image);
   }

   FUNC_4(VAR_0->pass, 0, sizeof(VAR_0->pass));

   for (VAR_1 = 0; VAR_1 < VAR_0->shader_preset->luts; VAR_1++)
   {
      FUNC_1(VAR_0->luts[VAR_1].surface.image);
      VAR_0->luts[VAR_1].surface.image = ((void*)0);
   }

   FUNC_2(VAR_0->shader_preset);
   VAR_0->shader_preset = ((void*)0);
}
