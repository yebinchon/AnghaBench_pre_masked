
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_3__ {int time_den; int time_num; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int64_t FUNC_2(VC_CONTAINER_TRACK_MODULE_T *VAR_0, uint64_t VAR_1)
{
   int64_t VAR_2;
   FUNC_1(VAR_0->time_den != 0);
   VAR_2 = FUNC_0(1000000) * VAR_0->time_num * VAR_1 / VAR_0->time_den;
   return VAR_2;
}
