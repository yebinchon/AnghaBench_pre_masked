
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ct_kill_threshold; } ;
struct il_priv {TYPE_1__ hw_params; int lock; } ;
struct il_ct_kill_config {int critical_temperature_R; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct il_priv*,int ,int,struct il_ct_kill_config*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct il_priv *VAR_3)
{
 struct il_ct_kill_config VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_5(&VAR_3->lock, VAR_5);
 FUNC_2(VAR_3, VAR_0,
        VAR_1);
 FUNC_6(&VAR_3->lock, VAR_5);

 VAR_4.critical_temperature_R =
     FUNC_3(VAR_3->hw_params.ct_kill_threshold);

 VAR_6 = FUNC_4(VAR_3, VAR_2, sizeof(VAR_4), &VAR_4);
 if (VAR_6)
  FUNC_1("C_CT_KILL_CONFIG failed\n");
 else
  FUNC_0("C_CT_KILL_CONFIG " "succeeded, "
         "critical temperature is %d\n",
         VAR_3->hw_params.ct_kill_threshold);
}
