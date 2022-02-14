
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ range; int low; } ;
typedef TYPE_1__ CRangeEnc ;
typedef scalar_t__ CLzmaProb ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_4, CLzmaProb *VAR_5, uint32_t VAR_6)
{
  uint32_t VAR_7 = *VAR_5;
  uint32_t VAR_8 = (VAR_4->range >> VAR_1) * VAR_7;
  if (VAR_6 == 0)
  {
    VAR_4->range = VAR_8;
    VAR_7 += (VAR_0 - VAR_7) >> VAR_2;
  }
  else
  {
    VAR_4->low += VAR_8;
    VAR_4->range -= VAR_8;
    VAR_7 -= VAR_7 >> VAR_2;
  }
  *VAR_5 = (CLzmaProb)VAR_7;
  if (VAR_4->range < VAR_3)
  {
    VAR_4->range <<= 8;
    FUNC_0(VAR_4);
  }
}
