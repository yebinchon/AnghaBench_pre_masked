
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct netsocket {int conn; } ;
struct ip_addr {int addr; } ;
typedef int socklen_t ;
typedef int s32 ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 struct netsocket* FUNC_1 (int) ;
 int FUNC_2 (int ,struct ip_addr*) ;
 scalar_t__ FUNC_3 (int ,struct ip_addr*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

s32 FUNC_6(s32 VAR_5,struct sockaddr *VAR_6,socklen_t VAR_7)
{
 struct netsocket *VAR_8;
 err_t VAR_9;

 VAR_8 = FUNC_1(VAR_5);
 if(!VAR_8) return -VAR_2;

 if(((struct sockaddr_in*)VAR_6)->sin_family==VAR_0) {
     FUNC_0(VAR_4, ("net_connect(%d, AF_UNSPEC)\n", VAR_5));
  VAR_9 = FUNC_4(VAR_8->conn);
 } else {
  struct ip_addr VAR_10;
  u16 VAR_11;

  VAR_10.addr = ((struct sockaddr_in*)VAR_6)->sin_addr.s_addr;
  VAR_11 = ((struct sockaddr_in*)VAR_6)->sin_port;

  FUNC_0(VAR_4, ("net_connect(%d, addr=", VAR_5));
  FUNC_2(VAR_4, &VAR_10);
  FUNC_0(VAR_4, (" port=%u)\n", FUNC_5(VAR_11)));

  VAR_9 = FUNC_3(VAR_8->conn,&VAR_10,FUNC_5(VAR_11));
 }
 if(VAR_9!=VAR_3) {
     FUNC_0(VAR_4, ("net_connect(%d) failed, err=%d\n", VAR_5, VAR_9));
  return -1;
 }

 FUNC_0(VAR_4, ("net_connect(%d) succeeded\n", VAR_5));
 return -VAR_1;
}
