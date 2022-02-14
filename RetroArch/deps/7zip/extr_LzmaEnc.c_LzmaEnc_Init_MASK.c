
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int p; } ;
struct TYPE_5__ {int p; } ;
struct TYPE_7__ {size_t lp; size_t lc; int pbMask; int pb; int lpMask; scalar_t__ additionalOffset; scalar_t__ optimumCurrentIndex; scalar_t__ optimumEndIndex; void** posAlignEncoder; TYPE_2__ repLenEnc; TYPE_1__ lenEnc; void** posEncoders; void*** posSlotEncoder; void** litProbs; void** isRepG2; void** isRepG1; void** isRepG0; void** isRep; void*** isRep0Long; void*** isMatch; int rc; scalar_t__* reps; scalar_t__ state; } ;
typedef void* CLzmaProb ;
typedef TYPE_3__ CLzmaEnc ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;

void FUNC_2(CLzmaEnc *VAR_9)
{
  uint32_t VAR_10;
  VAR_9->state = 0;
  for (VAR_10 = 0 ; VAR_10 < VAR_1; VAR_10++)
    VAR_9->reps[VAR_10] = 0;

  FUNC_1(&VAR_9->rc);


  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  {
    uint32_t VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    {
      VAR_9->isMatch[VAR_10][VAR_11] = VAR_8;
      VAR_9->isRep0Long[VAR_10][VAR_11] = VAR_8;
    }
    VAR_9->isRep[VAR_10] = VAR_8;
    VAR_9->isRepG0[VAR_10] = VAR_8;
    VAR_9->isRepG1[VAR_10] = VAR_8;
    VAR_9->isRepG2[VAR_10] = VAR_8;
  }

  {
    uint32_t VAR_12 = (uint32_t)0x300 << (VAR_9->lp + VAR_9->lc);
    CLzmaProb *VAR_13 = VAR_9->litProbs;
    for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
      VAR_13[VAR_10] = VAR_8;
  }

  {
    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
    {
      CLzmaProb *VAR_14 = VAR_9->posSlotEncoder[VAR_10];
      uint32_t VAR_15;
      for (VAR_15 = 0; VAR_15 < (1 << VAR_6); VAR_15++)
        VAR_14[VAR_15] = VAR_8;
    }
  }
  {
    for (VAR_10 = 0; VAR_10 < VAR_4 - VAR_2; VAR_10++)
      VAR_9->posEncoders[VAR_10] = VAR_8;
  }

  FUNC_0(&VAR_9->lenEnc.p);
  FUNC_0(&VAR_9->repLenEnc.p);

  for (VAR_10 = 0; VAR_10 < (1 << VAR_3); VAR_10++)
    VAR_9->posAlignEncoder[VAR_10] = VAR_8;

  VAR_9->optimumEndIndex = 0;
  VAR_9->optimumCurrentIndex = 0;
  VAR_9->additionalOffset = 0;

  VAR_9->pbMask = (1 << VAR_9->pb) - 1;
  VAR_9->lpMask = (1 << VAR_9->lp) - 1;
}
