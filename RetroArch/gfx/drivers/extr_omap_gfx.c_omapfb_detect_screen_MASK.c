
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_rdev; } ;
struct TYPE_3__ {int nat_w; int nat_h; int fbname; } ;
typedef TYPE_1__ omapfb_data_t ;
typedef int manager_name ;
typedef int display_name ;
typedef int buff ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int,char*,int,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,int*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int ,struct stat*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(omapfb_data_t *VAR_0)
{
   struct stat VAR_1;
   int VAR_2, VAR_3;
   int VAR_4, VAR_5;
   FILE *VAR_6;
   char VAR_7[64];
   char VAR_8[64];
   char VAR_9[64];
   int VAR_10, VAR_11 = -1, VAR_12 = -1;

   VAR_7[0] = VAR_8[0] = VAR_9[0] = '\0';



   VAR_3 = FUNC_8(VAR_0->fbname, &VAR_1);

   if (VAR_3 != 0)
   {
      FUNC_0("[video_omap]: can't stat %s.\n", VAR_0->fbname);
      return -1;
   }
   VAR_10 = FUNC_5(VAR_1.st_rdev);

   FUNC_7(VAR_7, sizeof(VAR_7), "/sys/class/graphics/fb%d/overlays", VAR_10);
   VAR_6 = FUNC_3(VAR_7, "r");
   if (!VAR_6)
   {
      FUNC_0("[video_omap]: can't open %s.\n", VAR_7);
      return -1;
   }

   VAR_3 = FUNC_4(VAR_6, "%d", &VAR_11);
   FUNC_2(VAR_6);
   if (VAR_3 != 1)
   {
      FUNC_0("[video_omap]: can't parse %s.\n", VAR_7);
      return -1;
   }

   FUNC_7(VAR_7, sizeof(VAR_7), "/sys/devices/platform/omapdss/overlay%d/manager", VAR_11);
   VAR_3 = FUNC_6(VAR_7, VAR_8, sizeof(VAR_8));
   if (VAR_3 < 0)
   {
      FUNC_0("[video_omap]: can't read manager name.\n");
      return -1;
   }

   for (VAR_2 = 0; ; VAR_2++)
   {
      FUNC_7(VAR_7, sizeof(VAR_7), "/sys/devices/platform/omapdss/manager%d/name", VAR_2);
      VAR_3 = FUNC_6(VAR_7, VAR_7, sizeof(VAR_7));

      if (VAR_3 < 0)
         break;

      if (FUNC_9(VAR_8, VAR_7))
      {
         FUNC_7(VAR_7, sizeof(VAR_7), "/sys/devices/platform/omapdss/manager%d/display", VAR_2);
         VAR_3 = FUNC_6(VAR_7, VAR_9, sizeof(VAR_9));

         if (VAR_3 < 0)
         {
            FUNC_0("[video_omap]: can't read display name.\n");
            return -1;
         }

         break;
      }
   }

   if (VAR_3 < 0)
   {
      FUNC_0("[video_omap]: couldn't find manager.\n");
      return -1;
   }

   for (VAR_2 = 0; ; VAR_2++)
   {
      FUNC_7(VAR_7, sizeof(VAR_7), "/sys/devices/platform/omapdss/display%d/name", VAR_2);
      VAR_3 = FUNC_6(VAR_7, VAR_7, sizeof(VAR_7));

      if (VAR_3 < 0)
         break;

      if (FUNC_9(VAR_9, VAR_7))
      {
         VAR_12 = VAR_2;
         break;
      }
   }

   if (VAR_12 < 0)
   {
      FUNC_0("[video_omap]: couldn't find display.\n");
      return -1;
   }

   FUNC_7(VAR_7, sizeof(VAR_7), "/sys/devices/platform/omapdss/display%d/timings", VAR_12);
   VAR_6 = FUNC_3(VAR_7, "r");
   if (!VAR_6)
   {
      FUNC_0("[video_omap]: can't open %s.\n", VAR_7);
      return -1;
   }

   VAR_3 = FUNC_4(VAR_6, "%*d,%d/%*d/%*d/%*d,%d/%*d/%*d/%*d", &VAR_4, &VAR_5);
   FUNC_2(VAR_6);
   if (VAR_3 != 2)
   {
      FUNC_0("[video_omap]: can't parse %s (%d).\n", VAR_7, VAR_3);
      return -1;
   }

   if (VAR_4 <= 0 || VAR_5 <= 0)
   {
      FUNC_0("[video_omap]: unsane dimensions detected (%dx%d).\n", VAR_4, VAR_5);
      return -1;
   }

   FUNC_1("[video_omap]: detected %dx%d '%s' (%d) display attached to fb %d and overlay %d.\n",
         VAR_4, VAR_5, VAR_9, VAR_12, VAR_10, VAR_11);

   VAR_0->nat_w = VAR_4;
   VAR_0->nat_h = VAR_5;

   return 0;
}
