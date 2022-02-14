
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {unsigned char* (* GetPointerToCurrentPos ) (int ) ;} ;
struct TYPE_7__ {scalar_t__ additionalOffset; int longestMatchLength; int numPairs; int numAvail; unsigned char const** reps; int numFastBytes; int* matches; int matchFinderObj; TYPE_1__ matchFinder; } ;
typedef TYPE_2__ CLzmaEnc ;


 scalar_t__ FUNC_0 (int const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 void* FUNC_2 (TYPE_2__*,int*) ;
 unsigned char* FUNC_3 (int ) ;
 unsigned char* FUNC_4 (int ) ;

__attribute__((used)) static uint32_t FUNC_5(CLzmaEnc *VAR_2, uint32_t *VAR_3)
{
  uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  const unsigned char *VAR_11;
  const uint32_t *VAR_12;

  if (VAR_2->additionalOffset == 0)
    VAR_5 = FUNC_2(VAR_2, &VAR_7);
  else
  {
    VAR_5 = VAR_2->longestMatchLength;
    VAR_7 = VAR_2->numPairs;
  }

  VAR_4 = VAR_2->numAvail;
  *VAR_3 = (uint32_t)-1;
  if (VAR_4 < 2)
    return 1;
  if (VAR_4 > VAR_0)
    VAR_4 = VAR_0;
  VAR_11 = VAR_2->matchFinder.GetPointerToCurrentPos(VAR_2->matchFinderObj) - 1;

  VAR_9 = VAR_8 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  {
    uint32_t VAR_13;
    const unsigned char *VAR_14 = VAR_11 - VAR_2->reps[VAR_10] - 1;
    if (VAR_11[0] != VAR_14[0] || VAR_11[1] != VAR_14[1])
      continue;
    for (VAR_13 = 2; VAR_13 < VAR_4 && VAR_11[VAR_13] == VAR_14[VAR_13]; VAR_13++);
    if (VAR_13 >= VAR_2->numFastBytes)
    {
      *VAR_3 = VAR_10;
      FUNC_1(VAR_2, VAR_13 - 1);
      return VAR_13;
    }
    if (VAR_13 > VAR_9)
    {
      VAR_8 = VAR_10;
      VAR_9 = VAR_13;
    }
  }

  VAR_12 = VAR_2->matches;
  if (VAR_5 >= VAR_2->numFastBytes)
  {
    *VAR_3 = VAR_12[VAR_7 - 1] + VAR_1;
    FUNC_1(VAR_2, VAR_5 - 1);
    return VAR_5;
  }

  VAR_6 = 0;
  if (VAR_5 >= 2)
  {
    VAR_6 = VAR_12[VAR_7 - 1];
    while (VAR_7 > 2 && VAR_5 == VAR_12[VAR_7 - 4] + 1)
    {
      if (!FUNC_0(VAR_12[VAR_7 - 3], VAR_6))
        break;
      VAR_7 -= 2;
      VAR_5 = VAR_12[VAR_7 - 2];
      VAR_6 = VAR_12[VAR_7 - 1];
    }
    if (VAR_5 == 2 && VAR_6 >= 0x80)
      VAR_5 = 1;
  }

  if (VAR_9 >= 2 && (
        (VAR_9 + 1 >= VAR_5) ||
        (VAR_9 + 2 >= VAR_5 && VAR_6 >= (1 << 9)) ||
        (VAR_9 + 3 >= VAR_5 && VAR_6 >= (1 << 15))))
  {
    *VAR_3 = VAR_8;
    FUNC_1(VAR_2, VAR_9 - 1);
    return VAR_9;
  }

  if (VAR_5 < 2 || VAR_4 <= 2)
    return 1;

  VAR_2->longestMatchLength = FUNC_2(VAR_2, &VAR_2->numPairs);
  if (VAR_2->longestMatchLength >= 2)
  {
    uint32_t VAR_15 = VAR_12[VAR_2->numPairs - 1];
    if ((VAR_2->longestMatchLength >= VAR_5 && VAR_15 < VAR_6) ||
        (VAR_2->longestMatchLength == VAR_5 + 1 && !FUNC_0(VAR_6, VAR_15)) ||
        (VAR_2->longestMatchLength > VAR_5 + 1) ||
        (VAR_2->longestMatchLength + 1 >= VAR_5 && VAR_5 >= 3 && FUNC_0(VAR_15, VAR_6)))
      return 1;
  }

  VAR_11 = VAR_2->matchFinder.GetPointerToCurrentPos(VAR_2->matchFinderObj) - 1;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  {
    uint32_t VAR_16, VAR_17;
    const unsigned char *VAR_18 = VAR_11 - VAR_2->reps[VAR_10] - 1;
    if (VAR_11[0] != VAR_18[0] || VAR_11[1] != VAR_18[1])
      continue;
    VAR_17 = VAR_5 - 1;
    for (VAR_16 = 2; VAR_16 < VAR_17 && VAR_11[VAR_16] == VAR_18[VAR_16]; VAR_16++);
    if (VAR_16 >= VAR_17)
      return 1;
  }
  *VAR_3 = VAR_6 + VAR_1;
  FUNC_1(VAR_2, VAR_5 - 2);
  return VAR_5;
}
