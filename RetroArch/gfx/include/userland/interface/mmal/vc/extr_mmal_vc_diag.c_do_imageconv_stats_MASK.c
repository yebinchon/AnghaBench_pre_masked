
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stats ;
typedef int VC_MEM_ADDR_T ;
typedef int VC_MEM_ACCESS_HANDLE_T ;
struct TYPE_5__ {int magic; int conversions; long time_spent; double last_image_ts; double first_image_ts; double size_requests; double max_vrf_delay; double vrf_wait_time; double duplicate_conversions; double failures; double max_delay; } ;
typedef TYPE_1__ IMAGECONV_STATS_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int*,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*,int,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,TYPE_1__*,int,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char*,char*,double) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_2, const char **VAR_3)
{
   VC_MEM_ACCESS_HANDLE_T VAR_4;
   VC_MEM_ADDR_T VAR_5, VAR_6;
   size_t VAR_7;
   IMAGECONV_STATS_T VAR_8;
   long VAR_9;
   double VAR_10;
   int VAR_11;
   int VAR_12 = 0;

   if (VAR_2 > 2)
      VAR_12 = FUNC_9(VAR_3[2], "reset") == 0;

   if ((VAR_11 = FUNC_2(&VAR_4)) < 0)
   {
      FUNC_6(VAR_1,"Unable to open videocore memory: %d\n", VAR_11);
      return -1;
   }
   if (!FUNC_1(VAR_4, "imageconv_stats", &VAR_5, &VAR_7))
   {
      FUNC_6(VAR_1,"Could not get imageconv stats address\n");
      goto fail;
   }
   if (!FUNC_4(VAR_4, &VAR_6, VAR_5))
   {
      FUNC_6(VAR_1, "Could not read imageconv stats address\n");
      goto fail;
   }

   if (VAR_12)
   {
      FUNC_7(&VAR_8, 0, sizeof(VAR_8));
      VAR_8.magic = VAR_0;
      if (!FUNC_5(VAR_4, &VAR_8, VAR_6, sizeof(VAR_8)))
      {
         FUNC_6(VAR_1, "Could not write stats at 0x%x\n", VAR_6);
         goto fail;
      }
   }

   if (!FUNC_3(VAR_4, &VAR_8, VAR_6, sizeof(VAR_8)))
   {
      FUNC_6(VAR_1, "Could not read stats at 0x%x\n", VAR_6);
      goto fail;
   }

   if (VAR_8.magic != VAR_0)
   {
      FUNC_6(VAR_1, "Bad magic 0x%x\n", VAR_8.magic);
      goto fail;
   }

   if (VAR_8.conversions)
      VAR_9 = VAR_8.time_spent / VAR_8.conversions;
   else
      VAR_9 = 0;

   if (VAR_8.conversions)
      VAR_10 = 1000000.0 * VAR_8.conversions /
         (VAR_8.last_image_ts - VAR_8.first_image_ts);
   else
      VAR_10 = 0;

   FUNC_8("%-25s:\t%d\n", "conversions", VAR_8.conversions);
   FUNC_8("%-25s:\t%d\n", "size requests", VAR_8.size_requests);
   FUNC_8("%-25s:\t%d\n", "max vrf delay", VAR_8.max_vrf_delay);
   FUNC_8("%-25s:\t%d\n", "vrf wait time", VAR_8.vrf_wait_time);
   FUNC_8("%-25s:\t%d\n", "duplicate conversions", VAR_8.duplicate_conversions);
   FUNC_8("%-25s:\t%d\n", "failures", VAR_8.failures);
   FUNC_8("%-25s:\t%ld\n", "convert time / image (us)", VAR_9);
   FUNC_8("%-25s:\t%.1f\n", "client frame_rate", VAR_10);
   FUNC_8("%-25s:\t%d us\n", "max delay to consume", VAR_8.max_delay);

   FUNC_0(VAR_4);
   return 0;
fail:
   FUNC_0(VAR_4);
   return -1;

}
