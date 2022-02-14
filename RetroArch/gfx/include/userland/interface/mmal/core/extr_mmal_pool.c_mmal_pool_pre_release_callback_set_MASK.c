
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int header_size; } ;
struct TYPE_4__ {int headers_num; scalar_t__ header; } ;
typedef TYPE_1__ MMAL_POOL_T ;
typedef TYPE_2__ MMAL_POOL_PRIVATE_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BH_PRE_RELEASE_CB_T ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,void*) ;

void FUNC_2(MMAL_POOL_T *VAR_1, MMAL_BH_PRE_RELEASE_CB_T VAR_2, void *VAR_3)
{
   unsigned int VAR_4;
   MMAL_POOL_PRIVATE_T *VAR_5 = (MMAL_POOL_PRIVATE_T *)VAR_1;
   MMAL_BUFFER_HEADER_T *VAR_6 =
         (MMAL_BUFFER_HEADER_T*)((uint8_t*)VAR_1->header + FUNC_0(sizeof(void*)*VAR_1->headers_num,VAR_0));

   for (VAR_4 = 0; VAR_4 < VAR_1->headers_num; ++VAR_4)
   {
      FUNC_1(VAR_6, VAR_2, VAR_3);
      VAR_6 = (MMAL_BUFFER_HEADER_T *)((uint8_t*)VAR_6 + VAR_5->header_size);
   }
}
