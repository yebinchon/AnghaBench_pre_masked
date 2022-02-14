
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int alloc_size; int data; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_3(MMAL_POOL_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2, void *VAR_3)
{
   MMAL_PORT_T* VAR_4 = (MMAL_PORT_T*)VAR_3;
   MMAL_STATUS_T VAR_5;
   FUNC_1(VAR_1);

   FUNC_0("released buffer %p, data %p alloc_size %u length %u",
             VAR_2, VAR_2->data, VAR_2->alloc_size, VAR_2->length);


   VAR_5 = FUNC_2(VAR_4, VAR_2);


   return VAR_5 != VAR_0;
}
