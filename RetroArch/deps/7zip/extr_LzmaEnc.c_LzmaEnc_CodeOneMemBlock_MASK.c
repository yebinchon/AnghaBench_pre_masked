
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {TYPE_1__* outStream; } ;
struct TYPE_10__ {int writeEndMark; int finished; scalar_t__ nowPos64; TYPE_4__ rc; int result; } ;
struct TYPE_8__ {int Write; } ;
struct TYPE_9__ {unsigned char* data; size_t rem; int overflow; TYPE_1__ funcTable; } ;
typedef int SRes ;
typedef TYPE_2__ CSeqOutStreamBuf ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_3__ CLzmaEnc ;


 int FUNC_0 (TYPE_3__*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;

SRes FUNC_4(CLzmaEncHandle VAR_3, bool VAR_4,
    unsigned char *VAR_5, size_t *VAR_6, uint32_t VAR_7, uint32_t *VAR_8)
{
  CLzmaEnc *VAR_9 = (CLzmaEnc *)VAR_3;
  uint64_t VAR_10;
  SRes VAR_11;
  CSeqOutStreamBuf VAR_12;

  VAR_12.funcTable.Write = VAR_0;
  VAR_12.data = VAR_5;
  VAR_12.rem = *VAR_6;
  VAR_12.overflow = 0;

  VAR_9->writeEndMark = 0;
  VAR_9->finished = 0;
  VAR_9->result = VAR_2;

  if (VAR_4)
    FUNC_1(VAR_9);
  FUNC_2(VAR_9);
  VAR_10 = VAR_9->nowPos64;
  FUNC_3(&VAR_9->rc);
  VAR_9->rc.outStream = &VAR_12.funcTable;

  VAR_11 = FUNC_0(VAR_9, 1, VAR_7, *VAR_8);

  *VAR_8 = (uint32_t)(VAR_9->nowPos64 - VAR_10);
  *VAR_6 -= VAR_12.rem;
  if (VAR_12.overflow)
    return VAR_1;

  return VAR_11;
}
