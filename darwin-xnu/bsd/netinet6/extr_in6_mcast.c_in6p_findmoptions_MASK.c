
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_moptions {int im6o_max_memberships; struct in6_mfilter* im6o_mfilters; struct in6_multi** im6o_membership; scalar_t__ im6o_num_memberships; int im6o_multicast_loop; int im6o_multicast_hlim; int * im6o_multicast_ifp; } ;
struct inpcb {struct ip6_moptions* in6p_moptions; } ;
struct in6_multi {int dummy; } ;
struct in6_mfilter {int dummy; } ;


 int FUNC_0 (struct ip6_moptions*) ;
 int FUNC_1 (struct ip6_moptions*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct in6_multi**,int ) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct in6_mfilter*,int ,int ) ;
 int VAR_7 ;
 struct ip6_moptions* FUNC_5 (int) ;
 int VAR_8 ;

__attribute__((used)) static struct ip6_moptions *
FUNC_6(struct inpcb *VAR_9)
{
 struct ip6_moptions *VAR_10;
 struct in6_multi **VAR_11;
 struct in6_mfilter *VAR_12;
 size_t VAR_13;

 if ((VAR_10 = VAR_9->in6p_moptions) != ((void*)0)) {
  FUNC_0(VAR_10);
  return (VAR_10);
 }

 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_11 = FUNC_3(sizeof (*VAR_11) * VAR_0, VAR_4,
     VAR_5 | VAR_6);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_10);
  return (((void*)0));
 }

 VAR_12 = FUNC_3(sizeof (struct in6_mfilter) * VAR_0,
     VAR_3, VAR_5 | VAR_6);
 if (VAR_12 == ((void*)0)) {
  FUNC_2(VAR_11, VAR_4);
  FUNC_1(VAR_10);
  return (((void*)0));
 }

 VAR_10->im6o_multicast_ifp = ((void*)0);
 VAR_10->im6o_multicast_hlim = VAR_8;
 VAR_10->im6o_multicast_loop = VAR_7;
 VAR_10->im6o_num_memberships = 0;
 VAR_10->im6o_max_memberships = VAR_0;
 VAR_10->im6o_membership = VAR_11;


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
  FUNC_4(&VAR_12[VAR_13], VAR_2, VAR_1);

 VAR_10->im6o_mfilters = VAR_12;
 VAR_9->in6p_moptions = VAR_10;
 FUNC_0(VAR_10);

 return (VAR_10);
}
