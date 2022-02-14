
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ gpsd_connected; int gpsdata; int (* gps_close ) (int *) ;int (* gps_stream ) (int *,int ,int *) ;int * libgps_handle; } ;
typedef TYPE_1__ gpsd_info ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(gpsd_info *VAR_1)
{
   if (VAR_1->libgps_handle == ((void*)0))
      return -1;
   if (VAR_1->gpsd_connected)
   {
      VAR_1->gps_stream(&VAR_1->gpsdata, VAR_0, ((void*)0));
      VAR_1->gps_close(&VAR_1->gpsdata);
      VAR_1->gpsd_connected = 0;
   }
   return 0;
}
