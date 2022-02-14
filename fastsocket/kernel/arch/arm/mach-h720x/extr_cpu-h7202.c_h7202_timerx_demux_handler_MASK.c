
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 unsigned int FUNC_0 (int ,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_4, struct irq_desc *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_0 (VAR_2, VAR_1);

 if ( VAR_6 & VAR_3 ) {
  FUNC_2();
  if( VAR_6 == VAR_3 )
   return;
 }

 VAR_6 >>= 1;
 VAR_7 = VAR_0;
 while (VAR_6) {
  if (VAR_6 & 1)
   FUNC_1(VAR_7);
  VAR_7++;
  VAR_6 >>= 1;
 }
}
