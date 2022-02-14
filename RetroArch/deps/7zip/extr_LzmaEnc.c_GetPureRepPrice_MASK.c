
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int * isRepG2; int * isRepG1; int * isRepG0; int ** isRep0Long; } ;
typedef TYPE_1__ CLzmaEnc ;


 size_t FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static uint32_t FUNC_3(CLzmaEnc *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
  uint32_t VAR_4;
  if (VAR_1 == 0)
  {
    VAR_4 = FUNC_1(VAR_0->isRepG0[VAR_2]);
    VAR_4 += FUNC_2(VAR_0->isRep0Long[VAR_2][VAR_3]);
  }
  else
  {
    VAR_4 = FUNC_2(VAR_0->isRepG0[VAR_2]);
    if (VAR_1 == 1)
      VAR_4 += FUNC_1(VAR_0->isRepG1[VAR_2]);
    else
    {
      VAR_4 += FUNC_2(VAR_0->isRepG1[VAR_2]);
      VAR_4 += FUNC_0(VAR_0->isRepG2[VAR_2], VAR_1 - 2);
    }
  }
  return VAR_4;
}
