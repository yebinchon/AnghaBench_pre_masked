
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct netsocket {int conn; } ;
struct ip_addr {int addr; } ;
typedef int socklen_t ;
typedef int s32 ;
typedef scalar_t__ err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct netsocket* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct ip_addr*,int ) ;
 int FUNC_2 (int ) ;

s32 FUNC_3(s32 VAR_2,struct sockaddr *VAR_3,socklen_t VAR_4)
{
 struct netsocket *VAR_5;
 struct ip_addr VAR_6;
 u16 VAR_7;
 err_t VAR_8;

 VAR_5 = FUNC_0(VAR_2);
 if(!VAR_5) return -VAR_0;

 VAR_6.addr = ((struct sockaddr_in*)VAR_3)->sin_addr.s_addr;
 VAR_7 = ((struct sockaddr_in*)VAR_3)->sin_port;

 VAR_8 = FUNC_1(VAR_5->conn,&VAR_6,FUNC_2(VAR_7));
 if(VAR_8!=VAR_1) return -1;

 return 0;
}
