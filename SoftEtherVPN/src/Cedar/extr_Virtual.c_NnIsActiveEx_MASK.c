
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* NativeNat; } ;
typedef TYPE_2__ VH ;
struct TYPE_4__ {scalar_t__ PublicIP; int Active; int IsRawIpMode; } ;



bool FUNC_0(VH *VAR_0, bool *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->NativeNat == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->NativeNat->PublicIP == 0)
 {
  return 0;
 }

 if (VAR_0->NativeNat->Active)
 {
  if (VAR_1 != ((void*)0))
  {
   *VAR_1 = VAR_0->NativeNat->IsRawIpMode;
  }
 }

 return VAR_0->NativeNat->Active;
}
