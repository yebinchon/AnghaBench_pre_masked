
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int finished; int pbMask; int rc; scalar_t__ writeEndMark; } ;
typedef int SRes ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_0, uint32_t VAR_1)
{

  VAR_0->finished = 1;
  if (VAR_0->writeEndMark)
    FUNC_3(VAR_0, VAR_1 & VAR_0->pbMask);
  FUNC_1(&VAR_0->rc);
  FUNC_2(&VAR_0->rc);
  return FUNC_0(VAR_0);
}
