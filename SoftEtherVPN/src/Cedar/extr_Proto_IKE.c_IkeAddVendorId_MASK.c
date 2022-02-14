
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Size; int Buf; } ;
struct TYPE_6__ {int PayloadList; } ;
typedef int IKE_PACKET_PAYLOAD ;
typedef TYPE_1__ IKE_PACKET ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int * FUNC_2 (int ,int ,int ) ;
 TYPE_2__* FUNC_3 (char*) ;

void FUNC_4(IKE_PACKET *VAR_1, char *VAR_2)
{
 BUF *VAR_3;
 IKE_PACKET_PAYLOAD *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_3->Buf, VAR_3->Size);

 FUNC_0(VAR_1->PayloadList, VAR_4);

 FUNC_1(VAR_3);
}
