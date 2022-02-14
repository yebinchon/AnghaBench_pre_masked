
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int zlock; } ;
struct zs_port {struct zs_scc* scc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zs_port*) ;

__attribute__((used)) static void FUNC_3(struct zs_port *VAR_0)
{
 struct zs_scc *VAR_1 = VAR_0->scc;

 FUNC_0(&VAR_1->zlock);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->zlock);
}
