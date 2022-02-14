
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nes_cm_node {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nes_cm_node*) ;
 int FUNC_1 (struct nes_cm_node*) ;
 int FUNC_2 (struct nes_cm_node*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*,struct nes_cm_node*,int ) ;
 int FUNC_5 (struct nes_cm_node*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct nes_cm_node *VAR_3, struct sk_buff *VAR_4,
       int VAR_5)
{
 FUNC_1(VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_2, "ERROR active err called for cm_node=%p, "
     "state=%d\n", VAR_3, VAR_3->state);
  FUNC_0(VAR_3);
  FUNC_5(VAR_3, VAR_4);
 } else {
  FUNC_3(VAR_4);
 }

 VAR_3->state = VAR_1;
 FUNC_2(VAR_3, VAR_0);
}
