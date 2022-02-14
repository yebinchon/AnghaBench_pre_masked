
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_tport {int sess_count; } ;
struct ft_sess {int port_id; scalar_t__ params; int hash; struct ft_tport* tport; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ft_sess *VAR_0)
{
 struct ft_tport *VAR_1 = VAR_0->tport;

 FUNC_1(&VAR_0->hash);
 FUNC_0(!VAR_1->sess_count);
 VAR_1->sess_count--;
 VAR_0->port_id = -1;
 VAR_0->params = 0;
}
