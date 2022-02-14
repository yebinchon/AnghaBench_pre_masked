
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int set; scalar_t__ online; } ;
struct TYPE_5__ {TYPE_3__ gpsdata; scalar_t__ (* gps_waiting ) (TYPE_3__*,int) ;scalar_t__ gpsd_connected; int * libgps_handle; } ;
typedef TYPE_1__ gpsd_info ;
typedef int gps_mask_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(gpsd_info *VAR_1, int VAR_2)
{
   if (VAR_1->libgps_handle == ((void*)0))
      return -1;
   if (VAR_1->gpsd_connected)
   {
      gps_mask_t VAR_3 = VAR_0;
      time_t VAR_4 = FUNC_2(((void*)0));
      while ((FUNC_2(((void*)0)) - VAR_4 < VAR_2) &&
             ((!VAR_1->gpsdata.online) || ((VAR_1->gpsdata.set & VAR_3) == 0)))
      {
         if (VAR_1->gps_waiting(&VAR_1->gpsdata, 200))
            FUNC_0(VAR_1);
      }
      if ((VAR_1->gpsdata.online) && ((VAR_1->gpsdata.set & VAR_3) != 0))
         return 0;
   }
   return -1;
}
