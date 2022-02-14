
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct irq_desc* VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void
FUNC_3 (unsigned int VAR_3)
{
 struct irq_desc *VAR_4 = VAR_2 + VAR_3;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);





 if ((VAR_4->status & (VAR_1|VAR_0)) ==
     (VAR_1|VAR_0))
  FUNC_1(VAR_3);
}
