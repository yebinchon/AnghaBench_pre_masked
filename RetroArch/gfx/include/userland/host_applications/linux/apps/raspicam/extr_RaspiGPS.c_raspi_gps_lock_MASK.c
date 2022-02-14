
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gps_data_t {int dummy; } ;
struct TYPE_2__ {struct gps_data_t gpsdata_cache; int gps_cache_mutex; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;

struct gps_data_t *FUNC_1()
{
   FUNC_0(&VAR_0.gps_cache_mutex);
   return &VAR_0.gpsdata_cache;
}
