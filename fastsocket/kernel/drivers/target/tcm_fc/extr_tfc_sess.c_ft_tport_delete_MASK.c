
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_tport {struct ft_tpg* tpg; struct fc_lport* lport; } ;
struct ft_tpg {int * tport; } ;
struct fc_lport {struct ft_tport** prov; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct ft_tport*) ;
 int FUNC_2 (struct ft_tport*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ft_tport*,int *) ;

__attribute__((used)) static void FUNC_4(struct ft_tport *VAR_2)
{
 struct fc_lport *VAR_3;
 struct ft_tpg *VAR_4;

 FUNC_1(VAR_2);
 VAR_3 = VAR_2->lport;
 FUNC_0(VAR_2 != VAR_3->prov[VAR_0]);
 FUNC_3(VAR_3->prov[VAR_0], ((void*)0));

 VAR_4 = VAR_2->tpg;
 if (VAR_4) {
  VAR_4->tport = ((void*)0);
  VAR_2->tpg = ((void*)0);
 }
 FUNC_2(VAR_2, VAR_1);
}
