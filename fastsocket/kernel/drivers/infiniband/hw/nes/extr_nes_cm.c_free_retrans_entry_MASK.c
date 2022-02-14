
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_timer_entry {int skb; } ;
struct nes_cm_node {int cm_core; struct nes_timer_entry* send_entry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nes_timer_entry*) ;
 int FUNC_2 (int ,struct nes_cm_node*) ;

__attribute__((used)) static void FUNC_3(struct nes_cm_node *VAR_0)
{
 struct nes_timer_entry *VAR_1;

 VAR_1 = VAR_0->send_entry;
 if (VAR_1) {
  VAR_0->send_entry = ((void*)0);
  FUNC_0(VAR_1->skb);
  FUNC_1(VAR_1);
  FUNC_2(VAR_0->cm_core, VAR_0);
 }
}
