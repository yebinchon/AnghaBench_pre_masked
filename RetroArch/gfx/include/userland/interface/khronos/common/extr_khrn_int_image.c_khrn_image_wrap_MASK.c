
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef void* uint16_t ;
typedef int int32_t ;
struct TYPE_3__ {void* storage; int * aux; int stride; void* height; void* width; int format; } ;
typedef TYPE_1__ KHRN_IMAGE_WRAP_T ;
typedef int KHRN_IMAGE_FORMAT_T ;



void FUNC_0(KHRN_IMAGE_WRAP_T *VAR_0, KHRN_IMAGE_FORMAT_T VAR_1, uint32_t VAR_2, uint32_t VAR_3, int32_t VAR_4, void *VAR_5)
{
   VAR_0->format = VAR_1;
   VAR_0->width = (uint16_t)VAR_2;
   VAR_0->height = (uint16_t)VAR_3;
   VAR_0->stride = VAR_4;
   VAR_0->aux = ((void*)0);
   VAR_0->storage = VAR_5;
}
