
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* gps_read ) (int *) ;scalar_t__ gpsd_connected; int gpsdata; int (* gps_close ) (int *) ;scalar_t__ (* gps_waiting ) (int *,int) ;int * libgps_handle; } ;
typedef TYPE_1__ gpsd_info ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(gpsd_info *VAR_0)
{
   if (VAR_0->libgps_handle == ((void*)0))
      return -1;
   if (VAR_0->gpsd_connected)
   {
      if (VAR_0->gps_waiting(&VAR_0->gpsdata, 200))
      {
         int VAR_1 = VAR_0->gps_read(&VAR_0->gpsdata);
         if (VAR_1 < 0)
         {
            VAR_0->gps_close(&VAR_0->gpsdata);
            VAR_0->gpsd_connected = 0;
            VAR_1 = 0;
         }
         return VAR_1;
      }
   }
   return 0;
}
