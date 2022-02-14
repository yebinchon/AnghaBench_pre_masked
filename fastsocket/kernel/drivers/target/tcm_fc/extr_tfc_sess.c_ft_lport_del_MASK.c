
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_tport {int dummy; } ;
struct fc_lport {struct ft_tport** prov; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ft_tport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct fc_lport *VAR_2, void *VAR_3)
{
 struct ft_tport *VAR_4;

 FUNC_1(&VAR_1);
 VAR_4 = VAR_2->prov[VAR_0];
 if (VAR_4)
  FUNC_0(VAR_4);
 FUNC_2(&VAR_1);
}
