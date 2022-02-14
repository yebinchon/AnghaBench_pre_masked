
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int magic; int msgid; } ;
typedef TYPE_1__ mmal_worker_msg_header ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_9__ {size_t member_1; TYPE_1__* member_0; } ;
typedef TYPE_2__ VCHIQ_ELEMENT_T ;
struct TYPE_10__ {int bulk_lock; int service; int inited; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_CLIENT_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

MMAL_STATUS_T FUNC_8(MMAL_CLIENT_T *VAR_5,
                                   mmal_worker_msg_header *VAR_6, size_t VAR_7,
                                   uint8_t *VAR_8, size_t VAR_9,
                                   uint32_t VAR_10)
{
   VCHIQ_STATUS_T VAR_11;
   VCHIQ_ELEMENT_T VAR_12[] = {{VAR_6, VAR_7}};
   MMAL_BOOL_T VAR_13 = (VAR_9 != 0);

   FUNC_1("len %d", VAR_9);
   FUNC_4(VAR_7 >= sizeof(mmal_worker_msg_header));

   if (!VAR_5->inited)
   {
      FUNC_4(0);
      return VAR_0;
   }

   if (VAR_13)
      FUNC_5(&VAR_5->bulk_lock);

   VAR_6->msgid = VAR_10;
   VAR_6->magic = VAR_2;

   VAR_11 = FUNC_3(VAR_5->service, VAR_12, 1);

   if (VAR_11 != VAR_4)
   {
      if (VAR_13)
         FUNC_6(&VAR_5->bulk_lock);

      FUNC_0("failed");
      goto error;
   }

   if (VAR_13)
   {
      FUNC_1("bulk transmit: %p, %i", VAR_8, VAR_9);

      VAR_9 = (VAR_9 + 3) & ~3;
      VAR_11 = FUNC_2(VAR_5->service, VAR_8, VAR_9, VAR_6);

      FUNC_6(&VAR_5->bulk_lock);

      if (!FUNC_7(VAR_11 == VAR_4))
      {
         FUNC_0("failed bulk transmit");


         FUNC_4(0);
         goto error;
      }
   }

   return VAR_3;

 error:
   return VAR_1;
}
