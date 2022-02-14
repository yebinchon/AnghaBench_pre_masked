
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int Size; int Buf; } ;
struct TYPE_9__ {int DummyMark; int DummyDestIP; int DummySrcIp; } ;
typedef int PRAND ;
typedef TYPE_1__ IPTABLES_ENTRY ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 () ;
 int * FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_2__*,void*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,char*) ;

void FUNC_9(void *VAR_1, IPTABLES_ENTRY *VAR_2, UINT VAR_3)
{
 PRAND *VAR_4;
 BUF *VAR_5;
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_4();
 FUNC_7(VAR_5, VAR_3);
 FUNC_6(VAR_5, VAR_1, VAR_0);
 FUNC_8(VAR_5, "20151002");

 VAR_4 = FUNC_5(VAR_5->Buf, VAR_5->Size);
 FUNC_0(VAR_5);

 FUNC_2(VAR_4, &VAR_2->DummySrcIp);
 FUNC_2(VAR_4, &VAR_2->DummyDestIP);
 VAR_2->DummyMark = FUNC_3(VAR_4);

 FUNC_1(VAR_4);
}
