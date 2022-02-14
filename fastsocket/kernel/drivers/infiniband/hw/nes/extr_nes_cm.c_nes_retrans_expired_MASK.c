
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_cm_node {int state; struct iw_cm_id* cm_id; int cm_core; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;} ;
typedef enum nes_cm_node_state { ____Placeholder_nes_cm_node_state } nes_cm_node_state ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct nes_cm_node*) ;
 int FUNC_1 (struct nes_cm_node*,int ) ;
 int FUNC_2 (int ,struct nes_cm_node*) ;
 int FUNC_3 (struct nes_cm_node*,int *) ;
 int FUNC_4 (struct iw_cm_id*) ;

__attribute__((used)) static void FUNC_5(struct nes_cm_node *VAR_2)
{
 struct iw_cm_id *VAR_3 = VAR_2->cm_id;
 enum nes_cm_node_state VAR_4 = VAR_2->state;
 VAR_2->state = VAR_1;

 switch (VAR_4) {
 case 128:
 case 131:
  FUNC_2(VAR_2->cm_core, VAR_2);
  break;
 case 129:
 case 130:
  if (VAR_2->cm_id)
   VAR_3->rem_ref(VAR_3);
  FUNC_3(VAR_2, ((void*)0));
  break;
 default:
  FUNC_0(VAR_2);
  FUNC_3(VAR_2, ((void*)0));
  FUNC_1(VAR_2, VAR_0);
 }
}
