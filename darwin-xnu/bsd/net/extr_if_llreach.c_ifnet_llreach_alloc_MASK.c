
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef void* u_int16_t ;
struct timeval {int tv_sec; } ;
struct ifnet {int if_llreach_lock; int if_ll_srcs; } ;
struct TYPE_2__ {int addr; void* proto; } ;
struct if_llreach {int lr_reqcnt; int lr_basereachable; int lr_npm; int lr_lqm; int lr_rssi; TYPE_1__ lr_key; struct ifnet* lr_ifp; int lr_debug; int lr_reachable; int lr_basecal; void* lr_lastrcvd; void* lr_baseup; } ;


 int VAR_0 ;
 int FUNC_0 (struct if_llreach*) ;
 int FUNC_1 (struct if_llreach*) ;
 int FUNC_2 (struct if_llreach*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 struct if_llreach* FUNC_5 (int ,int *,struct if_llreach*) ;
 int FUNC_6 (int ,int *,struct if_llreach*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*,int *,unsigned int) ;
 int FUNC_9 (struct timeval*) ;
 struct if_llreach* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_7 ;
 void* FUNC_15 () ;

struct if_llreach *
FUNC_16(struct ifnet *VAR_8, u_int16_t VAR_9, void *VAR_10,
    unsigned int VAR_11, u_int64_t VAR_12)
{
 struct if_llreach VAR_13, *VAR_14;
 struct timeval VAR_15;

 if (VAR_12 == 0)
  return (((void*)0));

 FUNC_7(VAR_11 == VAR_4);

 VAR_13.lr_key.proto = VAR_9;
 FUNC_8(VAR_10, &VAR_13.lr_key.addr, VAR_4);

 FUNC_13(&VAR_8->if_llreach_lock);
 VAR_14 = FUNC_5(VAR_7, &VAR_8->if_ll_srcs, &VAR_13);
 if (VAR_14 != ((void*)0)) {
found:
  FUNC_1(VAR_14);
  FUNC_7(VAR_14->lr_reqcnt >= 1);
  VAR_14->lr_reqcnt++;
  FUNC_7(VAR_14->lr_reqcnt != 0);
  FUNC_0(VAR_14);
  VAR_14->lr_lastrcvd = FUNC_15();
  FUNC_2(VAR_14);
  FUNC_11(&VAR_8->if_llreach_lock);
  return (VAR_14);
 }

 if (!FUNC_14(&VAR_8->if_llreach_lock))
  FUNC_12(&VAR_8->if_llreach_lock);

 FUNC_3(&VAR_8->if_llreach_lock, VAR_5);


 VAR_14 = FUNC_5(VAR_7, &VAR_8->if_ll_srcs, &VAR_13);
 if (VAR_14 != ((void*)0))
  goto found;

 VAR_14 = FUNC_10(VAR_6);
 if (VAR_14 == ((void*)0)) {
  FUNC_11(&VAR_8->if_llreach_lock);
  return (((void*)0));
 }
 FUNC_1(VAR_14);
 VAR_14->lr_reqcnt++;
 FUNC_7(VAR_14->lr_reqcnt == 1);
 FUNC_0(VAR_14);
 FUNC_0(VAR_14);
 VAR_14->lr_lastrcvd = FUNC_15();
 VAR_14->lr_baseup = VAR_14->lr_lastrcvd;
 FUNC_9(&VAR_15);
 VAR_14->lr_basecal = VAR_15.tv_sec;
 VAR_14->lr_basereachable = VAR_12;
 VAR_14->lr_reachable = FUNC_4(VAR_14->lr_basereachable * 1000);
 VAR_14->lr_debug |= VAR_0;
 VAR_14->lr_ifp = VAR_8;
 VAR_14->lr_key.proto = VAR_9;
 FUNC_8(VAR_10, &VAR_14->lr_key.addr, VAR_4);
 VAR_14->lr_rssi = VAR_3;
 VAR_14->lr_lqm = VAR_1;
 VAR_14->lr_npm = VAR_2;
 FUNC_6(VAR_7, &VAR_8->if_ll_srcs, VAR_14);
 FUNC_2(VAR_14);
 FUNC_11(&VAR_8->if_llreach_lock);

 return (VAR_14);
}
