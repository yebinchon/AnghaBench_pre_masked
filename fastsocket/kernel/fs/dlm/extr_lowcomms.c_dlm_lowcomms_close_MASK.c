
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_node_addr {size_t addr_count; struct dlm_node_addr** addr; int list; } ;
struct connection {int rwork; int swork; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct connection*,int) ;
 int VAR_3 ;
 struct dlm_node_addr* FUNC_4 (int) ;
 int FUNC_5 (struct dlm_node_addr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 struct connection* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(int VAR_4)
{
 struct connection *VAR_5;
 struct dlm_node_addr *VAR_6;

 FUNC_7("closing connection to node %d", VAR_4);
 VAR_5 = FUNC_8(VAR_4, 0);
 if (VAR_5) {
  FUNC_2(VAR_1, &VAR_5->flags);
  FUNC_2(VAR_2, &VAR_5->flags);
  FUNC_9(VAR_0, &VAR_5->flags);
  if (FUNC_0(&VAR_5->swork))
   FUNC_7("canceled swork for node %d", VAR_4);
  if (FUNC_0(&VAR_5->rwork))
   FUNC_7("canceled rwork for node %d", VAR_4);
  FUNC_1(VAR_5);
  FUNC_3(VAR_5, 1);
 }

 FUNC_10(&VAR_3);
 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_6(&VAR_6->list);
  while (VAR_6->addr_count--)
   FUNC_5(VAR_6->addr[VAR_6->addr_count]);
  FUNC_5(VAR_6);
 }
 FUNC_11(&VAR_3);

 return 0;
}
