
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_4__ {int range; int low; } ;
typedef TYPE_1__ CRangeEnc ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_1, uint32_t VAR_2, unsigned VAR_3)
{
  do
  {
    VAR_1->range >>= 1;
    VAR_1->low += VAR_1->range & (0 - ((VAR_2 >> --VAR_3) & 1));
    if (VAR_1->range < VAR_0)
    {
      VAR_1->range <<= 8;
      FUNC_0(VAR_1);
    }
  }
  while (VAR_3 != 0);
}
