
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ips_driver {int ctv2_avg_temp; int ctv1_avg_temp; int cpu_avg_power; int core_power_limit; TYPE_2__* dev; int turbo_status_lock; TYPE_1__* limits; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int core_temp_limit; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct ips_driver *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 bool VAR_4 = 0;

 FUNC_1(&VAR_0->turbo_status_lock, VAR_2);
 VAR_3 = VAR_1 ? VAR_0->ctv2_avg_temp : VAR_0->ctv1_avg_temp;
 if (VAR_3 > (VAR_0->limits->core_temp_limit * 100))
  VAR_4 = 1;
 if (VAR_0->cpu_avg_power > VAR_0->core_power_limit * 100)
  VAR_4 = 1;
 FUNC_2(&VAR_0->turbo_status_lock, VAR_2);

 if (VAR_4)
  FUNC_0(&VAR_0->dev->dev,
    "CPU power or thermal limit exceeded\n");

 return VAR_4;
}
