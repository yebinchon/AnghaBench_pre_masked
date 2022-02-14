
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct netsocket {int rcvevt; int conn; } ;
struct netconn {int socket; int callback; } ;
struct ip_addr {int addr; int member_0; } ;
typedef int socklen_t ;
typedef int sin ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct netconn*) ;
 int VAR_3 ;
 struct netsocket* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr*,struct sockaddr_in*,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 struct netconn* FUNC_8 (int ) ;
 int FUNC_9 (struct netconn*) ;
 int FUNC_10 (struct netconn*,struct ip_addr*,int *) ;
 int VAR_4 ;

s32 FUNC_11(s32 VAR_5,struct sockaddr *VAR_6,socklen_t *VAR_7)
{
 struct netsocket *VAR_8;
 struct netconn *VAR_9;
 struct ip_addr VAR_10 = {0};
 u16 VAR_11 = 0;
 s32 VAR_12;
 struct sockaddr_in VAR_13;

 FUNC_0(VAR_2, ("net_accept(%d)\n", VAR_5));

 VAR_8 = FUNC_4(VAR_5);
 if(!VAR_8) return -VAR_1;

 VAR_9 = FUNC_8(VAR_8->conn);
 FUNC_10(VAR_9,&VAR_10,&VAR_11);

 FUNC_7(&VAR_13,0,sizeof(VAR_13));
 VAR_13.sin_family = VAR_0;
 VAR_13.sin_port = FUNC_5(VAR_11);
 VAR_13.sin_addr.s_addr = VAR_10.addr;

 if(*VAR_7>sizeof(VAR_13))
  *VAR_7 = sizeof(VAR_13);
 FUNC_6(VAR_6,&VAR_13,*VAR_7);

 VAR_12 = FUNC_3(VAR_9);
 if(VAR_12==-1) {
  FUNC_9(VAR_9);
  return -1;
 }

 VAR_9->callback = VAR_3;
 VAR_8 = FUNC_4(VAR_12);

 FUNC_2(VAR_4);
 VAR_8->rcvevt += -1 - VAR_9->socket;
 VAR_9->socket = VAR_12;
 FUNC_1(VAR_4);

 return VAR_12;
}
