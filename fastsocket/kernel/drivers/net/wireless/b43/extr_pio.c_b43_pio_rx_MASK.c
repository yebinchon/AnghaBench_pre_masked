
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_pio_rxqueue {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct b43_pio_rxqueue*) ;

void FUNC_3(struct b43_pio_rxqueue *VAR_0)
{
 unsigned int VAR_1 = 0;
 bool VAR_2;

 while (1) {
  VAR_2 = (FUNC_2(VAR_0) == 0);
  if (VAR_2)
   break;
  FUNC_1();
  if (FUNC_0(++VAR_1 > 10000))
   break;
 }
}
