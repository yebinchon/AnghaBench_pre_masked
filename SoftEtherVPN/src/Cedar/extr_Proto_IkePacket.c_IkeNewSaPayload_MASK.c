
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * PayloadList; } ;
struct TYPE_7__ {TYPE_1__ Sa; } ;
struct TYPE_8__ {TYPE_2__ Payload; } ;
typedef int LIST ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

IKE_PACKET_PAYLOAD *FUNC_1(LIST *VAR_1)
{
 IKE_PACKET_PAYLOAD *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->Payload.Sa.PayloadList = VAR_1;

 return VAR_2;
}
