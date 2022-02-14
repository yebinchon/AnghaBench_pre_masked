
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ArpTable; } ;
struct TYPE_7__ {int Ip; } ;
typedef TYPE_1__ IPC_ARP ;
typedef TYPE_2__ IPC ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;

IPC_ARP *FUNC_2(IPC *VAR_0, IP *VAR_1)
{
 IPC_ARP VAR_2;
 IPC_ARP *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(&VAR_2.Ip, VAR_1, sizeof(IP));

 VAR_3 = FUNC_1(VAR_0->ArpTable, &VAR_2);

 return VAR_3;
}
