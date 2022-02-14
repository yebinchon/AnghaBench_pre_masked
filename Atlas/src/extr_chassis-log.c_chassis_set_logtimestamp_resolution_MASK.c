
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_ts_resolution; } ;
typedef TYPE_1__ chassis_log ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(chassis_log *VAR_2, int VAR_3) {
 if (VAR_2 == ((void*)0))
  return;

 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  VAR_2->log_ts_resolution = VAR_3;
}
