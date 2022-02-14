
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_6__ {int fd; int handle; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_7__ {int count; TYPE_3__* elements; int handle; } ;
typedef TYPE_2__ VCHIQ_QUEUE_MESSAGE_T ;
struct TYPE_8__ {void const* member_0; int member_1; } ;
typedef TYPE_3__ VCHIQ_ELEMENT_T ;


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
   const void * VAR_4,
   uint32_t VAR_5,
   VCHI_FLAGS_T VAR_6,
   void * VAR_7 )
{
   VCHI_SERVICE_T *VAR_8 = FUNC_1(VAR_3);
   VCHIQ_QUEUE_MESSAGE_T VAR_9;
   VCHIQ_ELEMENT_T VAR_10 = {VAR_4, VAR_5};
   int VAR_11;

   FUNC_4(VAR_7);
   FUNC_3(VAR_6 == VAR_2);

   if (!VAR_8)
      return VAR_0;

   VAR_9.handle = VAR_8->handle;
   VAR_9.elements = &VAR_10;
   VAR_9.count = 1;
   FUNC_0(VAR_11, FUNC_2(VAR_8->fd, VAR_1, &VAR_9));

   return VAR_11;
}
