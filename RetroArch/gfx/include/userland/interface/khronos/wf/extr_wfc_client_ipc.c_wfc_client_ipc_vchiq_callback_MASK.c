
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_17__ {int inuse; int destlen; int sem; int dest; } ;
typedef TYPE_4__ WFC_WAITER_T ;
struct TYPE_16__ {TYPE_4__* ptr; } ;
struct TYPE_18__ {TYPE_3__ waiter; int type; int magic; } ;
typedef TYPE_5__ WFC_IPC_MSG_HEADER_T ;
struct TYPE_15__ {int ptr; } ;
struct TYPE_14__ {int (* ptr ) (int ) ;} ;
struct TYPE_19__ {TYPE_2__ callback_data; TYPE_1__ callback_fn; } ;
typedef TYPE_6__ WFC_IPC_MSG_CALLBACK_T ;
typedef int (* WFC_CALLBACK_T ) (int ) ;
typedef int VCHIQ_STATUS_T ;
typedef TYPE_4__* VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_REASON_T ;
struct TYPE_20__ {int size; scalar_t__ data; } ;
typedef TYPE_8__ VCHIQ_HEADER_T ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static VCHIQ_STATUS_T FUNC_9(VCHIQ_REASON_T VAR_4,
                                                VCHIQ_HEADER_T *VAR_5,
                                                VCHIQ_SERVICE_HANDLE_T VAR_6,
                                                void *VAR_7)
{
   FUNC_5("%s: reason %d", VAR_1, VAR_4);

   switch (VAR_4)
   {
   case 130:
      {
         WFC_IPC_MSG_HEADER_T *VAR_8 = (WFC_IPC_MSG_HEADER_T *)VAR_5->data;

         FUNC_3(VAR_5->size >= sizeof(*VAR_8));
         FUNC_3(VAR_8->magic == VAR_3);

         if (VAR_8->type == VAR_2)
         {
            WFC_IPC_MSG_CALLBACK_T *VAR_9 = (WFC_IPC_MSG_CALLBACK_T *)VAR_8;
            WFC_CALLBACK_T VAR_10 = VAR_9->callback_fn.ptr;

            FUNC_3(VAR_5->size == sizeof(*VAR_9));
            if (FUNC_8(VAR_10 != ((void*)0)))
            {

               (*VAR_10)(VAR_9->callback_data.ptr);
            }
            FUNC_2(VAR_6, VAR_5);
         }
         else
         {
            WFC_WAITER_T *VAR_11 = VAR_8->waiter.ptr;
            int VAR_12;

            FUNC_3(VAR_11 != ((void*)0));

            FUNC_5("%s: waking up waiter at %p", VAR_1, VAR_11);
            FUNC_3(VAR_11->inuse);


            VAR_12 = FUNC_6(VAR_11->destlen, VAR_5->size - sizeof(*VAR_8));
            VAR_11->destlen = VAR_12;

            FUNC_5("%s: copying %d bytes from %p to %p first word 0x%x",
                  VAR_1, VAR_12, VAR_8 + 1, VAR_11->dest, *(uint32_t *)(VAR_8 + 1));
            FUNC_0(VAR_11->dest, VAR_8 + 1, VAR_12);

            FUNC_2(VAR_6, VAR_5);
            FUNC_7(&VAR_11->sem);
         }
      }
      break;
   case 131:
   case 133:
   case 134:
   case 132:
      {
         FUNC_4(0, "bulk messages not used");
         FUNC_2(VAR_6, VAR_5);
      }
      break;
   case 128:
      FUNC_5("%s: service %x opened", VAR_1, VAR_6);
      break;
   case 129:
      FUNC_5("%s: service %x closed", VAR_1, VAR_6);
      break;
   default:
      FUNC_4(0, "unexpected message reason");
      break;
   }
   return VAR_0;
}
