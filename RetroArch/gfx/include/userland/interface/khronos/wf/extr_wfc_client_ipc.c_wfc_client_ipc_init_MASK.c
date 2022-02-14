
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vchiq_params ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_5__ {int version_min; int version; TYPE_2__* userdata; int callback; int fourcc; } ;
typedef TYPE_1__ VCHIQ_SERVICE_PARAMS_T ;
struct TYPE_6__ {int lock; int refcount; int service; int waitpool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,scalar_t__) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_18 () ;
 int VAR_11 ;
 int VAR_12 ;

VCOS_STATUS_T FUNC_19(void)
{
   VCHIQ_SERVICE_PARAMS_T VAR_13;
   bool VAR_14 = 0, VAR_15 = 0;
   bool VAR_16 = 0;
   VCOS_STATUS_T VAR_17 = VAR_1;
   VCHIQ_STATUS_T VAR_18;

   FUNC_15(&VAR_10, VAR_8);

   FUNC_13(&VAR_9.lock);

   if (VAR_9.refcount++ > 0)
   {

      FUNC_14(&VAR_9.lock);
      return VAR_4;
   }

   FUNC_10(VAR_3, VAR_5);
   FUNC_9("wfcipc", VAR_3);

   FUNC_11("%s: starting initialisation", VAR_2);


   VAR_18 = FUNC_3(&VAR_12);
   if (VAR_18 != VAR_0)
   {
      FUNC_8("%s: failed to initialise vchiq: %d", VAR_2, VAR_18);
      goto error;
   }
   VAR_14 = 1;

   VAR_18 = FUNC_2(VAR_12);
   if (VAR_18 != VAR_0)
   {
      FUNC_8("%s: failed to connect to vchiq: %d", VAR_2, VAR_18);
      goto error;
   }

   FUNC_1(&VAR_13, 0, sizeof(VAR_13));
   VAR_13.fourcc = FUNC_0();
   VAR_13.callback = VAR_11;
   VAR_13.userdata = &VAR_9;
   VAR_13.version = VAR_6;
   VAR_13.version_min = VAR_7;

   VAR_18 = FUNC_4(VAR_12, &VAR_13, &VAR_9.service);
   if (VAR_18 != VAR_0)
   {
      FUNC_8("%s: could not open vchiq service: %d", VAR_2, VAR_18);
      goto error;
   }
   VAR_16 = 1;

   VAR_17 = FUNC_16(&VAR_9.waitpool);
   if (VAR_17 != VAR_4)
   {
      FUNC_8("%s: could not create wait pool: %d", VAR_2, VAR_17);
      goto error;
   }
   VAR_15 = 1;


   FUNC_5(VAR_9.service);

   FUNC_14(&VAR_9.lock);

   VAR_17 = FUNC_18();
   if (VAR_17 != VAR_4)
   {
      FUNC_8("%s: could not send client pid: %d", VAR_2, VAR_17);
      FUNC_13(&VAR_9.lock);
      goto error;
   }

   return VAR_4;

error:
   if (VAR_15)
      FUNC_17(&VAR_9.waitpool);
   if (VAR_16)
      FUNC_6(VAR_9.service);
   if (VAR_14)
      FUNC_7(VAR_12);
   FUNC_12(VAR_3);
   VAR_9.refcount--;

   FUNC_14(&VAR_9.lock);
   return VAR_17;
}
