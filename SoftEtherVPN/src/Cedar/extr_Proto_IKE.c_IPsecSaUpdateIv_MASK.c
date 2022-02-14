
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ Iv; int IsIvExisting; TYPE_1__* IkeSa; } ;
struct TYPE_4__ {scalar_t__ BlockSize; } ;
typedef TYPE_2__ IPSECSA ;


 int FUNC_0 (scalar_t__,void*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(IPSECSA *VAR_0, void *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Iv, VAR_1, FUNC_1(VAR_0->IkeSa->BlockSize, VAR_2));

 if (VAR_2 < VAR_0->IkeSa->BlockSize)
 {
  FUNC_2(VAR_0->Iv + VAR_0->IkeSa->BlockSize, VAR_0->IkeSa->BlockSize - VAR_2);
 }

 VAR_0->IsIvExisting = 1;
}
