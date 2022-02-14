
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int dictSize; int distTableSize; int finished; scalar_t__ nowPos64; int result; } ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (TYPE_1__*,int,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_2, uint32_t VAR_3, ISzAlloc *VAR_4, ISzAlloc *VAR_5)
{
  uint32_t VAR_6;
  for (VAR_6 = 0; VAR_6 < (uint32_t)VAR_1; VAR_6++)
    if (VAR_2->dictSize <= ((uint32_t)1 << VAR_6))
      break;
  VAR_2->distTableSize = VAR_6 * 2;

  VAR_2->finished = 0;
  VAR_2->result = VAR_0;
  FUNC_3(FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5));
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
  VAR_2->nowPos64 = 0;
  return VAR_0;
}
