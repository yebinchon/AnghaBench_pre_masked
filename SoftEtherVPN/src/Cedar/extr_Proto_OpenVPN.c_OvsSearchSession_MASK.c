
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int SessionList; } ;
struct TYPE_7__ {scalar_t__ Protocol; scalar_t__ ServerPort; int ServerIp; scalar_t__ ClientPort; int ClientIp; } ;
typedef TYPE_1__ OPENVPN_SESSION ;
typedef TYPE_2__ OPENVPN_SERVER ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;

OPENVPN_SESSION *FUNC_2(OPENVPN_SERVER *VAR_0, IP *VAR_1, UINT VAR_2, IP *VAR_3, UINT VAR_4, UINT VAR_5)
{
 OPENVPN_SESSION *VAR_6;
 OPENVPN_SESSION VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return ((void*)0);
 }

 FUNC_0(&VAR_7.ClientIp, VAR_3, sizeof(IP));
 VAR_7.ClientPort = VAR_4;
 FUNC_0(&VAR_7.ServerIp, VAR_1, sizeof(IP));
 VAR_7.ServerPort = VAR_2;
 VAR_7.Protocol = VAR_5;

 VAR_6 = FUNC_1(VAR_0->SessionList, &VAR_7);

 return VAR_6;
}
