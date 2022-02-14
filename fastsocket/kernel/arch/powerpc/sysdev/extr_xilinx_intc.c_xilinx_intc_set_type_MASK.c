
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {unsigned int status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct irq_desc* FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4, unsigned int VAR_5)
{
 struct irq_desc *VAR_6 = FUNC_0(VAR_4);

 VAR_6->status &= ~(VAR_3 | VAR_0);
 VAR_6->status |= VAR_5 & VAR_3;
 if (VAR_5 & (VAR_1 | VAR_2))
  VAR_6->status |= VAR_0;
 return 0;
}
