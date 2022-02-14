
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gpsd_connected; } ;
struct TYPE_5__ {int terminated; int gps_cache_mutex; TYPE_1__ gpsd; int gps_reader_thread; scalar_t__ gps_reader_thread_ok; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(int VAR_2)
{
   VAR_0.terminated = 1;

   if (VAR_0.gps_reader_thread_ok)
   {
      if (VAR_2)
         FUNC_1(VAR_1, "Waiting for GPS reader thread to terminate\n");

      FUNC_3(VAR_0.gps_reader_thread, ((void*)0));
   }
   if (VAR_2 && VAR_0.gpsd.gpsd_connected)
      FUNC_1(VAR_1, "Closing gpsd connection\n\n");

   FUNC_0(&VAR_0.gpsd);

   FUNC_2(&VAR_0.gpsd);

   FUNC_4(&VAR_0.gps_cache_mutex);
}
