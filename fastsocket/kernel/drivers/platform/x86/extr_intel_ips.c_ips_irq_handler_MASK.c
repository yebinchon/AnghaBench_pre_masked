
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ips_driver {int core_power_limit; int mch_power_limit; int cpu_turbo_enabled; int gpu_turbo_enabled; int mcp_temp_limit; int mcp_power_limit; TYPE_1__* dev; int turbo_status_lock; scalar_t__ gpu_busy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct ips_driver*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_19, void *VAR_20)
{
 struct ips_driver *VAR_21 = VAR_20;
 u8 VAR_22 = FUNC_4(VAR_18);
 u8 VAR_23 = FUNC_4(VAR_17);

 if (!VAR_22 && !VAR_23)
  return VAR_1;

 FUNC_0(&VAR_21->dev->dev, "TSES: 0x%02x\n", VAR_22);
 FUNC_0(&VAR_21->dev->dev, "TES: 0x%02x\n", VAR_23);


 if (VAR_23 & 1) {
  u32 VAR_24, VAR_25;

  VAR_24 = FUNC_5(VAR_15);
  VAR_25 = FUNC_5(VAR_16);

  if (VAR_24 & VAR_6) {
   FUNC_2(&VAR_21->turbo_status_lock);
   VAR_21->core_power_limit = (VAR_24 & VAR_7) >>
    VAR_8;
   VAR_21->mch_power_limit = (VAR_24 & VAR_3) >>
    VAR_4;

   VAR_21->cpu_turbo_enabled = !(VAR_24 & VAR_9);




   VAR_21->cpu_turbo_enabled = 0;
   if (VAR_21->gpu_busy)
    VAR_21->gpu_turbo_enabled = !(VAR_24 & VAR_5);
   VAR_21->mcp_temp_limit = (VAR_24 & VAR_12) >>
    VAR_13;
   VAR_21->mcp_power_limit = (VAR_25 & VAR_10) >>
    VAR_11;
   FUNC_7(VAR_21);
   FUNC_3(&VAR_21->turbo_status_lock);

   FUNC_6(VAR_14, VAR_2);
  }
  FUNC_6(VAR_17, VAR_23);
 }


 if (VAR_22) {
  FUNC_1(&VAR_21->dev->dev,
    "thermal trip occurred, tses: 0x%04x\n", VAR_22);
  FUNC_6(VAR_18, VAR_22);
 }

 return VAR_0;
}
