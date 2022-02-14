
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*,char*) ;

UINT FUNC_2(char *VAR_9)
{
 UINT VAR_10 = VAR_0;
 if (VAR_9 == ((void*)0) || FUNC_0(VAR_9))
 {
  return VAR_0;
 }

 if (FUNC_1("tcpconn", VAR_9))
 {
  VAR_10 = VAR_7;
 }
 else if (FUNC_1("tcpdata", VAR_9))
 {
  VAR_10 = VAR_6;
 }
 else if (FUNC_1("dhcp", VAR_9))
 {
  VAR_10 = VAR_2;
 }
 else if (FUNC_1("udp", VAR_9))
 {
  VAR_10 = VAR_8;
 }
 else if (FUNC_1("icmp", VAR_9))
 {
  VAR_10 = VAR_4;
 }
 else if (FUNC_1("ip", VAR_9))
 {
  VAR_10 = VAR_5;
 }
 else if (FUNC_1("arp", VAR_9))
 {
  VAR_10 = VAR_1;
 }
 else if (FUNC_1("ethernet", VAR_9))
 {
  VAR_10 = VAR_3;
 }

 return VAR_10;
}
