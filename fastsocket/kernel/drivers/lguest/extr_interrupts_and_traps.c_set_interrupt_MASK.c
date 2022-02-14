
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int tsk; int irqs_pending; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct lg_cpu *VAR_0, unsigned int VAR_1)
{




 FUNC_1(VAR_1, VAR_0->irqs_pending);





 if (!FUNC_2(VAR_0->tsk))
  FUNC_0(VAR_0->tsk);
}
