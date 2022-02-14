
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int generic; int width; int cycles; int retired; } ;
struct TYPE_5__ {TYPE_1__ pal_perf_mon_info_s; } ;
typedef TYPE_2__ pal_perf_mon_info_u_t ;


 char* FUNC_0 (char*,int*,int) ;
 scalar_t__ FUNC_1 (int*,TYPE_2__*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 u64 VAR_2[16];
 pal_perf_mon_info_u_t VAR_3;

 if (FUNC_1(VAR_2, &VAR_3) != 0) return 0;

 VAR_1 += FUNC_2(VAR_1,
       "PMC/PMD pairs                 : %d\n"
       "Counter width                 : %d bits\n"
       "Cycle event number            : %d\n"
       "Retired event number          : %d\n"
       "Implemented PMC               : ",
       VAR_3.pal_perf_mon_info_s.generic, VAR_3.pal_perf_mon_info_s.width,
       VAR_3.pal_perf_mon_info_s.cycles, VAR_3.pal_perf_mon_info_s.retired);

 VAR_1 = FUNC_0(VAR_1, VAR_2, 256);
 VAR_1 += FUNC_2(VAR_1, "\nImplemented PMD               : ");
 VAR_1 = FUNC_0(VAR_1, VAR_2+4, 256);
 VAR_1 += FUNC_2(VAR_1, "\nCycles count capable          : ");
 VAR_1 = FUNC_0(VAR_1, VAR_2+8, 256);
 VAR_1 += FUNC_2(VAR_1, "\nRetired bundles count capable : ");
 VAR_1 = FUNC_0(VAR_1, VAR_2+12, 256);

 VAR_1 += FUNC_2(VAR_1, "\n");

 return VAR_1 - VAR_0;
}
