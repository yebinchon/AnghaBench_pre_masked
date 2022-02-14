
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ips_driver {int mcp_power_limit; int mcp_temp_limit; TYPE_1__* limits; } ;
struct TYPE_2__ {int mcp_power_limit; int core_temp_limit; int mch_temp_limit; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct ips_driver *VAR_0)
{
 if (VAR_0->mcp_power_limit < VAR_0->limits->mcp_power_limit ||
     VAR_0->mcp_power_limit > 35000)
  VAR_0->mcp_power_limit = VAR_0->limits->mcp_power_limit;

 if (VAR_0->mcp_temp_limit < VAR_0->limits->core_temp_limit ||
     VAR_0->mcp_temp_limit < VAR_0->limits->mch_temp_limit ||
     VAR_0->mcp_temp_limit > 150)
  VAR_0->mcp_temp_limit = FUNC_0(VAR_0->limits->core_temp_limit,
       VAR_0->limits->mch_temp_limit);
}
