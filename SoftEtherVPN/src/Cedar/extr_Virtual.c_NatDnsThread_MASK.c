
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_4__ {int DnsOk; int DnsGetIpFromHost; int DnsFinished; TYPE_1__* v; int DnsResponseHostName; int DnsTargetHostName; int DnsResponseIp; } ;
struct TYPE_3__ {int SockEvent; } ;
typedef int THREAD ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(THREAD *VAR_0, void *VAR_1)
{
 NAT_ENTRY *VAR_2;
 IP VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }
 VAR_2 = (NAT_ENTRY *)VAR_1;


 FUNC_6(VAR_0);


 if (FUNC_3(VAR_2->DnsTargetHostName, ".in-addr.arpa") == 0)
 {

  if (FUNC_5(&VAR_3, VAR_2->DnsTargetHostName))
  {

   FUNC_1(&VAR_2->DnsResponseIp, &VAR_3, sizeof(IP));
   VAR_2->DnsOk = 1;
  }
 }
 else
 {

  IP VAR_4;
  VAR_2->DnsGetIpFromHost = 1;

  if (FUNC_0(&VAR_4, VAR_2->DnsTargetHostName))
  {

   char VAR_5[256];
   if (FUNC_4(VAR_5, sizeof(VAR_5), &VAR_4))
   {

    VAR_2->DnsResponseHostName = FUNC_2(VAR_5);
    VAR_2->DnsOk = 1;
   }
  }
 }


 VAR_2->DnsFinished = 1;

 FUNC_7(VAR_2->v->SockEvent);
}
