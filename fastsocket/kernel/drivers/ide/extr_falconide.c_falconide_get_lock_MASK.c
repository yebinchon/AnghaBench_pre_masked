
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(irq_handler_t VAR_1, void *VAR_2)
{
 if (VAR_0 == 0) {
  if (FUNC_0() > 0)
   FUNC_1("Falcon IDE hasn't ST-DMA lock in interrupt");
  FUNC_2(VAR_1, VAR_2);
  VAR_0 = 1;
 }
}
