
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int libgps_handle; int gps_stream; int gps_errstr; int gps_close; int gps_open; int gps_waiting; int gps_read; } ;
typedef TYPE_1__ gpsd_info ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (void**,int ,char*) ;
 int VAR_2 ;

int FUNC_4(gpsd_info *VAR_3)
{
   int VAR_4 = 0;

   VAR_3->libgps_handle = FUNC_1(VAR_0, VAR_1);
   if (!VAR_3->libgps_handle)
   {
      FUNC_2(VAR_2, "%s\n", FUNC_0());
      return -1;
   }

   VAR_4 |= FUNC_3((void **)(&VAR_3->gps_read), VAR_3->libgps_handle, "gps_read");
   VAR_4 |= FUNC_3((void **)(&VAR_3->gps_waiting), VAR_3->libgps_handle, "gps_waiting");
   VAR_4 |= FUNC_3((void **)(&VAR_3->gps_open), VAR_3->libgps_handle, "gps_open");
   VAR_4 |= FUNC_3((void **)(&VAR_3->gps_close), VAR_3->libgps_handle, "gps_close");
   VAR_4 |= FUNC_3((void **)(&VAR_3->gps_errstr), VAR_3->libgps_handle, "gps_errstr");
   VAR_4 |= FUNC_3((void **)(&VAR_3->gps_stream), VAR_3->libgps_handle, "gps_stream");
   if (VAR_4)
      return -1;

   return 0;
}
