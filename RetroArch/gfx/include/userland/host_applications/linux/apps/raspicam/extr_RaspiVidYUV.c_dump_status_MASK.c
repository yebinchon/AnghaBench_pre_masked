
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {scalar_t__ nextWaitMethod; char* description; } ;
struct TYPE_5__ {int framerate; int timeout; scalar_t__ waitMethod; int camera_parameters; int preview_parameters; int bCapturing; TYPE_3__ common_settings; } ;
typedef TYPE_1__ RASPIVIDYUV_STATE ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(RASPIVIDYUV_STATE *VAR_5)
{
   int VAR_6, VAR_7, VAR_8, VAR_9;

   if (!VAR_5)
   {
      FUNC_5(0);
      return;
   }

   FUNC_3(&VAR_5->common_settings);

   FUNC_0(VAR_2, "framerate %d, time delay %d\n", VAR_5->framerate, VAR_5->timeout);






   VAR_8 = ((VAR_5->common_settings.width + 31) & ~31);
   VAR_9 = ((VAR_5->common_settings.height + 15) & ~15);

   VAR_7 = VAR_8 * VAR_9;


   VAR_7 += 2 * VAR_8/2 * VAR_9/2;

   FUNC_0(VAR_2, "Sub-image size %d bytes in total.\n  Y pitch %d, Y height %d, UV pitch %d, UV Height %d\n", VAR_7, VAR_8, VAR_9, VAR_8/2,VAR_9/2);

   FUNC_0(VAR_2, "Wait method : ");
   for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
   {
      if (VAR_5->waitMethod == VAR_3[VAR_6].nextWaitMethod)
         FUNC_0(VAR_2, "%s", VAR_3[VAR_6].description);
   }
   FUNC_0(VAR_2, "\nInitial state '%s'\n", FUNC_2(VAR_5->bCapturing, VAR_0, VAR_1));
   FUNC_0(VAR_2, "\n");

   FUNC_4(&VAR_5->preview_parameters);
   FUNC_1(&VAR_5->camera_parameters);
}
