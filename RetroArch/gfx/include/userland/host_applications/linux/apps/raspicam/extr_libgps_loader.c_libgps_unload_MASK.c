
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * libgps_handle; } ;
typedef TYPE_1__ gpsd_info ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(gpsd_info *VAR_0)
{
   if (VAR_0->libgps_handle)
   {
      FUNC_0(VAR_0);
      FUNC_1(VAR_0->libgps_handle);
      VAR_0->libgps_handle = ((void*)0);
   }
}
