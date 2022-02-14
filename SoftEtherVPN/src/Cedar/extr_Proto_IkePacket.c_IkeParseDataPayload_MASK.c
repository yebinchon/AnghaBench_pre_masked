
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Size; int Buf; } ;
struct TYPE_5__ {int Data; } ;
typedef TYPE_1__ IKE_PACKET_DATA_PAYLOAD ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int ,int ) ;

bool FUNC_1(IKE_PACKET_DATA_PAYLOAD *VAR_0, BUF *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_0->Data = FUNC_0(VAR_1->Buf, VAR_1->Size);

 return 1;
}
