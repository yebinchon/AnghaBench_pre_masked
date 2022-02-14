
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eic {unsigned int first_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eic*,int ,int) ;
 struct eic* FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2)
{
 struct eic *VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3, VAR_0, 1 << (VAR_2 - VAR_3->first_irq));
 FUNC_0(VAR_3, VAR_1, 1 << (VAR_2 - VAR_3->first_irq));
}
