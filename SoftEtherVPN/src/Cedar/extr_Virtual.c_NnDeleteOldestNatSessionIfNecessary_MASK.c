
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int SecureNAT_MaxTcpSessionsPerIp; int SecureNAT_MaxUdpSessionsPerIp; int SecureNAT_MaxIcmpSessionsPerIp; } ;
struct TYPE_8__ {TYPE_1__* v; } ;
struct TYPE_7__ {TYPE_3__* HubOption; } ;
typedef TYPE_2__ NATIVE_NAT ;
typedef TYPE_3__ HUB_OPTION ;





 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

void FUNC_2(NATIVE_NAT *VAR_0, UINT VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 UINT VAR_4 = 0;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->v->HubOption != ((void*)0))
 {
  HUB_OPTION *VAR_5 = VAR_0->v->HubOption;

  switch (VAR_2)
  {
  case 129:
   VAR_4 = VAR_5->SecureNAT_MaxTcpSessionsPerIp;
   break;

  case 128:
   VAR_4 = VAR_5->SecureNAT_MaxUdpSessionsPerIp;
   break;

  case 130:
   VAR_4 = VAR_5->SecureNAT_MaxIcmpSessionsPerIp;
   break;
  }
 }

 if (VAR_4 == 0)
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_3 >= VAR_4)
 {
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
