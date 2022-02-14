
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcibus_info {int pbi_lock; int pbi_int_ate_resource; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct pcibus_info *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->pbi_lock, VAR_3);
 VAR_2 = FUNC_0(&VAR_0->pbi_int_ate_resource, VAR_1);
 FUNC_2(&VAR_0->pbi_lock, VAR_3);

 return VAR_2;
}
