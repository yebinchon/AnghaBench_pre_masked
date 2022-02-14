
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Data; } ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef TYPE_2__ IKE_PACKET_DATA_PAYLOAD ;
typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;

BUF *FUNC_2(IKE_PACKET_DATA_PAYLOAD *VAR_0)
{
 BUF *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0();
 FUNC_1(VAR_1, VAR_0->Data->Buf, VAR_0->Data->Size);

 return VAR_1;
}
