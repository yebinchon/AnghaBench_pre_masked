
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gpsd_connected; scalar_t__ (* gps_open ) (int ,int ,int *) ;int gpsdata; int (* gps_stream ) (int *,int ,int *) ;int port; int server; int * libgps_handle; } ;
typedef TYPE_1__ gpsd_info ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;

int FUNC_2(gpsd_info *VAR_1)
{
   if (VAR_1->libgps_handle == ((void*)0))
      return -1;
   if (!VAR_1->gpsd_connected)
   {
      if (VAR_1->gps_open(VAR_1->server, VAR_1->port, &VAR_1->gpsdata) != 0)
         return -1;
      VAR_1->gpsd_connected = 1;
      VAR_1->gps_stream(&VAR_1->gpsdata, VAR_0, ((void*)0));
   }
   return 0;
}
