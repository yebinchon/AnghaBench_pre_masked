
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* UCHAR ;
struct TYPE_6__ {int * ValueList; void* TransformId; void* Number; } ;
struct TYPE_7__ {TYPE_1__ Transform; } ;
struct TYPE_8__ {TYPE_2__ Payload; } ;
typedef int LIST ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

IKE_PACKET_PAYLOAD *FUNC_1(UCHAR VAR_1, UCHAR VAR_2, LIST *VAR_3)
{
 IKE_PACKET_PAYLOAD *VAR_4;
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_0(VAR_0);
 VAR_4->Payload.Transform.Number = VAR_1;
 VAR_4->Payload.Transform.TransformId = VAR_2;
 VAR_4->Payload.Transform.ValueList = VAR_3;

 return VAR_4;
}
