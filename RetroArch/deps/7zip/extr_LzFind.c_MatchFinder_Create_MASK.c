
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int keepSizeBefore; int keepSizeAfter; int matchMaxLen; int numHashBytes; int hashMask; int historySize; int hashSizeSum; int cyclicBufferSize; size_t numRefs; int hash; scalar_t__ son; scalar_t__ btMode; scalar_t__ fixedHashSize; } ;
typedef int ISzAlloc ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (size_t,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_4(CMatchFinder *VAR_4, uint32_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8,
    ISzAlloc *VAR_9)
{
  uint32_t VAR_10;

  if (VAR_5 > VAR_0)
  {
    FUNC_2(VAR_4, VAR_9);
    return 0;
  }

  VAR_10 = VAR_5 >> 1;
       if (VAR_5 >= ((uint32_t)3 << 30)) VAR_10 = VAR_5 >> 3;
  else if (VAR_5 >= ((uint32_t)2 << 30)) VAR_10 = VAR_5 >> 2;

  VAR_10 += (VAR_6 + VAR_7 + VAR_8) / 2 + (1 << 19);

  VAR_4->keepSizeBefore = VAR_5 + VAR_6 + 1;
  VAR_4->keepSizeAfter = VAR_7 + VAR_8;



  if (FUNC_1(VAR_4, VAR_10, VAR_9))
  {
    uint32_t VAR_11 = VAR_5 + 1;
    uint32_t VAR_12;
    VAR_4->matchMaxLen = VAR_7;
    {
      VAR_4->fixedHashSize = 0;
      if (VAR_4->numHashBytes == 2)
        VAR_12 = (1 << 16) - 1;
      else
      {
        VAR_12 = VAR_5 - 1;
        VAR_12 |= (VAR_12 >> 1);
        VAR_12 |= (VAR_12 >> 2);
        VAR_12 |= (VAR_12 >> 4);
        VAR_12 |= (VAR_12 >> 8);
        VAR_12 >>= 1;
        VAR_12 |= 0xFFFF;
        if (VAR_12 > (1 << 24))
        {
          if (VAR_4->numHashBytes == 3)
            VAR_12 = (1 << 24) - 1;
          else
            VAR_12 >>= 1;

        }
      }
      VAR_4->hashMask = VAR_12;
      VAR_12++;
      if (VAR_4->numHashBytes > 2) VAR_4->fixedHashSize += VAR_1;
      if (VAR_4->numHashBytes > 3) VAR_4->fixedHashSize += VAR_2;
      if (VAR_4->numHashBytes > 4) VAR_4->fixedHashSize += VAR_3;
      VAR_12 += VAR_4->fixedHashSize;
    }

    {
      size_t VAR_13;
      size_t VAR_14;
      VAR_4->historySize = VAR_5;
      VAR_4->hashSizeSum = VAR_12;
      VAR_4->cyclicBufferSize = VAR_11;

      VAR_14 = VAR_11;
      if (VAR_4->btMode)
        VAR_14 <<= 1;
      VAR_13 = VAR_12 + VAR_14;

      if (VAR_4->hash && VAR_4->numRefs == VAR_13)
        return 1;

      FUNC_3(VAR_4, VAR_9);
      VAR_4->numRefs = VAR_13;
      VAR_4->hash = FUNC_0(VAR_13, VAR_9);

      if (VAR_4->hash)
      {
        VAR_4->son = VAR_4->hash + VAR_4->hashSizeSum;
        return 1;
      }
    }
  }

  FUNC_2(VAR_4, VAR_9);
  return 0;
}
