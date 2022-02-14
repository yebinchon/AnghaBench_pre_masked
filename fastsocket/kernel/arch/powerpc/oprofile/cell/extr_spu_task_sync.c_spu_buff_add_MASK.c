
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t head; size_t tail; unsigned long* buff; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned long int VAR_2, int VAR_3)
{
 int VAR_4 = 1;

 if (VAR_1[VAR_3].head >= VAR_1[VAR_3].tail) {
  if ((VAR_1[VAR_3].head - VAR_1[VAR_3].tail)
      < (VAR_0 - 1))
   VAR_4 = 0;

 } else if (VAR_1[VAR_3].tail > VAR_1[VAR_3].head) {
  if ((VAR_1[VAR_3].tail - VAR_1[VAR_3].head)
      > 1)
   VAR_4 = 0;
 }

 if (!VAR_4) {
  VAR_1[VAR_3].buff[VAR_1[VAR_3].head] = VAR_2;
  VAR_1[VAR_3].head++;

  if (VAR_1[VAR_3].head >= VAR_0)
   VAR_1[VAR_3].head = 0;
 } else {







  FUNC_0();
 }
}
