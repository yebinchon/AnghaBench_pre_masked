
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int req ;
typedef int UINT ;
struct TYPE_5__ {int ServerAddress; int Opcode; } ;
typedef int IPC ;
typedef int IP ;
typedef TYPE_1__ DHCP_OPTION_LIST ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(IPC *VAR_1, IP *VAR_2)
{
 DHCP_OPTION_LIST VAR_3;
 UINT VAR_4 = FUNC_4();

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(&VAR_3, sizeof(VAR_3));
 VAR_3.Opcode = VAR_0;
 VAR_3.ServerAddress = FUNC_3(VAR_2);
 FUNC_1(VAR_1, &VAR_3);

 FUNC_0(FUNC_2(VAR_1, ((void*)0), VAR_4, &VAR_3, 0, 0, ((void*)0)));
}
