
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct ip_moptions {int imo_multicast_vif; int imo_max_memberships; struct in_mfilter* imo_mfilters; struct in_multi** imo_membership; scalar_t__ imo_num_memberships; int imo_multicast_loop; int imo_multicast_ttl; TYPE_1__ imo_multicast_addr; int * imo_multicast_ifp; } ;
struct inpcb {struct ip_moptions* inp_moptions; } ;
struct in_multi {int dummy; } ;
struct in_mfilter {int dummy; } ;


 int FUNC_0 (struct ip_moptions*) ;
 int FUNC_1 (struct ip_moptions*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct in_multi**,int ) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct in_mfilter*,int ,int ) ;
 int VAR_9 ;
 struct ip_moptions* FUNC_5 (int) ;

__attribute__((used)) static struct ip_moptions *
FUNC_6(struct inpcb *VAR_10)
{
 struct ip_moptions *VAR_11;
 struct in_multi **VAR_12;
 struct in_mfilter *VAR_13;
 size_t VAR_14;

 if ((VAR_11 = VAR_10->inp_moptions) != ((void*)0)) {
  FUNC_0(VAR_11);
  return (VAR_11);
 }

 VAR_11 = FUNC_5(VAR_7);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 VAR_12 = FUNC_3(sizeof (*VAR_12) * VAR_2, VAR_6,
     VAR_7 | VAR_8);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_11);
  return (((void*)0));
 }

 VAR_13 = FUNC_3(sizeof (struct in_mfilter) * VAR_2,
     VAR_5, VAR_7 | VAR_8);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_12, VAR_6);
  FUNC_1(VAR_11);
  return (((void*)0));
 }

 VAR_11->imo_multicast_ifp = ((void*)0);
 VAR_11->imo_multicast_addr.s_addr = VAR_0;
 VAR_11->imo_multicast_vif = -1;
 VAR_11->imo_multicast_ttl = VAR_1;
 VAR_11->imo_multicast_loop = VAR_9;
 VAR_11->imo_num_memberships = 0;
 VAR_11->imo_max_memberships = VAR_2;
 VAR_11->imo_membership = VAR_12;


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  FUNC_4(&VAR_13[VAR_14], VAR_4, VAR_3);

 VAR_11->imo_mfilters = VAR_13;
 VAR_10->inp_moptions = VAR_11;
 FUNC_0(VAR_11);

 return (VAR_11);
}
