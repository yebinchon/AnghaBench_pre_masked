
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ptr; } ;
struct TYPE_8__ {TYPE_1__ waiter; int magic; int type; } ;
typedef TYPE_2__ WFC_IPC_MSG_HEADER_T ;
typedef int VCOS_STATUS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_9__ {size_t member_1; TYPE_2__* member_0; } ;
typedef TYPE_3__ VCHIQ_ELEMENT_T ;
struct TYPE_10__ {int service; int refcount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (char*,int ,int ,size_t) ;
 int FUNC_5 (int ) ;
 TYPE_5__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

VCOS_STATUS_T FUNC_8(WFC_IPC_MSG_HEADER_T *VAR_7,
                                    size_t VAR_8)
{
   VCHIQ_STATUS_T VAR_9;
   VCHIQ_ELEMENT_T VAR_10[] = {{VAR_7, VAR_8}};

   FUNC_4("%s: type %d, len %d", VAR_3, VAR_7->type, VAR_8);

   FUNC_2(VAR_8 >= sizeof(*VAR_7));

   if (!FUNC_5(VAR_6.refcount))
   {
      FUNC_0("%s: client uninitialised", VAR_3);

      return VAR_1;
   }

   VAR_7->magic = VAR_5;
   VAR_7->waiter.ptr = ((void*)0);

   FUNC_7();

   VAR_9 = FUNC_1(VAR_6.service, VAR_10, 1);

   FUNC_6();

   if (VAR_9 != VAR_0)
   {
      FUNC_3("%s: failed to queue, 0x%x", VAR_3, VAR_9);
      return VAR_2;
   }

   return VAR_4;
}
