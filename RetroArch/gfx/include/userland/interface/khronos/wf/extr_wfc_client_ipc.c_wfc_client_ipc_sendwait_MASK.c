
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {size_t destlen; int sem; void* dest; } ;
typedef TYPE_2__ WFC_WAITER_T ;
struct TYPE_12__ {TYPE_2__* ptr; } ;
struct TYPE_14__ {TYPE_1__ waiter; int magic; } ;
typedef TYPE_3__ WFC_IPC_MSG_HEADER_T ;
typedef int VCOS_STATUS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_15__ {size_t member_1; TYPE_3__* member_0; } ;
typedef TYPE_4__ VCHIQ_ELEMENT_T ;
struct TYPE_16__ {int service; int refcount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_6__ VAR_6 ;
 TYPE_2__* FUNC_7 (TYPE_6__*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_10 () ;

VCOS_STATUS_T FUNC_11(WFC_IPC_MSG_HEADER_T *VAR_7,
                                       size_t VAR_8,
                                       void *VAR_9,
                                       size_t *VAR_10)
{
   VCOS_STATUS_T VAR_11 = VAR_4;
   WFC_WAITER_T *VAR_12;
   VCHIQ_STATUS_T VAR_13;
   VCHIQ_ELEMENT_T VAR_14[] = {{VAR_7, VAR_8}};

   FUNC_2(VAR_8 >= sizeof(*VAR_7));
   FUNC_2(VAR_9);

   if (!FUNC_6(VAR_6.refcount))
   {
      FUNC_0("%s: client uninitialised", VAR_3);

      return VAR_1;
   }

   VAR_7->magic = VAR_5;

   VAR_12 = FUNC_7(&VAR_6);
   VAR_12->dest = VAR_9;
   VAR_12->destlen = *VAR_10;
   VAR_7->waiter.ptr = VAR_12;

   FUNC_10();

   FUNC_4("%s: wait %p, reply to %p", VAR_3, VAR_12, VAR_9);
   VAR_13 = FUNC_1(VAR_6.service, VAR_14, 1);

   if (VAR_13 != VAR_0)
   {
      FUNC_3("%s: failed to queue, 0x%x", VAR_3, VAR_13);
      VAR_11 = VAR_2;
      goto completed;
   }






   FUNC_5(&VAR_12->sem);
   FUNC_4("%s: got reply (len %i/%i)", VAR_3, (int)*VAR_10, (int)VAR_12->destlen);
   *VAR_10 = VAR_12->destlen;



completed:
   FUNC_9(&VAR_6, VAR_12);
   FUNC_8();

   return VAR_11;
}
