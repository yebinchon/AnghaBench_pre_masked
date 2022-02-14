
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_shca {int dummy; } ;
struct ehca_eq {int spinlock; int ipz_queue; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void *FUNC_3(struct ehca_shca *VAR_0, struct ehca_eq *VAR_1)
{
 unsigned long VAR_2;
 void *VAR_3;

 FUNC_1(&VAR_1->spinlock, VAR_2);
 VAR_3 = FUNC_0(&VAR_1->ipz_queue);
 FUNC_2(&VAR_1->spinlock, VAR_2);

 return VAR_3;
}
