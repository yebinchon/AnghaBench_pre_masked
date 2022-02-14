
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_eqe {int dummy; } ;
struct ehea_eq {int spinlock; int hw_queue; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ehea_eqe *FUNC_3(struct ehea_eq *VAR_0)
{
 struct ehea_eqe *VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->spinlock, VAR_2);
 VAR_1 = (struct ehea_eqe *)FUNC_0(&VAR_0->hw_queue);
 FUNC_2(&VAR_0->spinlock, VAR_2);

 return VAR_1;
}
