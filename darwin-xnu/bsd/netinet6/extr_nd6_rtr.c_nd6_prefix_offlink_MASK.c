
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_addr; void* sin6_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {int dummy; } ;
struct nd_prefix {int ndpr_stateflags; int ndpr_plen; scalar_t__ ndpr_prproxy_sols_cnt; int ndpr_prproxy_sols; struct rtentry* ndpr_rt; struct sockaddr_in6 ndpr_prefix; int ndpr_mask; struct ifnet* ndpr_ifp; } ;
struct in6_addr {int dummy; } ;
struct ifnet {unsigned int if_index; } ;
typedef int sa6 ;
typedef int mask6 ;


 void* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nd_prefix*) ;
 int FUNC_2 (struct nd_prefix*) ;
 int FUNC_3 (struct nd_prefix*) ;
 int FUNC_4 (struct nd_prefix*) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct sockaddr_in6*,int) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_9 ;
 int FUNC_15 (struct nd_prefix*,struct nd_prefix*) ;
 int FUNC_16 (struct nd_prefix*) ;
 int FUNC_17 (int ,struct rtentry*) ;
 int FUNC_18 (int ) ;
 int VAR_10 ;
 int FUNC_19 (struct rtentry*) ;
 int FUNC_20 (int ,struct sockaddr*,int *,struct sockaddr*,int ,struct rtentry**,unsigned int) ;

int
FUNC_21(struct nd_prefix *VAR_11)
{
 int VAR_12, VAR_13 = 0, VAR_14;
 struct ifnet *VAR_15 = VAR_11->ndpr_ifp;
 struct sockaddr_in6 VAR_16, VAR_17, VAR_18;
 struct rtentry *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 unsigned int VAR_21;

 FUNC_0(VAR_9, VAR_3);


 FUNC_2(VAR_11);
 if ((VAR_11->ndpr_stateflags & VAR_6) == 0) {
  FUNC_18((VAR_4,
      "nd6_prefix_offlink: %s/%d on %s scoped=%d is already "
      "off-link\n", FUNC_12(&VAR_11->ndpr_prefix.sin6_addr),
      VAR_11->ndpr_plen, FUNC_11(VAR_11->ndpr_ifp),
      (VAR_11->ndpr_stateflags & VAR_5) ? 1 : 0));
  FUNC_4(VAR_11);
  return (VAR_1);
 }

 FUNC_10(&VAR_16, sizeof (VAR_16));
 VAR_16 = VAR_0;
 VAR_16 = sizeof (VAR_16);
 FUNC_9(&VAR_11->ndpr_prefix.sin6_addr, &VAR_16,
     sizeof (struct in6_addr));
 FUNC_10(&VAR_17, sizeof (VAR_17));
 VAR_17 = VAR_0;
 VAR_17 = sizeof (VAR_16);
 FUNC_9(&VAR_11->ndpr_mask, &VAR_17, sizeof (struct in6_addr));
 VAR_18 = VAR_11->ndpr_prefix;
 VAR_12 = VAR_11->ndpr_plen;
 if ((VAR_20 = VAR_11->ndpr_rt) != ((void*)0))
  VAR_11->ndpr_rt = ((void*)0);
 FUNC_1(VAR_11);
 FUNC_4(VAR_11);

 VAR_21 = (VAR_11->ndpr_stateflags & VAR_5) ?
     VAR_15->if_index : VAR_2;

 VAR_13 = FUNC_20(VAR_8, (struct sockaddr *)&VAR_16,
     ((void*)0), (struct sockaddr *)&VAR_17, 0, &VAR_19, VAR_21);

 if (VAR_19 != ((void*)0)) {

  FUNC_6(VAR_19);
  FUNC_17(VAR_8, VAR_19);
  FUNC_7(VAR_19);
  FUNC_19(VAR_19);

 } else {
  FUNC_18((VAR_4,
      "nd6_prefix_offlink: failed to delete route: "
      "%s/%d on %s, scoped %d, (errno = %d)\n",
      FUNC_12(&VAR_16), VAR_12, FUNC_11(VAR_15),
      (VAR_21 != VAR_2), VAR_13));
 }

 if (VAR_20 != ((void*)0))
  FUNC_19(VAR_20);

 FUNC_13(&VAR_10);

 FUNC_2(VAR_11);
 VAR_14 = (VAR_11->ndpr_stateflags & VAR_7);
 FUNC_8(!VAR_14 || !(VAR_11->ndpr_stateflags & VAR_5));
 VAR_11->ndpr_stateflags &= ~(VAR_6 | VAR_5 | VAR_7);
 if (VAR_11->ndpr_prproxy_sols_cnt > 0) {
  FUNC_8(VAR_14);
  FUNC_16(VAR_11);
  FUNC_8(VAR_11->ndpr_prproxy_sols_cnt == 0);
  FUNC_8(FUNC_5(&VAR_11->ndpr_prproxy_sols));
 }
 FUNC_4(VAR_11);







 FUNC_15(VAR_11, VAR_14 ? VAR_11 : ((void*)0));

 FUNC_3(VAR_11);
 FUNC_14(&VAR_10);

 return (VAR_13);
}
