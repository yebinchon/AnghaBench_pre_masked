
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct walkarg {scalar_t__ w_op; int w_arg; int * w_req; int * w_tmem; } ;
struct rtentry {int rt_flags; TYPE_1__* rt_parent; int rt_refcnt; TYPE_2__* rt_ifp; int rt_use; int rt_genmask; int rt_gateway; } ;
struct rt_msghdr2 {int rtm_flags; int rtm_addrs; scalar_t__ rtm_reserved; scalar_t__ rtm_parentflags; int rtm_refcnt; int rtm_index; int rtm_rmx; int rtm_use; } ;
struct rt_msghdr {int rtm_flags; int rtm_addrs; scalar_t__ rtm_errno; scalar_t__ rtm_seq; scalar_t__ rtm_pid; int rtm_index; int rtm_rmx; int rtm_use; } ;
struct rt_addrinfo {int rti_addrs; int * rti_info; } ;
struct radix_node {int dummy; } ;
typedef int kauth_cred_t ;
typedef int info ;
typedef int caddr_t ;
struct TYPE_4__ {int if_index; } ;
struct TYPE_3__ {scalar_t__ rt_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_11 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_2__* VAR_12 ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (struct rtentry*,int *) ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (struct rtentry*) ;
 int FUNC_11 (int ,struct rt_addrinfo*,int *,struct walkarg*,int *) ;

__attribute__((used)) static int
FUNC_12(struct radix_node *VAR_13, void *VAR_14)
{
 struct walkarg *VAR_15 = VAR_14;
 struct rtentry *VAR_16 = (struct rtentry *)VAR_13;
 int VAR_17 = 0, VAR_18;
 struct rt_addrinfo VAR_19;
 kauth_cred_t VAR_20;
 kauth_cred_t *VAR_21;

 VAR_20 = FUNC_5(FUNC_4());
 VAR_21 = &VAR_20;

 FUNC_0(VAR_16);
 if ((VAR_15->w_op == VAR_1 || VAR_15->w_op == VAR_2) &&
     !(VAR_16->rt_flags & VAR_15->w_arg))
  goto done;






 if (VAR_15->w_op == VAR_2 && (VAR_16->rt_flags & VAR_8)) {
  if (VAR_16->rt_ifp != VAR_12 &&
      (FUNC_7(((void*)0), VAR_20, VAR_3, VAR_11) == 0)) {
   VAR_21 = ((void*)0);
  }
 }

 FUNC_3((caddr_t)&VAR_19, sizeof (VAR_19));
 VAR_19.rti_info[VAR_4] = FUNC_9(VAR_16);
 VAR_19.rti_info[VAR_5] = VAR_16->rt_gateway;
 VAR_19.rti_info[VAR_7] = FUNC_10(VAR_16);
 VAR_19.rti_info[VAR_6] = VAR_16->rt_genmask;

 if (VAR_15->w_op != VAR_0) {
  VAR_18 = FUNC_11(VAR_9, &VAR_19, ((void*)0), VAR_15, VAR_21);
  if (VAR_15->w_req != ((void*)0) && VAR_15->w_tmem != ((void*)0)) {
   struct rt_msghdr *VAR_22 =
       (struct rt_msghdr *)(void *)VAR_15->w_tmem;

   VAR_22->rtm_flags = VAR_16->rt_flags;
   VAR_22->rtm_use = VAR_16->rt_use;
   FUNC_8(VAR_16, &VAR_22->rtm_rmx);
   VAR_22->rtm_index = VAR_16->rt_ifp->if_index;
   VAR_22->rtm_pid = 0;
   VAR_22->rtm_seq = 0;
   VAR_22->rtm_errno = 0;
   VAR_22->rtm_addrs = VAR_19.rti_addrs;
   VAR_17 = FUNC_2(VAR_15->w_req, (caddr_t)VAR_22, VAR_18);
  }
 } else {
  VAR_18 = FUNC_11(VAR_10, &VAR_19, ((void*)0), VAR_15, VAR_21);
  if (VAR_15->w_req != ((void*)0) && VAR_15->w_tmem != ((void*)0)) {
   struct rt_msghdr2 *VAR_23 =
       (struct rt_msghdr2 *)(void *)VAR_15->w_tmem;

   VAR_23->rtm_flags = VAR_16->rt_flags;
   VAR_23->rtm_use = VAR_16->rt_use;
   FUNC_8(VAR_16, &VAR_23->rtm_rmx);
   VAR_23->rtm_index = VAR_16->rt_ifp->if_index;
   VAR_23->rtm_refcnt = VAR_16->rt_refcnt;
   if (VAR_16->rt_parent)
    VAR_23->rtm_parentflags = VAR_16->rt_parent->rt_flags;
   else
    VAR_23->rtm_parentflags = 0;
   VAR_23->rtm_reserved = 0;
   VAR_23->rtm_addrs = VAR_19.rti_addrs;
   VAR_17 = FUNC_2(VAR_15->w_req, (caddr_t)VAR_23, VAR_18);
  }
 }

done:
 FUNC_1(VAR_16);
 FUNC_6(&VAR_20);
 return (VAR_17);
}
