
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_6__ {int * SpiList; int ProtocolId; } ;
struct TYPE_7__ {TYPE_1__ Delete; } ;
struct TYPE_8__ {TYPE_2__ Payload; } ;
typedef int LIST ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

IKE_PACKET_PAYLOAD *FUNC_1(UCHAR VAR_1, LIST *VAR_2)
{
 IKE_PACKET_PAYLOAD *VAR_3;
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0);
 VAR_3->Payload.Delete.ProtocolId = VAR_1;
 VAR_3->Payload.Delete.SpiList = VAR_2;

 return VAR_3;
}
