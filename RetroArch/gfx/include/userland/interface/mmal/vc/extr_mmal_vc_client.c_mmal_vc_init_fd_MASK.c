
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vchiq_params ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_5__ {int version_min; int version; TYPE_4__* userdata; int callback; int fourcc; } ;
typedef TYPE_1__ VCHIQ_SERVICE_PARAMS_T ;
struct TYPE_6__ {int usecount; int inited; int lock; int refcount; int service; int waitpool; int bulk_lock; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;

MMAL_STATUS_T FUNC_17(int VAR_13)
{
   VCHIQ_SERVICE_PARAMS_T VAR_14;
   MMAL_BOOL_T VAR_15 = 0, VAR_16 = 0;
   MMAL_BOOL_T VAR_17 = 0;
   MMAL_STATUS_T VAR_18 = VAR_0;
   VCHIQ_STATUS_T VAR_19;
   int VAR_20;

   FUNC_16(&VAR_12, VAR_9);

   FUNC_14(&VAR_8.lock);

   VAR_20 = VAR_8.refcount++;
   if (VAR_20 > 0)
   {

      FUNC_15(&VAR_8.lock);
      return VAR_2;
   }

   FUNC_11("mmalipc", VAR_4);


   VAR_19 = FUNC_8(&VAR_11, VAR_13);
   if (VAR_19 != VAR_3)
   {
      FUNC_0("failed to initialise vchiq");
      VAR_18 = VAR_0;
      goto error;
   }
   VAR_15 = 1;

   VAR_19 = FUNC_7(VAR_11);
   if (VAR_19 != VAR_3)
   {
      FUNC_0("failed to connect to vchiq");
      VAR_18 = VAR_0;
      goto error;
   }

   FUNC_4(&VAR_14,0,sizeof(VAR_14));
   VAR_14.fourcc = FUNC_1();
   VAR_14.callback = VAR_10;
   VAR_14.userdata = &VAR_8;
   VAR_14.version = VAR_6;
   VAR_14.version_min = VAR_7;

   VAR_19 = FUNC_9(VAR_11, &VAR_14, &VAR_8.service);
   if (VAR_19 != VAR_3)
   {
      FUNC_0("could not open vchiq service");
      VAR_18 = VAR_0;
      goto error;
   }
   VAR_8.usecount = 1;
   VAR_17 = 1;

   VAR_18 = FUNC_2(&VAR_8.waitpool);
   if (VAR_18 != VAR_2)
   {
      FUNC_0("could not create wait pool");
      goto error;
   }
   VAR_16 = 1;

   if (FUNC_13(&VAR_8.bulk_lock, "mmal client bulk lock") != VAR_5)
   {
      FUNC_0("could not create bulk lock");
      VAR_18 = VAR_1;
      goto error;
   }

   VAR_8.inited = 1;

   FUNC_15(&VAR_8.lock);

   FUNC_5();

   return VAR_2;

 error:
   if (VAR_16)
      FUNC_3(&VAR_8.waitpool);
   if (VAR_17)
   {
      VAR_8.usecount = 0;
      FUNC_6(VAR_8.service);
   }
   if (VAR_15)
      FUNC_10(VAR_11);
   FUNC_12(VAR_4);
   VAR_8.refcount--;

   FUNC_15(&VAR_8.lock);
   return VAR_18;
}
