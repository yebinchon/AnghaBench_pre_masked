
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * pipelines; } ;
struct TYPE_8__ {int font; int alpha_blend; } ;
struct TYPE_10__ {TYPE_1__ display; TYPE_3__* context; TYPE_2__ pipelines; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_9__ {int device; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(vk_t *VAR_0)
{
   unsigned VAR_1;

   FUNC_2(VAR_0);
   FUNC_1(VAR_0->context->device,
         VAR_0->pipelines.alpha_blend, ((void*)0));
   FUNC_1(VAR_0->context->device,
         VAR_0->pipelines.font, ((void*)0));

   for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->display.pipelines); VAR_1++)
      FUNC_1(VAR_0->context->device,
            VAR_0->display.pipelines[VAR_1], ((void*)0));
}
