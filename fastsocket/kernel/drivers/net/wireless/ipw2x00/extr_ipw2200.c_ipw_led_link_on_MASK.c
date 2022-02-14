
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int config; scalar_t__ nic_type; int status; int lock; int led_link_off; int led_association_on; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipw_priv*,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ipw_priv *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;



 if (VAR_7->config & VAR_0 || VAR_7->nic_type == VAR_1)
  return;

 FUNC_5(&VAR_7->lock, VAR_8);

 if (!(VAR_7->status & VAR_6) &&
     !(VAR_7->status & VAR_5)) {
  FUNC_0("Link LED On\n");
  VAR_9 = FUNC_1(VAR_7, VAR_2);
  VAR_9 |= VAR_7->led_association_on;

  VAR_9 = FUNC_2(VAR_9);

  FUNC_0("Reg: 0x%08X\n", VAR_9);
  FUNC_3(VAR_7, VAR_2, VAR_9);

  VAR_7->status |= VAR_5;


  if (!(VAR_7->status & VAR_4))
   FUNC_4(&VAR_7->led_link_off,
           VAR_3);
 }

 FUNC_6(&VAR_7->lock, VAR_8);
}
