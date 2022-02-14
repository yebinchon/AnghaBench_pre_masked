
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* Free ) (TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef scalar_t__ CLzmaEncHandle ;
typedef int CLzmaEnc ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

void FUNC_2(CLzmaEncHandle VAR_0, ISzAlloc *VAR_1, ISzAlloc *VAR_2)
{
  FUNC_0((CLzmaEnc *)VAR_0, VAR_1, VAR_2);
  VAR_1->Free(VAR_1, VAR_0);
}
