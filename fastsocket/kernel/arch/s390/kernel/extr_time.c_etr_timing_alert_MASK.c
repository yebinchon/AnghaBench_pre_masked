
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_irq_parm {scalar_t__ eai; scalar_t__ pc1; scalar_t__ pc0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct etr_irq_parm *VAR_6)
{
 if (VAR_6->pc0)

  FUNC_1(VAR_0, &VAR_3);
 if (VAR_6->pc1)

  FUNC_1(VAR_1, &VAR_3);
 if (VAR_6->eai)




  FUNC_1(VAR_2, &VAR_3);
 FUNC_0(VAR_5, &VAR_4);
}
