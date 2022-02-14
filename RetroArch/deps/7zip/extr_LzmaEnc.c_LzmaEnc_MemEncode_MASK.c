
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* outStream; } ;
struct TYPE_9__ {int writeEndMark; size_t nowPos64; TYPE_1__ rc; } ;
struct TYPE_7__ {int Write; } ;
struct TYPE_8__ {unsigned char* data; size_t rem; int overflow; TYPE_2__ funcTable; } ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef int ICompressProgress ;
typedef TYPE_3__ CSeqOutStreamBuf ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_4__ CLzmaEnc ;


 scalar_t__ FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned char const*,size_t,int ,int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

SRes FUNC_2(CLzmaEncHandle VAR_4, unsigned char *VAR_5, size_t *VAR_6, const unsigned char *VAR_7, size_t VAR_8,
    int VAR_9, ICompressProgress *VAR_10, ISzAlloc *VAR_11, ISzAlloc *VAR_12)
{
  SRes VAR_13;
  CLzmaEnc *VAR_14 = (CLzmaEnc *)VAR_4;

  CSeqOutStreamBuf VAR_15;

  VAR_15.funcTable.Write = VAR_0;
  VAR_15.data = VAR_5;
  VAR_15.rem = *VAR_6;
  VAR_15.overflow = 0;

  VAR_14->writeEndMark = VAR_9;
  VAR_14->rc.outStream = &VAR_15.funcTable;

  VAR_13 = FUNC_1(VAR_4, VAR_7, VAR_8, 0, VAR_11, VAR_12);

  if (VAR_13 == VAR_3)
  {
    VAR_13 = FUNC_0(VAR_14, VAR_10);
    if (VAR_13 == VAR_3 && VAR_14->nowPos64 != VAR_8)
      VAR_13 = VAR_1;
  }

  *VAR_6 -= VAR_15.rem;
  if (VAR_15.overflow)
    return VAR_2;
  return VAR_13;
}
