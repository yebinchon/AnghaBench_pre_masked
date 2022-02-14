
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spiderpci_iowa_private {scalar_t__ regs; } ;
struct iowa_bus {struct spiderpci_iowa_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct iowa_bus *VAR_1)
{
 struct spiderpci_iowa_private *VAR_2;
 u32 VAR_3;

 VAR_2 = VAR_1->private;
 VAR_3 = FUNC_0(VAR_2->regs + VAR_0);
 FUNC_1();
}
