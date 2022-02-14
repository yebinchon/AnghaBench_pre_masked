
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nes_cm_node {int cm_core; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nes_cm_node*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*,struct nes_cm_node*,int ) ;
 int FUNC_3 (int ,struct nes_cm_node*) ;
 int FUNC_4 (struct nes_cm_node*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct nes_cm_node *VAR_2, struct sk_buff *VAR_3,
        int VAR_4)
{
 FUNC_0(VAR_2);
 VAR_2->state = VAR_0;
 if (VAR_4) {
  FUNC_2(VAR_1, "passive_open_err sending RST for "
     "cm_node=%p state =%d\n", VAR_2, VAR_2->state);
  FUNC_4(VAR_2, VAR_3);
 } else {
  FUNC_1(VAR_3);
  FUNC_3(VAR_2->cm_core, VAR_2);
 }
}
