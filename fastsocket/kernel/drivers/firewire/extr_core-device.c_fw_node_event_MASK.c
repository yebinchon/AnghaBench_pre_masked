
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_node {struct fw_device* data; int node_id; int link_on; } ;
struct fw_device {int is_local; int work; int state; int generation; int node_id; int client_list; int client_list_mutex; int node; int card; } ;
struct fw_card {int link; int generation; struct fw_node* local_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct fw_card*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct fw_node*) ;
 struct fw_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;

void FUNC_14(struct fw_card *VAR_10, struct fw_node *VAR_11, int VAR_12)
{
 struct fw_device *VAR_13;

 switch (VAR_12) {
 case 133:
 case 129:
  if (!VAR_11->link_on)
   break;
 create:
  VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_3);
  if (VAR_13 == ((void*)0))
   break;
  FUNC_5(&VAR_13->state, VAR_1);
  VAR_13->card = FUNC_7(VAR_10);
  VAR_13->node = FUNC_8(VAR_11);
  VAR_13->node_id = VAR_11->node_id;
  VAR_13->generation = VAR_10->generation;
  VAR_13->is_local = VAR_11 == VAR_10->local_node;
  FUNC_11(&VAR_13->client_list_mutex);
  FUNC_1(&VAR_13->client_list);






  VAR_11->data = VAR_13;







  FUNC_0(&VAR_13->work, VAR_6);
  FUNC_12(&VAR_13->work, VAR_4);
  break;

 case 131:
  VAR_13 = VAR_11->data;
  if (VAR_13 == ((void*)0))
   goto create;

  VAR_13->node_id = VAR_11->node_id;
  FUNC_13();
  VAR_13->generation = VAR_10->generation;
  if (FUNC_3(&VAR_13->state,
       VAR_2,
       VAR_1) == VAR_2) {
   FUNC_2(&VAR_13->work, VAR_7);
   FUNC_12(&VAR_13->work,
    VAR_13->is_local ? 0 : VAR_4);
  }
  break;

 case 128:
  if (!VAR_11->link_on || VAR_11->data == ((void*)0))
   break;

  VAR_13 = VAR_11->data;
  VAR_13->node_id = VAR_11->node_id;
  FUNC_13();
  VAR_13->generation = VAR_10->generation;
  if (FUNC_4(&VAR_13->state) == VAR_2) {
   FUNC_2(&VAR_13->work, VAR_9);
   FUNC_12(&VAR_13->work, 0);
  }
  break;

 case 132:
 case 130:
  if (!VAR_11->data)
   break;
  VAR_13 = VAR_11->data;
  if (FUNC_6(&VAR_13->state,
    VAR_0) == VAR_2) {
   FUNC_2(&VAR_13->work, VAR_8);
   FUNC_12(&VAR_13->work,
    FUNC_10(&VAR_10->link) ? 0 : VAR_5);
  }
  break;
 }
}
