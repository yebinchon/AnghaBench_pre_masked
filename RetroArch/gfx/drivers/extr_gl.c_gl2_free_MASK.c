
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int textures; scalar_t__ renderchain_data; scalar_t__ core_context_in_use; int pbo_readback_scaler; int * pbo_readback; scalar_t__ pbo_readback_enable; int scaler; int pbo; scalar_t__ menu_texture; scalar_t__* texture; int shader_data; TYPE_1__* shader; scalar_t__ have_sync; } ;
typedef TYPE_2__ gl_t ;
struct TYPE_17__ {int vao; } ;
typedef TYPE_3__ gl2_renderchain_data_t ;
struct TYPE_15__ {int (* deinit ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int,scalar_t__*) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(void *VAR_1)
{
   gl_t *VAR_2 = (gl_t*)VAR_1;
   if (!VAR_2)
      return;





   FUNC_1(VAR_2, 0);

   if (VAR_2->have_sync)
      FUNC_7(VAR_2,
            (gl2_renderchain_data_t*)
            VAR_2->renderchain_data);

   FUNC_0();

   VAR_2->shader->deinit(VAR_2->shader_data);

   FUNC_12(VAR_2->textures, VAR_2->texture);
   FUNC_14(&VAR_2->scaler);

   if (VAR_2->pbo_readback_enable)
   {
      FUNC_11(4, VAR_2->pbo_readback);
      FUNC_14(&VAR_2->pbo_readback_scaler);
   }


   if (VAR_2->core_context_in_use)
   {
      gl2_renderchain_data_t *VAR_3 = (gl2_renderchain_data_t*)
         VAR_2->renderchain_data;

      FUNC_10(0);
      FUNC_13(1, &VAR_3->vao);
   }


   FUNC_5(VAR_2, (gl2_renderchain_data_t*)VAR_2->renderchain_data);
   FUNC_6(VAR_2, (gl2_renderchain_data_t*)VAR_2->renderchain_data);
   FUNC_2(VAR_2);

   FUNC_16();

   FUNC_3(VAR_2);
}
