
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int config ;
typedef int VCOS_MUTEX_T ;
typedef TYPE_1__* VCHIQ_INSTANCE_T ;
struct TYPE_9__ {int config_size; TYPE_3__* pconfig; } ;
typedef TYPE_2__ VCHIQ_GET_CONFIG_T ;
struct TYPE_10__ {scalar_t__ version; TYPE_2__* version_min; } ;
typedef TYPE_3__ VCHIQ_CONFIG_T ;
struct TYPE_8__ {int initialised; scalar_t__ fd; int use_close_delivered; int mutex; scalar_t__ used_services; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static VCHIQ_INSTANCE_T
FUNC_13(const int VAR_10)
{
   static int VAR_11 = 0;
   static VCOS_MUTEX_T VAR_12;
   VCHIQ_INSTANCE_T VAR_13 = &VAR_8;

   FUNC_5();
   if (!VAR_11)
   {
      FUNC_10(&VAR_12, "vchiq-init");

      FUNC_9( &VAR_9, VAR_7 );
      FUNC_8( "vchiq_lib", &VAR_9 );

      VAR_11 = 1;
   }
   FUNC_6();

   FUNC_11(&VAR_12);

   if (VAR_13->initialised == 0)
   {
      VAR_13->fd = VAR_10 == -1 ?
         FUNC_4("/dev/vchiq", VAR_0) :
         FUNC_2(VAR_10);
      if (VAR_13->fd >= 0)
      {
         VCHIQ_GET_CONFIG_T VAR_14;
         VCHIQ_CONFIG_T VAR_15;
         int VAR_16;
         VAR_14.config_size = sizeof(VAR_15);
         VAR_14.pconfig = &VAR_15;
         FUNC_0(VAR_16, FUNC_3(VAR_13->fd, VAR_1, &VAR_14));
         if ((VAR_16 == 0) && (VAR_15.version >= VAR_6) && (VAR_15.version_min <= VAR_3))
         {
            if (VAR_15.version >= VAR_5)
            {
               FUNC_0(VAR_16, FUNC_3(VAR_13->fd, VAR_2, VAR_3));
            }
            if (VAR_16 == 0)
            {
               VAR_13->used_services = 0;
               VAR_13->use_close_delivered = (VAR_15.version >= VAR_4);
               FUNC_10(&VAR_13->mutex, "VCHIQ instance");
               VAR_13->initialised = 1;
            }
         }
         else
         {
            if (VAR_16 == 0)
            {
               FUNC_7("Incompatible VCHIQ library - driver version %d (min %d), library version %d (min %d)",
                  VAR_15.version, VAR_15.version_min, VAR_3, VAR_6);
            }
            else
            {
               FUNC_7("Very incompatible VCHIQ library - cannot retrieve driver version");
            }
            FUNC_1(VAR_13->fd);
            VAR_13 = ((void*)0);
         }
      }
      else
      {
         VAR_13 = ((void*)0);
      }
   }
   else if (VAR_13->initialised > 0)
   {
      VAR_13->initialised++;
   }

   FUNC_12(&VAR_12);

   return VAR_13;
}
