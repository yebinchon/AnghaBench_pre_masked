
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ PayloadType; } ;
typedef int LIST ;
typedef TYPE_1__ IKE_PACKET_PAYLOAD ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

UINT FUNC_2(LIST *VAR_0, UINT VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = 0;

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  IKE_PACKET_PAYLOAD *VAR_4 = FUNC_0(VAR_0, VAR_2);

  if (VAR_4->PayloadType == VAR_1)
  {
   VAR_3++;
  }
 }

 return VAR_3;
}
