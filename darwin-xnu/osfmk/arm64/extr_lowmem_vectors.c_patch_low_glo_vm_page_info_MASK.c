
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int lgPageShift; int lgPmapMemFirstppnum; void* lgPmapMemEndAddr; void* lgPmapMemStartAddr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0(void * VAR_2, void * VAR_3, uint32_t VAR_4)
{
 VAR_1.lgPmapMemStartAddr = (uint64_t)VAR_2;
 VAR_1.lgPmapMemEndAddr = (uint64_t)VAR_3;
 VAR_1.lgPmapMemFirstppnum = VAR_4;
 VAR_1.lgPageShift = VAR_0;
}
