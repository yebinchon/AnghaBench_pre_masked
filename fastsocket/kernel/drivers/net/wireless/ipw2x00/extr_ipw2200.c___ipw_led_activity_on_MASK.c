
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int config; int status; int led_act_off; int led_activity_on; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipw_priv*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipw_priv*,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->config & VAR_0)
  return;

 if (VAR_5->status & VAR_4)
  return;

 if (!(VAR_5->status & VAR_3)) {
  VAR_6 = FUNC_2(VAR_5, VAR_1);
  VAR_6 |= VAR_5->led_activity_on;

  VAR_6 = FUNC_3(VAR_6);

  FUNC_0("Reg: 0x%08X\n", VAR_6);
  FUNC_4(VAR_5, VAR_1, VAR_6);

  FUNC_0("Activity LED On\n");

  VAR_5->status |= VAR_3;

  FUNC_1(&VAR_5->led_act_off);
  FUNC_5(&VAR_5->led_act_off, VAR_2);
 } else {

  FUNC_1(&VAR_5->led_act_off);
  FUNC_5(&VAR_5->led_act_off, VAR_2);
 }
}
