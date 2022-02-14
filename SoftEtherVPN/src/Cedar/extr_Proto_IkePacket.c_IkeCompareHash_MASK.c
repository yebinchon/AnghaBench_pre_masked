
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {TYPE_1__* Data; } ;
struct TYPE_7__ {TYPE_3__ Hash; } ;
struct TYPE_9__ {scalar_t__ PayloadType; TYPE_2__ Payload; } ;
struct TYPE_6__ {scalar_t__ Size; int Buf; } ;
typedef TYPE_4__ IKE_PACKET_PAYLOAD ;


 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;

bool FUNC_1(IKE_PACKET_PAYLOAD *VAR_1, void *VAR_2, UINT VAR_3)
{


 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return 0;
 }

 if (VAR_1->PayloadType != VAR_0)
 {
  return 0;
 }

 if (VAR_1->Payload.Hash.Data == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->Payload.Hash.Data->Size != VAR_3)
 {
  return 0;
 }






 if (FUNC_0(VAR_1->Payload.Hash.Data->Buf, VAR_2, VAR_3) != 0)
 {
  return 0;
 }

 return 1;
}
