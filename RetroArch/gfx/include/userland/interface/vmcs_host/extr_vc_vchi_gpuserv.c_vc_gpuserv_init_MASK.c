
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vchiq_params ;
typedef int int32_t ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_5__ {int version; int version_min; int * userdata; int callback; int fourcc; } ;
typedef TYPE_1__ VCHIQ_SERVICE_PARAMS_T ;
struct TYPE_6__ {int lock; int service; int refcount; } ;


 int FUNC_0 (char,char,unsigned char,char) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

int32_t FUNC_12( void )
{
   VCHIQ_SERVICE_PARAMS_T VAR_10;
   VCHIQ_STATUS_T VAR_11;

   FUNC_11(&VAR_7, VAR_9);

   FUNC_9(&VAR_6.lock);

   if (VAR_6.refcount++ > 0)
   {

      FUNC_10(&VAR_6.lock);
      return VAR_4;
   }

   FUNC_7(VAR_2, VAR_3);
   FUNC_6("gpuserv", VAR_2);

   FUNC_8("%s: starting initialisation", VAR_1);


   VAR_11 = FUNC_3(&VAR_8);
   if (VAR_11 != VAR_0)
   {
      FUNC_5("%s: failed to initialise vchiq: %d", VAR_1, VAR_11);
      goto error;
   }

   VAR_11 = FUNC_2(VAR_8);
   if (VAR_11 != VAR_0)
   {
      FUNC_5("%s: failed to connect to vchiq: %d", VAR_1, VAR_11);
      goto error;
   }

   FUNC_1(&VAR_10, 0, sizeof(VAR_10));
   VAR_10.fourcc = FUNC_0('G','P','U','S');
   VAR_10.callback = VAR_5;
   VAR_10.userdata = ((void*)0);
   VAR_10.version = 1;
   VAR_10.version_min = 1;

   VAR_11 = FUNC_4(VAR_8, &VAR_10, &VAR_6.service);
   if (VAR_11 != VAR_0)
   {
      FUNC_5("%s: could not open vchiq service: %d", VAR_1, VAR_11);
      goto error;
   }
   FUNC_10(&VAR_6.lock);
   return 0;
error:
   FUNC_10(&VAR_6.lock);
   return -1;
}
