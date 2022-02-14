
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ depth; } ;
struct ipipe_domain {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 struct ipipe_domain VAR_2 ;
 struct irq_desc* FUNC_3 (unsigned int) ;

void FUNC_4(struct ipipe_domain *VAR_3, unsigned VAR_4)
{
 struct irq_desc *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_0(VAR_4);

 VAR_5->depth = 0;
 if (VAR_3 != &VAR_2 &&
     FUNC_2(&VAR_0[VAR_6]) == 1)
  FUNC_1(VAR_6, &VAR_1);
}
