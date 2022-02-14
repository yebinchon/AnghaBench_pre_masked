
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Iv; scalar_t__ BlockSize; int IsIvExisting; } ;
typedef TYPE_1__ IKE_SA ;


 int FUNC_0 (scalar_t__,void*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(IKE_SA *VAR_0, void *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Iv, VAR_1, FUNC_1(VAR_0->BlockSize, VAR_2));

 if (VAR_2 < VAR_0->BlockSize)
 {
  FUNC_2(VAR_0->Iv + VAR_0->BlockSize, VAR_0->BlockSize - VAR_2);
 }

 VAR_0->IsIvExisting = 1;
}
