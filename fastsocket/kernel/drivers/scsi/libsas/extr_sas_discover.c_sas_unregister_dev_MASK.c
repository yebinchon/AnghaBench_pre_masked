
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {int port; int disco_list_node; int rphy; int state; } ;
struct asd_sas_port {int destroy_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct asd_sas_port*,struct domain_device*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct asd_sas_port *VAR_2, struct domain_device *VAR_3)
{
 if (!FUNC_8(VAR_1, &VAR_3->state) &&
     !FUNC_1(&VAR_3->disco_list_node)) {

  FUNC_0(&VAR_3->disco_list_node);
  FUNC_4(VAR_3->rphy);
  FUNC_6(VAR_2, VAR_3);
  return;
 }

 if (!FUNC_7(VAR_1, &VAR_3->state)) {
  FUNC_5(VAR_3->rphy);
  FUNC_2(&VAR_3->disco_list_node, &VAR_2->destroy_list);
  FUNC_3(VAR_3->port, VAR_0);
 }
}
