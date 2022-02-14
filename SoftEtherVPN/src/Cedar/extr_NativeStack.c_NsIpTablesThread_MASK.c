
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int exe_name ;
typedef int UINT ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int IpTablesInitOk; int IpTablesHaltEvent; scalar_t__ IpTablesHalt; int MacAddress; } ;
typedef int THREAD ;
typedef TYPE_1__ NATIVE_STACK ;
typedef int IPTABLES_STATE ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,char*) ;

void FUNC_11(THREAD *VAR_3, void *VAR_4)
{
 IPTABLES_STATE *VAR_5;
 NATIVE_STACK *VAR_6;
 UINT VAR_7 = 0;
 BUF *VAR_8;
 char VAR_9[VAR_0];
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_6 = (NATIVE_STACK *)VAR_4;

 VAR_8 = FUNC_5();

 FUNC_9(VAR_8, VAR_6->MacAddress, 6);

 FUNC_2(VAR_9, sizeof(VAR_9));
 FUNC_10(VAR_8, VAR_9);

 VAR_5 = FUNC_7(VAR_8->Buf, VAR_8->Size);

 FUNC_1(VAR_8);

 if (VAR_5 == ((void*)0))
 {
  FUNC_6(VAR_3);
  return;
 }

 VAR_6->IpTablesInitOk = 1;
 FUNC_6(VAR_3);

 while (1)
 {
  UINT VAR_10;

  if (VAR_6->IpTablesHalt)
  {
   break;
  }

  if (FUNC_4(VAR_5))
  {
   VAR_7 = 0;
  }

  VAR_7++;
  VAR_10 = VAR_1 * VAR_7;
  VAR_10 = FUNC_3(VAR_10, VAR_2);


  FUNC_8(VAR_6->IpTablesHaltEvent, VAR_10);
 }

 FUNC_0(VAR_5);
}
