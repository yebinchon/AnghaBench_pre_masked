
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__* counters; int p; } ;
typedef int CRangeEnc ;
typedef TYPE_1__ CLenPriceEnc ;


 int FUNC_0 (int *,int *,size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t const*) ;

__attribute__((used)) static void FUNC_2(CLenPriceEnc *VAR_0, CRangeEnc *VAR_1, uint32_t VAR_2, uint32_t VAR_3, bool VAR_4, const uint32_t *VAR_5)
{
  FUNC_0(&VAR_0->p, VAR_1, VAR_2, VAR_3);
  if (VAR_4)
    if (--VAR_0->counters[VAR_3] == 0)
      FUNC_1(VAR_0, VAR_3, VAR_5);
}
