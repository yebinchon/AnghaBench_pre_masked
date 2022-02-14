
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t ptrdiff_t ;
struct TYPE_4__ {int (* GetNumAvailableBytes ) (int ) ;int (* GetMatches ) (int ,int*) ;unsigned char* (* GetPointerToCurrentPos ) (int ) ;} ;
struct TYPE_5__ {int numAvail; int* matches; int numFastBytes; int additionalOffset; int matchFinderObj; TYPE_1__ matchFinder; } ;
typedef TYPE_2__ CLzmaEnc ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*) ;
 unsigned char* FUNC_2 (int ) ;

__attribute__((used)) static uint32_t FUNC_3(CLzmaEnc *VAR_1, uint32_t *VAR_2)
{
  uint32_t VAR_3 = 0, VAR_4;
  VAR_1->numAvail = VAR_1->matchFinder.GetNumAvailableBytes(VAR_1->matchFinderObj);
  VAR_4 = VAR_1->matchFinder.GetMatches(VAR_1->matchFinderObj, VAR_1->matches);

  if (VAR_4 > 0)
  {
    VAR_3 = VAR_1->matches[VAR_4 - 2];
    if (VAR_3 == VAR_1->numFastBytes)
    {
      uint32_t VAR_5 = VAR_1->numAvail;
      if (VAR_5 > VAR_0)
        VAR_5 = VAR_0;
      {
        const unsigned char *VAR_6 = VAR_1->matchFinder.GetPointerToCurrentPos(VAR_1->matchFinderObj) - 1;
        const unsigned char *VAR_7 = VAR_6 + VAR_3;
        ptrdiff_t VAR_8 = (ptrdiff_t)-1 - VAR_1->matches[VAR_4 - 1];
        const unsigned char *VAR_9 = VAR_6 + VAR_5;
        for (; VAR_7 != VAR_9 && *VAR_7 == VAR_7[VAR_8]; VAR_7++);
        VAR_3 = (uint32_t)(VAR_7 - VAR_6);
      }
    }
  }
  VAR_1->additionalOffset++;
  *VAR_2 = VAR_4;
  return VAR_3;
}
