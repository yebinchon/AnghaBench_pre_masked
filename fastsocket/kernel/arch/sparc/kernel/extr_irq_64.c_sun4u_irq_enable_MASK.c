
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {unsigned long imap; unsigned long iclr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 struct irq_handler_data* FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct irq_handler_data*) ;
 unsigned int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_6)
{
 struct irq_handler_data *VAR_7 = FUNC_0(VAR_6);

 if (FUNC_2(VAR_7)) {
  unsigned long VAR_8, VAR_9, VAR_10;
  unsigned int VAR_11;

  VAR_8 = FUNC_1(VAR_6);
  VAR_9 = VAR_7->imap;

  VAR_11 = FUNC_3(VAR_9, VAR_8);

  VAR_10 = FUNC_4(VAR_9);
  VAR_10 &= ~(VAR_4 | VAR_3 |
    VAR_1 | VAR_2);
  VAR_10 |= VAR_11 | VAR_5;
  FUNC_5(VAR_10, VAR_9);
  FUNC_5(VAR_0, VAR_7->iclr);
 }
}
