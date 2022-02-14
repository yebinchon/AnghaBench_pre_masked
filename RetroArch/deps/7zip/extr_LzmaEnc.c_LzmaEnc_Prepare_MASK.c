
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * outStream; } ;
struct TYPE_5__ {int * stream; } ;
struct TYPE_7__ {int needInit; TYPE_2__ rc; TYPE_1__ matchFinderBase; } ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_3__ CLzmaEnc ;


 int FUNC_0 (TYPE_3__*,int ,int *,int *) ;

__attribute__((used)) static SRes FUNC_1(CLzmaEncHandle VAR_0, ISeqOutStream *VAR_1, ISeqInStream *VAR_2,
    ISzAlloc *VAR_3, ISzAlloc *VAR_4)
{
  CLzmaEnc *VAR_5 = (CLzmaEnc *)VAR_0;
  VAR_5->matchFinderBase.stream = VAR_2;
  VAR_5->needInit = 1;
  VAR_5->rc.outStream = VAR_1;
  return FUNC_0(VAR_5, 0, VAR_3, VAR_4);
}
