
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uipdev_s ;
typedef int u16 ;
struct uip_netif {int dummy; } ;
struct uip_ip_addr {int dummy; } ;
struct tcpip_sock {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct dbginterface {int fhndl; int write; int read; int close; int open; int wait; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 struct dbginterface VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int VAR_10 ;
 int FUNC_8 () ;
 int VAR_11 ;
 struct uip_netif* FUNC_9 (int *,struct uip_ip_addr*,struct uip_ip_addr*,struct uip_ip_addr*,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct uip_netif*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_12 ;
 int VAR_13 ;

struct dbginterface* FUNC_14(struct uip_ip_addr *VAR_14,struct uip_ip_addr *VAR_15,struct uip_ip_addr *VAR_16,u16 VAR_17)
{
 uipdev_s VAR_18;
 struct uip_netif *VAR_19 ;
 struct sockaddr_in VAR_20;
 socklen_t VAR_21 = sizeof(struct sockaddr);

 FUNC_2();
 FUNC_8();
 FUNC_12();
 FUNC_10();
 FUNC_13();

 FUNC_0(VAR_9,0,(VAR_2*sizeof(struct tcpip_sock)));

 VAR_18 = FUNC_7(&VAR_5);
 VAR_19 = FUNC_9(&VAR_5,VAR_14,VAR_15,VAR_16,VAR_18,VAR_10,VAR_11);
 if(VAR_19) {
  FUNC_11(VAR_19);

  VAR_4 = FUNC_6();
  if(VAR_4<0) return ((void*)0);

  VAR_20.sin_addr.s_addr = VAR_1;
  VAR_20.sin_port = FUNC_1(VAR_17);
  VAR_20.sin_family = VAR_0;

  if(FUNC_3(VAR_4,(struct sockaddr*)&VAR_20,&VAR_21)<0){
   FUNC_4(VAR_4);
   VAR_4 = -1;
   return ((void*)0);
  }
  if(FUNC_5(VAR_4,1)<0) {
   FUNC_4(VAR_4);
   VAR_4 = -1;
   return ((void*)0);
  }

  VAR_6.fhndl = -1;
  VAR_6.wait = VAR_12;
  VAR_6.open = VAR_7;
  VAR_6.close = VAR_3;
  VAR_6.read = VAR_8;
  VAR_6.write = VAR_13;

  return &VAR_6;
 }
 return ((void*)0);
}
