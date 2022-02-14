
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct TYPE_5__ {int * readback_buffer_screenshot; TYPE_1__ vp; } ;
typedef TYPE_2__ gl1_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int * FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (void const*,int *,unsigned int) ;

__attribute__((used)) static bool FUNC_5(void *VAR_0, uint8_t *VAR_1, bool VAR_2)
{
   unsigned VAR_3 = 0;
   gl1_t *VAR_4 = (gl1_t*)VAR_0;

   if (!VAR_4)
      return 0;

   FUNC_1(VAR_4, 0);

   VAR_3 = VAR_4->vp.width * VAR_4->vp.height;

   VAR_4->readback_buffer_screenshot = FUNC_2(VAR_3 * sizeof(uint32_t));

   if (!VAR_4->readback_buffer_screenshot)
      goto error;

   if (!VAR_2)
      FUNC_3();

   FUNC_4(
         (const void*)VAR_4->readback_buffer_screenshot,
         VAR_1,
         VAR_3);

   FUNC_0(VAR_4->readback_buffer_screenshot);
   VAR_4->readback_buffer_screenshot = ((void*)0);

   FUNC_1(VAR_4, 1);
   return 1;

error:
   FUNC_1(VAR_4, 1);

   return 0;
}
