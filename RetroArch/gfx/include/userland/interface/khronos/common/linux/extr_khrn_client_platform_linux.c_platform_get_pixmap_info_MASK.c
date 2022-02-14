
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {scalar_t__ format; scalar_t__ storage; scalar_t__ aux; scalar_t__ stride; void* height; void* width; } ;
typedef TYPE_1__ KHRN_IMAGE_WRAP_T ;
typedef scalar_t__ EGLNativePixmapType ;


 scalar_t__ FUNC_0 (void*) ;

bool FUNC_1(EGLNativePixmapType VAR_0, KHRN_IMAGE_WRAP_T *VAR_1)
{
   VAR_1->format = FUNC_0(((uint32_t *)VAR_0)[4]);
   VAR_1->width = ((uint32_t *)VAR_0)[2];
   VAR_1->height = ((uint32_t *)VAR_0)[3];


   VAR_1->stride = 0;
   VAR_1->aux = 0;
   VAR_1->storage = 0;

   return VAR_1->format != 0;
}
