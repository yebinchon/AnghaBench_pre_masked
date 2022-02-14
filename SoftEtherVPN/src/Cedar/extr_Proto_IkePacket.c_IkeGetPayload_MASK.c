
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ PayloadType; } ;
typedef int LIST ;
typedef TYPE_1__ IKE_PACKET_PAYLOAD ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

IKE_PACKET_PAYLOAD *FUNC_2(LIST *VAR_0, UINT VAR_1, UINT VAR_2)
{
 UINT VAR_3, VAR_4;
 IKE_PACKET_PAYLOAD *VAR_5 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = 0;

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0);VAR_3++)
 {
  IKE_PACKET_PAYLOAD *VAR_6 = FUNC_0(VAR_0, VAR_3);

  if (VAR_6->PayloadType == VAR_1)
  {
   if (VAR_4 == VAR_2)
   {
    VAR_5 = VAR_6;
    break;
   }

   VAR_4++;
  }
 }

 return VAR_5;
}
