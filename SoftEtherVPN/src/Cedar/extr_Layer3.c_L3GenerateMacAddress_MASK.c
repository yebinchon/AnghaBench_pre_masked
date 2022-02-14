
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_10__ {int Size; int Buf; } ;
struct TYPE_9__ {int* MacAddress; int IpAddress; int * HubName; TYPE_1__* Switch; } ;
struct TYPE_8__ {int * Name; } ;
typedef TYPE_2__ L3IF ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int*) ;
 TYPE_3__* FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int *,int) ;

void FUNC_7(L3IF *VAR_1)
{
 BUF *VAR_2;
 UCHAR VAR_3[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_3();
 FUNC_6(VAR_2, VAR_1->Switch->Name, FUNC_5(VAR_1->Switch->Name));
 FUNC_6(VAR_2, VAR_1->HubName, FUNC_5(VAR_1->HubName));
 FUNC_6(VAR_2, &VAR_1->IpAddress, sizeof(VAR_1->IpAddress));

 FUNC_2(VAR_1->MacAddress);
 FUNC_4(VAR_3, VAR_2->Buf, VAR_2->Size);
 FUNC_0(VAR_1->MacAddress + 2, VAR_3, 4);
 VAR_1->MacAddress[1] = 0xA3;
 FUNC_1(VAR_2);
}
