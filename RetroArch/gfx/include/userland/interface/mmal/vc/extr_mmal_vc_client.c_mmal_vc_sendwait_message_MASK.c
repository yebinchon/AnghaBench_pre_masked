
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct MMAL_CLIENT_T {int bulk_lock; int service; int inited; } ;
struct TYPE_10__ {TYPE_4__* waiter; } ;
struct TYPE_11__ {int msgid; int magic; TYPE_1__ u; } ;
typedef TYPE_2__ mmal_worker_msg_header ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_12__ {size_t member_1; TYPE_2__* member_0; } ;
typedef TYPE_3__ VCHIQ_ELEMENT_T ;
struct TYPE_13__ {size_t destlen; int sem; void* dest; } ;
typedef TYPE_4__ MMAL_WAITER_T ;
typedef int MMAL_STATUS_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_2 (struct MMAL_CLIENT_T*) ;
 int FUNC_3 (struct MMAL_CLIENT_T*) ;
 int FUNC_4 (struct MMAL_CLIENT_T*) ;
 int FUNC_5 (struct MMAL_CLIENT_T*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int ,int *,int,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;

MMAL_STATUS_T FUNC_13(struct MMAL_CLIENT_T *VAR_5,
                                       mmal_worker_msg_header *VAR_6,
                                       size_t VAR_7,
                                       uint32_t VAR_8,
                                       void *VAR_9,
                                       size_t *VAR_10,
                                       MMAL_BOOL_T VAR_11)
{
   MMAL_STATUS_T VAR_12;
   MMAL_WAITER_T *VAR_13;
   VCHIQ_STATUS_T VAR_14;
   VCHIQ_ELEMENT_T VAR_15[] = {{VAR_6, VAR_7}};

   FUNC_8(VAR_7 >= sizeof(mmal_worker_msg_header));
   FUNC_8(VAR_9);

   if (!VAR_5->inited)
   {
      FUNC_8(0);
      return VAR_0;
   }

   if (VAR_11)
      FUNC_9(&VAR_5->bulk_lock);

   VAR_13 = FUNC_2(VAR_5);
   VAR_6->msgid = VAR_8;
   VAR_6->u.waiter = VAR_13;
   VAR_6->magic = VAR_2;

   VAR_13->dest = VAR_9;
   VAR_13->destlen = *VAR_10;
   FUNC_1("wait %p, reply to %p", VAR_13, VAR_9);
   FUNC_4(VAR_5);

   VAR_14 = FUNC_7(VAR_5->service, VAR_15, 1);

   if (VAR_14 != VAR_4)
   {
      VAR_12 = VAR_1;
      if (VAR_11)
        FUNC_10(&VAR_5->bulk_lock);
      goto fail_msg;
   }

   if (VAR_11)
   {
      uint32_t VAR_16 = 8;

      static uint8_t VAR_17[8];
      VAR_14 = FUNC_6(VAR_5->service, VAR_17, VAR_16, VAR_6);

      FUNC_10(&VAR_5->bulk_lock);

      if (!FUNC_12(VAR_14 == VAR_4))
      {
         FUNC_0("failed bulk transmit");


         FUNC_8(0);
         VAR_12 = VAR_1;
         goto fail_msg;
      }
   }







   FUNC_11(&VAR_13->sem);

   FUNC_3(VAR_5);
   FUNC_1("got reply (len %i/%i)", (int)*VAR_10, (int)VAR_13->destlen);
   *VAR_10 = VAR_13->destlen;

   FUNC_5(VAR_5, VAR_13);
   return VAR_3;

fail_msg:
   FUNC_3(VAR_5);

   FUNC_5(VAR_5, VAR_13);
   return VAR_12;
}
