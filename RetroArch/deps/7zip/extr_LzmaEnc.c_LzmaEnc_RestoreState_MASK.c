
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int litProbs; int reps; int posAlignEncoder; int posEncoders; int isRepG2; int isRepG1; int isRepG0; int isRep; int * posSlotEncoder; int * isRep0Long; int * isMatch; int state; int repLenEnc; int lenEnc; } ;
struct TYPE_4__ {int lclp; int litProbs; int reps; int posAlignEncoder; int posEncoders; int isRepG2; int isRepG1; int isRepG0; int isRep; int * posSlotEncoder; int * isRep0Long; int * isMatch; int state; int repLenEnc; int lenEnc; TYPE_1__ saveState; } ;
typedef TYPE_1__ CSaveState ;
typedef int CLzmaProb ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_2__ CLzmaEnc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(CLzmaEncHandle VAR_2)
{
  CLzmaEnc *VAR_3 = (CLzmaEnc *)VAR_2;
  const CSaveState *VAR_4 = &VAR_3->saveState;
  int VAR_5;
  VAR_3->lenEnc = VAR_4->lenEnc;
  VAR_3->repLenEnc = VAR_4->repLenEnc;
  VAR_3->state = VAR_4->state;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  {
    FUNC_0(VAR_3->isMatch[VAR_5], VAR_4->isMatch[VAR_5], sizeof(VAR_4->isMatch[VAR_5]));
    FUNC_0(VAR_3->isRep0Long[VAR_5], VAR_4->isRep0Long[VAR_5], sizeof(VAR_4->isRep0Long[VAR_5]));
  }
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    FUNC_0(VAR_3->posSlotEncoder[VAR_5], VAR_4->posSlotEncoder[VAR_5], sizeof(VAR_4->posSlotEncoder[VAR_5]));
  FUNC_0(VAR_3->isRep, VAR_4->isRep, sizeof(VAR_4->isRep));
  FUNC_0(VAR_3->isRepG0, VAR_4->isRepG0, sizeof(VAR_4->isRepG0));
  FUNC_0(VAR_3->isRepG1, VAR_4->isRepG1, sizeof(VAR_4->isRepG1));
  FUNC_0(VAR_3->isRepG2, VAR_4->isRepG2, sizeof(VAR_4->isRepG2));
  FUNC_0(VAR_3->posEncoders, VAR_4->posEncoders, sizeof(VAR_4->posEncoders));
  FUNC_0(VAR_3->posAlignEncoder, VAR_4->posAlignEncoder, sizeof(VAR_4->posAlignEncoder));
  FUNC_0(VAR_3->reps, VAR_4->reps, sizeof(VAR_4->reps));
  FUNC_0(VAR_3->litProbs, VAR_4->litProbs, ((uint32_t)0x300 << VAR_3->lclp) * sizeof(CLzmaProb));
}
