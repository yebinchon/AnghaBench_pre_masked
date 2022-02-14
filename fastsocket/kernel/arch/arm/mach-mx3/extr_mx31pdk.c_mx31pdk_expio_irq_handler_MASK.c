
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_3, struct irq_desc *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_5 = FUNC_0(VAR_0);
 VAR_6 = FUNC_0(VAR_1) & ~VAR_5;

 VAR_7 = VAR_2;
 for (; VAR_6 != 0; VAR_6 >>= 1, VAR_7++) {
  if ((VAR_6 & 1) == 0)
   continue;
  FUNC_1(VAR_7);
 }
}
