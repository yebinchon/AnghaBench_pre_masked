
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_5__ {int fd; int handle; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef int VCHI_MSG_VECTOR_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_6__ {int count; int const* elements; int handle; } ;
typedef TYPE_2__ VCHIQ_QUEUE_MESSAGE_T ;
typedef int VCHIQ_ELEMENT_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;

int32_t
FUNC_5( VCHI_SERVICE_HANDLE_T VAR_3,
   VCHI_MSG_VECTOR_T * VAR_4,
   uint32_t VAR_5,
   VCHI_FLAGS_T VAR_6,
   void *VAR_7 )
{
   VCHI_SERVICE_T *VAR_8 = FUNC_1(VAR_3);
   VCHIQ_QUEUE_MESSAGE_T VAR_9;
   int VAR_10;

   FUNC_4(VAR_7);

   FUNC_3(VAR_6 == VAR_2);

   if (!VAR_8)
      return VAR_0;

   VAR_9.handle = VAR_8->handle;
   VAR_9.elements = (const VCHIQ_ELEMENT_T *)VAR_4;
   VAR_9.count = VAR_5;
   FUNC_0(VAR_10, FUNC_2(VAR_8->fd, VAR_1, &VAR_9));

   return VAR_10;
}
