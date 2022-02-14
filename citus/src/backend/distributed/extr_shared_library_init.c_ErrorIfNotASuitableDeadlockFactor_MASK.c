
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool
FUNC_3(double *VAR_2, void **VAR_3, GucSource VAR_4)
{
 if (*VAR_2 <= 1.0 && *VAR_2 != -1.0)
 {
  FUNC_0(VAR_1, (FUNC_1(VAR_0),
        FUNC_2(
         "citus.distributed_deadlock_detection_factor cannot be less than 1. "
         "To disable distributed deadlock detection set the value to -1.")));

  return 0;
 }

 return 1;
}
