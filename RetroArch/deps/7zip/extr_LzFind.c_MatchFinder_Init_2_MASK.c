
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t* hash; size_t hashSizeSum; scalar_t__ streamEndWasReached; int result; int cyclicBufferSize; int streamPos; int pos; int bufferBase; int buffer; scalar_t__ cyclicBufferPos; } ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;

void FUNC_2(CMatchFinder *VAR_2, int VAR_3)
{
  uint32_t VAR_4;
  uint32_t *VAR_5 = VAR_2->hash;
  uint32_t VAR_6 = VAR_2->hashSizeSum;
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
    VAR_5[VAR_4] = VAR_1;

  VAR_2->cyclicBufferPos = 0;
  VAR_2->buffer = VAR_2->bufferBase;
  VAR_2->pos = VAR_2->streamPos = VAR_2->cyclicBufferSize;
  VAR_2->result = VAR_0;
  VAR_2->streamEndWasReached = 0;

  if (VAR_3)
    FUNC_0(VAR_2);

  FUNC_1(VAR_2);
}
