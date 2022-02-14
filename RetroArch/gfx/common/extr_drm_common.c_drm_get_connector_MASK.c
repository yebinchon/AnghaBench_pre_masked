
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int monitor_index; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef TYPE_2__* drmModeConnectorPtr ;
struct TYPE_10__ {int count_connectors; int * connectors; } ;
struct TYPE_9__ {scalar_t__ connection; unsigned int count_modes; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,unsigned int,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_3__* VAR_2 ;

bool FUNC_5(int VAR_3, video_frame_info_t *VAR_4)
{
   unsigned VAR_5;
   unsigned VAR_6 = 0;
   unsigned VAR_7 = FUNC_0(VAR_4->monitor_index, 1);



   FUNC_1("[DRM]: Found %d connectors.\n", VAR_2->count_connectors);

   for (VAR_5 = 0; (int)VAR_5 < VAR_2->count_connectors; VAR_5++)
   {
      drmModeConnectorPtr VAR_8 = FUNC_4(
            VAR_3, VAR_2->connectors[VAR_5]);

      if (VAR_8)
      {
         bool VAR_9 = VAR_8->connection == VAR_0;
         FUNC_1("[DRM]: Connector %d connected: %s\n", VAR_5, VAR_9 ? "yes" : "no");
         FUNC_1("[DRM]: Connector %d has %d modes.\n", VAR_5, VAR_8->count_modes);
         if (VAR_9 && VAR_8->count_modes > 0)
         {
            VAR_6++;
            FUNC_1("[DRM]: Connector %d assigned to monitor index: #%u.\n", VAR_5, VAR_6);
         }
         FUNC_3(VAR_8);
      }
   }

   VAR_6 = 0;

   for (VAR_5 = 0; (int)VAR_5 < VAR_2->count_connectors; VAR_5++)
   {
      VAR_1 = FUNC_4(VAR_3,
            VAR_2->connectors[VAR_5]);

      if (!VAR_1)
         continue;
      if (VAR_1->connection == VAR_0
            && VAR_1->count_modes > 0)
      {
         VAR_6++;
         if (VAR_6 == VAR_7)
            break;
      }

      FUNC_3(VAR_1);
      VAR_1 = ((void*)0);
   }

   if (!VAR_1)
   {
      FUNC_2("[DRM]: Couldn't get device connector.\n");
      return 0;
   }
   return 1;
}
