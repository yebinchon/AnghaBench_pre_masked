
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t perfcontrol_callout_type_t ;
typedef size_t perfcontrol_callout_stat_t ;


 int* VAR_0 ;
 int** VAR_1 ;
 int VAR_2 ;

uint64_t FUNC_0(perfcontrol_callout_type_t VAR_3,
 perfcontrol_callout_stat_t VAR_4)
{
    if (!VAR_2)
        return 0;
    return (VAR_1[VAR_3][VAR_4] / VAR_0[VAR_3]);
}
