
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
struct TYPE_3__ {scalar_t__ IsIPv6; int Inited; int Now; int YourPort; int YourIp2; int YourIp; int * YourKey; int YourCookie; int MyCookie; } ;
typedef TYPE_1__ UDP_ACCEL ;
typedef int UCHAR ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,char*,int ,int ,int ) ;
 int FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;

bool FUNC_5(UDP_ACCEL *VAR_2, UCHAR *VAR_3, IP *VAR_4, UINT VAR_5, IP *VAR_6)
{
 char VAR_7[VAR_0];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_7, sizeof(VAR_7), VAR_4);
 FUNC_1("UdpAccelInitServer: client_ip=%s, client_port=%u, server_cookie=%u, client_cookie=%u\n", VAR_7, VAR_5,
  VAR_2->MyCookie, VAR_2->YourCookie);

 if (FUNC_3(VAR_4) != VAR_2->IsIPv6)
 {
  return 0;
 }

 FUNC_0(VAR_2->YourKey, VAR_3, VAR_1);

 FUNC_0(&VAR_2->YourIp, VAR_4, sizeof(IP));
 FUNC_0(&VAR_2->YourIp2, VAR_6, sizeof(IP));
 VAR_2->YourPort = VAR_5;

 VAR_2->Now = FUNC_4();

 VAR_2->Inited = 1;

 return 1;
}
