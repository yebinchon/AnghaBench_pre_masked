
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppol2tp_tunnel {int list; int pppol2tp_net; } ;
struct pppol2tp_net {int pppol2tp_tunnel_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pppol2tp_tunnel*) ;
 int FUNC_2 (int *) ;
 struct pppol2tp_net* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pppol2tp_tunnel *VAR_1)
{
 struct pppol2tp_net *VAR_2 = FUNC_3(VAR_1->pppol2tp_net);


 FUNC_4(&VAR_2->pppol2tp_tunnel_list_lock);
 FUNC_2(&VAR_1->list);
 FUNC_5(&VAR_2->pppol2tp_tunnel_list_lock);

 FUNC_0(&VAR_0);
 FUNC_1(VAR_1);
}
