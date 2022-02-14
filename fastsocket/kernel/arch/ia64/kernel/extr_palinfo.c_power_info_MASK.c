
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int im; int entry_latency; int exit_latency; int power_consumption; scalar_t__ co; } ;
struct TYPE_5__ {TYPE_1__ pal_power_mgmt_info_s; } ;
typedef TYPE_2__ pal_power_mgmt_info_u_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 s64 VAR_1;
 char *VAR_2 = VAR_0;
 u64 VAR_3[8];
 pal_power_mgmt_info_u_t *VAR_4 =(pal_power_mgmt_info_u_t *)VAR_3;
 int VAR_5;

 VAR_1 = FUNC_0(VAR_4);
 if (VAR_1 != 0) return 0;

 for (VAR_5=0; VAR_5 < 8 ; VAR_5++ ) {
  if (VAR_4[VAR_5].pal_power_mgmt_info_s.im == 1) {
   VAR_2 += FUNC_1(VAR_2, "Power level %d:\n"
         "\tentry_latency       : %d cycles\n"
         "\texit_latency        : %d cycles\n"
         "\tpower consumption   : %d mW\n"
         "\tCache+TLB coherency : %s\n", VAR_5,
         VAR_4[VAR_5].pal_power_mgmt_info_s.entry_latency,
         VAR_4[VAR_5].pal_power_mgmt_info_s.exit_latency,
         VAR_4[VAR_5].pal_power_mgmt_info_s.power_consumption,
         VAR_4[VAR_5].pal_power_mgmt_info_s.co ? "Yes" : "No");
  } else {
   VAR_2 += FUNC_1(VAR_2,"Power level %d: not implemented\n",VAR_5);
  }
 }
 return VAR_2 - VAR_0;
}
