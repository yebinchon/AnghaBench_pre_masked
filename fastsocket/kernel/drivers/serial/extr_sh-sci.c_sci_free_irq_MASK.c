
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port {scalar_t__* irqs; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,struct sci_port*) ;

__attribute__((used)) static void FUNC_2(struct sci_port *VAR_0)
{
 int VAR_1;

 if (VAR_0->irqs[0] == VAR_0->irqs[1])
  FUNC_1(VAR_0->irqs[0], VAR_0);
 else {
  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->irqs); VAR_1++) {
   if (!VAR_0->irqs[VAR_1])
    continue;

   FUNC_1(VAR_0->irqs[VAR_1], VAR_0);
  }
 }
}
