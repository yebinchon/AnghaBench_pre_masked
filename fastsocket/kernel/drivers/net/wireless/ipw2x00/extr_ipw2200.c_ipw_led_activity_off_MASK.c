
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int config; int status; int lock; int led_activity_off; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipw_priv*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 if (VAR_3->config & VAR_0)
  return;

 FUNC_4(&VAR_3->lock, VAR_4);

 if (VAR_3->status & VAR_2) {
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  VAR_5 &= VAR_3->led_activity_off;

  VAR_5 = FUNC_2(VAR_5);

  FUNC_0("Reg: 0x%08X\n", VAR_5);
  FUNC_3(VAR_3, VAR_1, VAR_5);

  FUNC_0("Activity LED Off\n");

  VAR_3->status &= ~VAR_2;
 }

 FUNC_5(&VAR_3->lock, VAR_4);
}
