
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3)
{
 unsigned long VAR_4;
 struct irq_desc *VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_2, VAR_4);
 if (!(VAR_5->status & (VAR_0 | VAR_1)))
  FUNC_0(VAR_3);
 FUNC_3(&VAR_2, VAR_4);
}
