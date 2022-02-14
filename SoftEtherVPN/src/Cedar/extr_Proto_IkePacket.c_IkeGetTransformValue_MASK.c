
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int ValueList; } ;
struct TYPE_5__ {scalar_t__ Type; scalar_t__ Value; } ;
typedef TYPE_1__ IKE_PACKET_TRANSFORM_VALUE ;
typedef TYPE_2__ IKE_PACKET_TRANSFORM_PAYLOAD ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

UINT FUNC_2(IKE_PACKET_TRANSFORM_PAYLOAD *VAR_0, UINT VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = 0;

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->ValueList);VAR_3++)
 {
  IKE_PACKET_TRANSFORM_VALUE *VAR_5 = FUNC_0(VAR_0->ValueList, VAR_3);

  if (VAR_5->Type == VAR_1)
  {
   if (VAR_4 == VAR_2)
   {
    return VAR_5->Value;
   }

   VAR_4++;
  }
 }

 return 0;
}
