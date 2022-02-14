
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; int ss_len; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct rtentry {int rt_flags; int (* rt_llinfo_get_iflri ) (struct rtentry*,struct sockaddr_storage*) ;struct rtentry* rt_gwroute; } ;
struct radix_node_head {int dummy; } ;
struct ifnet_llreach_info {int ss_family; int ss_len; } ;
struct ifnet {int if_index; } ;
typedef int mask_ss ;
typedef int dst_ss ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct sockaddr_storage*) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr_storage*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_7 (struct rtentry*) ;
 struct rtentry* FUNC_8 (int ,int ,int ,struct radix_node_head*,int ) ;
 struct radix_node_head** VAR_7 ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (struct rtentry*,struct sockaddr_storage*) ;

int
FUNC_11(struct ifnet *VAR_8, int VAR_9,
    struct ifnet_llreach_info *VAR_10)
{
 struct radix_node_head *VAR_11;
 struct sockaddr_storage VAR_12, VAR_13;
 struct rtentry *VAR_14;
 int VAR_15 = VAR_2;

 FUNC_3(VAR_8 != ((void*)0) && VAR_10 != ((void*)0) &&
     (VAR_9 == VAR_0 || VAR_9 == VAR_1));

 FUNC_4(VAR_10, sizeof (*VAR_10));

 if ((VAR_11 = VAR_7[VAR_9]) == ((void*)0))
  return (VAR_15);

 FUNC_4(&VAR_12, sizeof (VAR_12));
 FUNC_4(&VAR_13, sizeof (VAR_13));
 VAR_12.ss_family = VAR_9;
 VAR_12.ss_len = (VAR_9 == VAR_0) ? sizeof (struct sockaddr_in) :
     sizeof (struct sockaddr_in6);

 FUNC_5(VAR_6);
 VAR_14 = FUNC_8(VAR_5, FUNC_2(&VAR_12), FUNC_2(&VAR_13), VAR_11, VAR_8->if_index);
 if (VAR_14 != ((void*)0)) {
  struct rtentry *VAR_16;

  FUNC_0(VAR_14);
  if ((VAR_14->rt_flags & VAR_3) &&
      (VAR_16 = VAR_14->rt_gwroute) != ((void*)0) &&
      FUNC_7(VAR_14)->sa_family == FUNC_7(VAR_16)->sa_family &&
      (VAR_16->rt_flags & VAR_4)) {
   FUNC_1(VAR_14);
   FUNC_0(VAR_16);
   if (VAR_16->rt_llinfo_get_iflri != ((void*)0)) {
    (*VAR_16->rt_llinfo_get_iflri)(VAR_16, VAR_10);
    VAR_15 = 0;
   }
   FUNC_1(VAR_16);
  } else {
   FUNC_1(VAR_14);
  }
  FUNC_9(VAR_14);
 }
 FUNC_6(VAR_6);

 return (VAR_15);
}
