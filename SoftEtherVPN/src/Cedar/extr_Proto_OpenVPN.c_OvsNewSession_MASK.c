
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int server_ip_str ;
typedef int client_ip_str ;
typedef void* UINT ;
struct TYPE_13__ {int NextSessionId; int Now; TYPE_1__* Cedar; int SessionList; } ;
struct TYPE_12__ {int Id; int CreatedTick; TYPE_3__* Server; int ServerSessionId; void* Protocol; int LastCommTick; int ObfuscationMode; void* ServerPort; int ServerIp; void* ClientPort; int ClientIp; } ;
struct TYPE_11__ {scalar_t__ OpenVPNObfuscation; } ;
typedef TYPE_2__ OPENVPN_SESSION ;
typedef TYPE_3__ OPENVPN_SERVER ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,char*,void*,char*,void*,void*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int *,char*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 (int) ;

OPENVPN_SESSION *FUNC_8(OPENVPN_SERVER *VAR_6, IP *VAR_7, UINT VAR_8, IP *VAR_9, UINT VAR_10, UINT VAR_11)
{
 OPENVPN_SESSION *VAR_12;
 char VAR_13[VAR_1];
 char VAR_14[VAR_1];

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == 0 || VAR_9 == ((void*)0) || VAR_10 == 0)
 {
  return ((void*)0);
 }


 if (FUNC_4(VAR_6, VAR_9) > VAR_4)
 {

  return ((void*)0);
 }

 if (FUNC_3(VAR_6->SessionList) > VAR_3)
 {

  return ((void*)0);
 }

 VAR_12 = FUNC_7(sizeof(OPENVPN_SESSION));

 VAR_12->Server = VAR_6;

 FUNC_0(&VAR_12->ClientIp, VAR_9, sizeof(IP));
 VAR_12->ClientPort = VAR_10;

 FUNC_0(&VAR_12->ServerIp, VAR_7, sizeof(IP));
 VAR_12->ServerPort = VAR_8;

 VAR_12->ObfuscationMode = VAR_6->Cedar->OpenVPNObfuscation ? VAR_0 : VAR_5;

 VAR_12->LastCommTick = VAR_6->Now;

 VAR_12->Protocol = VAR_11;

 VAR_12->ServerSessionId = FUNC_6(VAR_12->Server);

 VAR_12->CreatedTick = VAR_6->Now;

 VAR_12->Id = VAR_6->NextSessionId;
 VAR_6->NextSessionId++;

 FUNC_2(VAR_13, sizeof(VAR_13), VAR_7);
 FUNC_2(VAR_14, sizeof(VAR_14), VAR_9);
 FUNC_1("OpenVPN New Session: %s:%u -> %s:%u Proto=%u\n", VAR_13, VAR_8,
  VAR_14, VAR_10, VAR_11);

 FUNC_5(VAR_6, VAR_12, ((void*)0), "LO_NEW_SESSION", (VAR_11 == VAR_2 ? "UDP" : "TCP"));

 return VAR_12;
}
