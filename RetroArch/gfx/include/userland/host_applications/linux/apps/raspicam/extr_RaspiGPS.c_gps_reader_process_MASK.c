
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct gps_data_t {int dummy; } ;
struct TYPE_9__ {scalar_t__ mode; int time; } ;
struct TYPE_12__ {int set; TYPE_2__ fix; scalar_t__ online; } ;
struct TYPE_10__ {TYPE_5__ gpsdata; } ;
struct TYPE_8__ {int time; scalar_t__ mode; } ;
struct TYPE_11__ {int set; TYPE_1__ fix; scalar_t__ online; } ;
struct TYPE_13__ {scalar_t__ last_valid_time; int gps_cache_mutex; TYPE_3__ gpsd; TYPE_4__ gpsdata_cache; int terminated; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_6__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void *FUNC_6(void *VAR_4)
{
   while (!VAR_3.terminated)
   {
      int VAR_5 = 0;
      int VAR_6 = 0;

      VAR_3.gpsd.gpsdata.set = 0;
      VAR_3.gpsd.gpsdata.fix.mode = 0;
      if (FUNC_0(&VAR_3.gpsd) < 0 ||
            (VAR_5 = FUNC_4(&VAR_3.gpsd)) < 0 )
         break;

      if (VAR_5 > 0 && VAR_3.gpsd.gpsdata.online)
      {
         if (VAR_3.gpsd.gpsdata.fix.mode >= VAR_1)
         {

            VAR_6 = 1;
            FUNC_5(&VAR_3.last_valid_time);
            FUNC_2(&VAR_3.gps_cache_mutex);
            FUNC_1(&VAR_3.gpsdata_cache, &VAR_3.gpsd.gpsdata,
                   sizeof(struct gps_data_t));
            FUNC_3(&VAR_3.gps_cache_mutex);
         }
      }
      if (!VAR_6)
      {
         time_t VAR_7;
         FUNC_5(&VAR_7);
         if (VAR_7 - VAR_3.last_valid_time > VAR_0)
         {

            FUNC_2(&VAR_3.gps_cache_mutex);
            VAR_3.gpsdata_cache.online = VAR_3.gpsd.gpsdata.online;
            VAR_3.gpsdata_cache.set = 0;
            VAR_3.gpsdata_cache.fix.mode = 0;
            FUNC_3(&VAR_3.gps_cache_mutex);
         }

         if (VAR_3.gpsd.gpsdata.set & VAR_2)
         {
            FUNC_2(&VAR_3.gps_cache_mutex);
            VAR_3.gpsdata_cache.set |= VAR_2;
            VAR_3.gpsdata_cache.fix.time = VAR_3.gpsd.gpsdata.fix.time;
            FUNC_3(&VAR_3.gps_cache_mutex);
         }
      }
   }
   return ((void*)0);
}
