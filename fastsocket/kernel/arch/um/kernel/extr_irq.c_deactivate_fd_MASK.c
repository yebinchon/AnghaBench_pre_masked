
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fd {int dummy; } ;


 struct irq_fd* FUNC_0 (int,int,int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(int VAR_1, int VAR_2)
{
 struct irq_fd *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_3(&VAR_0, VAR_4);
 VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_4(&VAR_0, VAR_4);
  return;
 }

 FUNC_2(VAR_5, -1);
 FUNC_4(&VAR_0, VAR_4);

 FUNC_1(VAR_1);
}
