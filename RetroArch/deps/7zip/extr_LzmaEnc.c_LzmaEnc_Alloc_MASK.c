
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_21__ {scalar_t__ btMode; unsigned char bigHash; } ;
struct TYPE_18__ {int * litProbs; } ;
struct TYPE_20__ {int mtMode; unsigned int lc; unsigned int lp; unsigned int lclp; scalar_t__ dictSize; int matchFinder; TYPE_7__ matchFinderBase; TYPE_7__* matchFinderObj; int numFastBytes; TYPE_7__ matchFinderMt; TYPE_1__ saveState; int * litProbs; int fastMode; scalar_t__ multiThread; int rc; } ;
struct TYPE_19__ {scalar_t__ (* Alloc ) (TYPE_2__*,unsigned int) ;} ;
typedef int SRes ;
typedef TYPE_2__ ISzAlloc ;
typedef int CLzmaProb ;
typedef TYPE_3__ CLzmaEnc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_7__*,unsigned int,unsigned int,int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_7__*,int *) ;
 int FUNC_3 (TYPE_7__*,unsigned int,unsigned int,int ,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static SRes FUNC_9(CLzmaEnc *VAR_5, uint32_t VAR_6, ISzAlloc *VAR_7, ISzAlloc *VAR_8)
{
  uint32_t VAR_9 = VAR_4;
  if (!FUNC_6(&VAR_5->rc, VAR_7))
    return VAR_1;


  VAR_5->mtMode = (VAR_5->multiThread && !VAR_5->fastMode && (VAR_5->matchFinderBase.btMode != 0));


  {
    unsigned VAR_10 = VAR_5->lc + VAR_5->lp;
    if (!VAR_5->litProbs || !VAR_5->saveState.litProbs || VAR_5->lclp != VAR_10)
    {
      FUNC_0(VAR_5, VAR_7);
      VAR_5->litProbs = (CLzmaProb *)VAR_7->Alloc(VAR_7, ((uint32_t)0x300 << VAR_10) * sizeof(CLzmaProb));
      VAR_5->saveState.litProbs = (CLzmaProb *)VAR_7->Alloc(VAR_7, ((uint32_t)0x300 << VAR_10) * sizeof(CLzmaProb));
      if (!VAR_5->litProbs || !VAR_5->saveState.litProbs)
      {
        FUNC_0(VAR_5, VAR_7);
        return VAR_1;
      }
      VAR_5->lclp = VAR_10;
    }
  }

  VAR_5->matchFinderBase.bigHash = (unsigned char)(VAR_5->dictSize > VAR_3 ? 1 : 0);

  if (VAR_9 + VAR_5->dictSize < VAR_6)
    VAR_9 = VAR_6 - VAR_5->dictSize;


  if (VAR_5->mtMode)
  {
    FUNC_5(FUNC_1(&VAR_5->matchFinderMt, VAR_5->dictSize, VAR_9, VAR_5->numFastBytes, VAR_0, VAR_8));
    VAR_5->matchFinderObj = &VAR_5->matchFinderMt;
    FUNC_2(&VAR_5->matchFinderMt, &VAR_5->matchFinder);
  }
  else

  {
    if (!FUNC_3(&VAR_5->matchFinderBase, VAR_5->dictSize, VAR_9, VAR_5->numFastBytes, VAR_0, VAR_8))
      return VAR_1;
    VAR_5->matchFinderObj = &VAR_5->matchFinderBase;
    FUNC_4(&VAR_5->matchFinderBase, &VAR_5->matchFinder);
  }

  return VAR_2;
}
