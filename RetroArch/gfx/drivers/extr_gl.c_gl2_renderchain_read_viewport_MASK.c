
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scaler_ctx {int dummy; } ;
struct TYPE_5__ {unsigned int width; unsigned int height; } ;
struct TYPE_6__ {int* pbo_readback_valid; size_t pbo_readback_index; int * readback_buffer_screenshot; struct scaler_ctx pbo_readback_scaler; TYPE_1__ vp; int * pbo_readback; scalar_t__ pbo_readback_enable; } ;
typedef TYPE_2__ gl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (unsigned int) ;
 int FUNC_8 (struct scaler_ctx*,int *,int const*) ;
 int FUNC_9 () ;
 int FUNC_10 (void const*,int *,unsigned int) ;

__attribute__((used)) static bool FUNC_11(
      gl_t *VAR_3,
      uint8_t *VAR_4, bool VAR_5)
{
   unsigned VAR_6 = 0;

   FUNC_2(VAR_3, 0);

   VAR_6 = VAR_3->vp.width * VAR_3->vp.height;
   {
      VAR_3->readback_buffer_screenshot = FUNC_7(VAR_6 * sizeof(uint32_t));

      if (!VAR_3->readback_buffer_screenshot)
         goto error;

      if (!VAR_5)
         FUNC_9();

      FUNC_10(
            (const void*)VAR_3->readback_buffer_screenshot,
            VAR_4,
            VAR_6);

      FUNC_1(VAR_3->readback_buffer_screenshot);
      VAR_3->readback_buffer_screenshot = ((void*)0);
   }

   FUNC_2(VAR_3, 1);
   return 1;

error:
   FUNC_2(VAR_3, 1);

   return 0;
}
