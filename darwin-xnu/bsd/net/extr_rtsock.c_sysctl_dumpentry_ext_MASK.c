
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walkarg {scalar_t__ w_op; int w_arg; int * w_req; int * w_tmem; } ;
struct rtentry {int rt_flags; int (* rt_llinfo_get_ri ) (struct rtentry*,struct rt_addrinfo*) ;TYPE_1__* rt_ifp; int rt_use; int rt_genmask; int rt_gateway; } ;
struct rt_addrinfo {int ri_npm; int ri_lqm; int ri_rssi; int rti_addrs; int * rti_info; } ;
struct rt_msghdr_ext {int rtm_flags; struct rt_addrinfo rtm_ri; int rtm_addrs; scalar_t__ rtm_errno; scalar_t__ rtm_seq; scalar_t__ rtm_pid; int rtm_index; int rtm_rmx; int rtm_use; } ;
struct radix_node {int dummy; } ;
typedef int kauth_cred_t ;
typedef int info ;
typedef int caddr_t ;
struct TYPE_2__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct rt_addrinfo*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rtentry*,int *) ;
 int FUNC_8 (struct rtentry*) ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (int ,struct rt_addrinfo*,int *,struct walkarg*,int *) ;
 int FUNC_11 (struct rtentry*,struct rt_addrinfo*) ;

__attribute__((used)) static int
FUNC_12(struct radix_node *VAR_9, void *VAR_10)
{
 struct walkarg *VAR_11 = VAR_10;
 struct rtentry *VAR_12 = (struct rtentry *)VAR_9;
 int VAR_13 = 0, VAR_14;
 struct rt_addrinfo VAR_15;
 kauth_cred_t VAR_16;

 VAR_16 = FUNC_5(FUNC_4());

 FUNC_0(VAR_12);
 if (VAR_11->w_op == VAR_3 && !(VAR_12->rt_flags & VAR_11->w_arg))
  goto done;
 FUNC_3(&VAR_15, sizeof (VAR_15));
 VAR_15.rti_info[VAR_4] = FUNC_8(VAR_12);
 VAR_15.rti_info[VAR_5] = VAR_12->rt_gateway;
 VAR_15.rti_info[VAR_7] = FUNC_9(VAR_12);
 VAR_15.rti_info[VAR_6] = VAR_12->rt_genmask;

 VAR_14 = FUNC_10(VAR_8, &VAR_15, ((void*)0), VAR_11, &VAR_16);
 if (VAR_11->w_req != ((void*)0) && VAR_11->w_tmem != ((void*)0)) {
  struct rt_msghdr_ext *VAR_17 =
      (struct rt_msghdr_ext *)(void *)VAR_11->w_tmem;

  VAR_17->rtm_flags = VAR_12->rt_flags;
  VAR_17->rtm_use = VAR_12->rt_use;
  FUNC_7(VAR_12, &VAR_17->rtm_rmx);
  VAR_17->rtm_index = VAR_12->rt_ifp->if_index;
  VAR_17->rtm_pid = 0;
  VAR_17->rtm_seq = 0;
  VAR_17->rtm_errno = 0;
  VAR_17->rtm_addrs = VAR_15.rti_addrs;
  if (VAR_12->rt_llinfo_get_ri == ((void*)0)) {
   FUNC_3(&VAR_17->rtm_ri, sizeof (VAR_17->rtm_ri));
   VAR_17->rtm_ri.ri_rssi = VAR_2;
   VAR_17->rtm_ri.ri_lqm = VAR_0;
   VAR_17->rtm_ri.ri_npm = VAR_1;
  } else {
   VAR_12->rt_llinfo_get_ri(VAR_12, &VAR_17->rtm_ri);
  }
  VAR_13 = FUNC_2(VAR_11->w_req, (caddr_t)VAR_17, VAR_14);
 }

done:
 FUNC_1(VAR_12);
 FUNC_6(&VAR_16);
 return (VAR_13);
}
