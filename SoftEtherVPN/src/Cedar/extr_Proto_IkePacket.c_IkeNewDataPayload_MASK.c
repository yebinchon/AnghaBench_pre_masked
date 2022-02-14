
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Data; } ;
struct TYPE_7__ {TYPE_1__ GeneralData; } ;
struct TYPE_8__ {TYPE_2__ Payload; } ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;

IKE_PACKET_PAYLOAD *FUNC_2(UCHAR VAR_0, void *VAR_1, UINT VAR_2)
{
 IKE_PACKET_PAYLOAD *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0);
 VAR_3->Payload.GeneralData.Data = FUNC_1(VAR_1, VAR_2);

 return VAR_3;
}
