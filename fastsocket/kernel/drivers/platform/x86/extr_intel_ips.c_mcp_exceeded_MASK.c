
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ips_driver {int mcp_temp_limit; int mcp_avg_temp; int cpu_avg_power; int mch_avg_power; int mcp_power_limit; int turbo_status_lock; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char const*,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct ips_driver *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2 = 0;
 u32 VAR_3;
 u32 VAR_4;
 const char *VAR_5 = "MCP limit exceeded: ";

 FUNC_1(&VAR_0->turbo_status_lock, VAR_1);

 VAR_3 = VAR_0->mcp_temp_limit * 100;
 if (VAR_0->mcp_avg_temp > VAR_3) {
  FUNC_0(&VAR_0->dev->dev,
   "%sAvg temp %u, limit %u\n", VAR_5, VAR_0->mcp_avg_temp,
   VAR_3);
  VAR_2 = 1;
 }

 VAR_4 = VAR_0->cpu_avg_power + VAR_0->mch_avg_power;
 if (VAR_4 > VAR_0->mcp_power_limit) {
  FUNC_0(&VAR_0->dev->dev,
   "%sAvg power %u, limit %u\n", VAR_5, VAR_4,
   VAR_0->mcp_power_limit);
  VAR_2 = 1;
 }

 FUNC_2(&VAR_0->turbo_status_lock, VAR_1);

 return VAR_2;
}
