
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scaler_ctx {int dummy; } ;
struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct TYPE_5__ {int* pbo_readback_valid; size_t pbo_readback_index; int * readback_buffer_screenshot; int * pbo_readback; struct scaler_ctx pbo_readback_scaler; scalar_t__ pbo_readback_enable; TYPE_1__ vp; } ;
typedef TYPE_2__ gl_core_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int * FUNC_5 (unsigned int) ;
 int FUNC_6 (struct scaler_ctx*,int *,void const*) ;
 int FUNC_7 () ;
 int FUNC_8 (void const*,int *,unsigned int) ;

__attribute__((used)) static bool FUNC_9(void *VAR_2, uint8_t *VAR_3, bool VAR_4)
{
   gl_core_t *VAR_5 = (gl_core_t*)VAR_2;
   unsigned VAR_6 = 0;

   if (!VAR_5)
      return 0;

   FUNC_4(VAR_5, 0);
   VAR_6 = VAR_5->vp.width * VAR_5->vp.height;

   if (VAR_5->pbo_readback_enable)
   {
      const void *VAR_7 = ((void*)0);
      struct scaler_ctx *VAR_8 = &VAR_5->pbo_readback_scaler;



      if (!VAR_5->pbo_readback_valid[VAR_5->pbo_readback_index])
         goto error;

      VAR_5->pbo_readback_valid[VAR_5->pbo_readback_index] = 0;
      FUNC_1(VAR_1, VAR_5->pbo_readback[VAR_5->pbo_readback_index]);

      VAR_7 = FUNC_2(VAR_1, 0, VAR_6 * sizeof(uint32_t), VAR_0);
      FUNC_6(VAR_8, VAR_3, VAR_7);
      FUNC_3(VAR_1);
      FUNC_1(VAR_1, 0);
   }
   else
   {
      VAR_5->readback_buffer_screenshot = FUNC_5(VAR_6 * sizeof(uint32_t));

      if (!VAR_5->readback_buffer_screenshot)
         goto error;

      if (!VAR_4)
         FUNC_7();

      FUNC_8(
            (const void*)VAR_5->readback_buffer_screenshot,
            VAR_3,
            VAR_6);

      FUNC_0(VAR_5->readback_buffer_screenshot);
      VAR_5->readback_buffer_screenshot = ((void*)0);
   }

   FUNC_4(VAR_5, 1);
   return 1;

error:
   FUNC_4(VAR_5, 1);
   return 0;
}
