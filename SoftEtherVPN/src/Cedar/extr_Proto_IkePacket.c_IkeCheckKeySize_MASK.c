
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__* KeySizes; } ;
typedef TYPE_1__ IKE_CRYPTO ;



bool FUNC_0(IKE_CRYPTO *VAR_0, UINT VAR_1)
{
 bool VAR_2 = 0;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }

 for (VAR_3 = 0;VAR_3 < sizeof(VAR_0->KeySizes) / sizeof(UINT);VAR_3++)
 {
  if (VAR_0->KeySizes[VAR_3] == VAR_1)
  {
   VAR_2 = 1;
   break;
  }
 }

 return VAR_2;
}
