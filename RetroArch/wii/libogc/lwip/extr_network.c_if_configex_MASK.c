
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct netif {int dummy; } ;
struct ip_addr {scalar_t__ addr; } ;
struct in_addr {scalar_t__ s_addr; } ;
typedef int s32 ;
typedef int * dev_s ;
struct TYPE_12__ {scalar_t__ addr; } ;
struct TYPE_11__ {scalar_t__ addr; } ;
struct TYPE_10__ {scalar_t__ addr; } ;
struct TYPE_13__ {TYPE_4__ netmask; TYPE_3__ gw; TYPE_2__ ip_addr; TYPE_1__* dhcp; } ;
struct TYPE_9__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ip_addr*,int,int ,int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (TYPE_5__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct netif*) ;
 TYPE_5__ VAR_18 ;
 TYPE_5__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 () ;
 int VAR_24 ;
 struct netif* FUNC_10 (TYPE_5__*,struct ip_addr*,struct ip_addr*,struct ip_addr*,int *,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct netif*) ;
 int FUNC_13 (struct netif*) ;
 int VAR_25 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;

s32 FUNC_18(struct in_addr *VAR_26,struct in_addr *VAR_27,struct in_addr *VAR_28,bool VAR_29, int VAR_30)
{
 s32 VAR_31 = 0;
 struct ip_addr VAR_32, VAR_33, VAR_34;
 struct netif *VAR_35;
 struct timespec VAR_36;
 dev_s VAR_37 = ((void*)0);

 if(VAR_20) return 0;
 VAR_20 = 1;






 FUNC_16();
 FUNC_7();
 FUNC_8();
 FUNC_14();
 FUNC_11();


 if(FUNC_1(&VAR_25,VAR_9)!=VAR_10) return -1;


 VAR_32.addr = 0;
 VAR_33.addr = 0;
 VAR_34.addr = 0;

 if(VAR_29==VAR_8) {
  if( !VAR_28 || VAR_28->s_addr==0
   || !VAR_26 || VAR_26->s_addr==0
   || !VAR_27 || VAR_27->s_addr==0 ) return -VAR_5;
   VAR_32.addr = VAR_26->s_addr;
   VAR_33.addr = VAR_27->s_addr;
   VAR_34.addr = VAR_28->s_addr;
 }
 VAR_37 = FUNC_5(&VAR_19);
 VAR_35 = FUNC_10(&VAR_19,&VAR_32, &VAR_33, &VAR_34, VAR_37, VAR_15, VAR_24);
 if(VAR_35) {
  FUNC_13(VAR_35);
  FUNC_12(VAR_35);
 } else
  return -VAR_6;


 FUNC_0(&VAR_32, 127, 0, 0, 1);
 FUNC_0(&VAR_33, 255, 0, 0, 0);
 FUNC_0(&VAR_34, 127, 0, 0, 1);
 VAR_35 = FUNC_10(&VAR_18, &VAR_32, &VAR_33, &VAR_34, ((void*)0), VAR_21, VAR_24);


 VAR_31 = FUNC_9();

 if ( VAR_31 == 0 && VAR_29 == VAR_12 ) {

  int VAR_38 = VAR_30;

  while ( VAR_19.dhcp->state != VAR_2 && VAR_38 > 0 ) {
   VAR_38--;
   FUNC_17(500000);
  }

  if ( VAR_38 > 0 ) {

   if ( VAR_26 != ((void*)0) ) VAR_26->s_addr = VAR_19.ip_addr.addr;
   if ( VAR_28 != ((void*)0) ) VAR_28->s_addr = VAR_19.gw.addr;
   if ( VAR_27 != ((void*)0) ) VAR_27->s_addr = VAR_19.netmask.addr;
  } else {
   VAR_31 = -VAR_7;
  }
 }

 return VAR_31;
}
