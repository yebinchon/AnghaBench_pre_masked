
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ip_moptions {int imo_num_memberships; scalar_t__ imo_max_memberships; TYPE_1__** imo_membership; struct in_mfilter* imo_mfilters; int imo_multicast_loop; int imo_multicast_ttl; int imo_multicast_vif; int imo_multicast_ifp; } ;
struct inpcb {int dummy; } ;
struct in_mfilter {int dummy; } ;
struct TYPE_4__ {int inm_ifp; int inm_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_moptions*) ;
 int FUNC_1 (struct ip_moptions*) ;
 int FUNC_2 (struct ip_moptions*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct in_mfilter*) ;
 int FUNC_6 (struct in_mfilter*) ;
 int FUNC_7 (struct ip_moptions*,scalar_t__) ;
 TYPE_1__* FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*,struct in_mfilter*) ;
 struct ip_moptions* FUNC_10 (struct inpcb*) ;

int
FUNC_11(struct inpcb *VAR_1, struct inpcb *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct ip_moptions *VAR_5;
 struct ip_moptions *VAR_6;

 VAR_5 = FUNC_10(VAR_1);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_10(VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);

        VAR_6->imo_multicast_ifp = VAR_5->imo_multicast_ifp;
        VAR_6->imo_multicast_vif = VAR_5->imo_multicast_vif;
        VAR_6->imo_multicast_ttl = VAR_5->imo_multicast_ttl;
        VAR_6->imo_multicast_loop = VAR_5->imo_multicast_loop;





 for (VAR_3 = 0; VAR_3 < VAR_6->imo_num_memberships; ++VAR_3) {
  struct in_mfilter *VAR_7;

  VAR_7 = VAR_6->imo_mfilters ? &VAR_6->imo_mfilters[VAR_3] : ((void*)0);
  if (VAR_7 != ((void*)0))
   FUNC_5(VAR_7);

  (void) FUNC_9(VAR_6->imo_membership[VAR_3], VAR_7);

  if (VAR_7 != ((void*)0))
   FUNC_6(VAR_7);

  FUNC_3(VAR_6->imo_membership[VAR_3]);
  VAR_6->imo_membership[VAR_3] = ((void*)0);
 }
 VAR_6->imo_num_memberships = 0;

 FUNC_4(VAR_6->imo_max_memberships != 0 && VAR_5->imo_max_memberships != 0);
 if (VAR_6->imo_max_memberships < VAR_5->imo_max_memberships) {




  VAR_4 = FUNC_7(VAR_6, VAR_5->imo_max_memberships);
  if (VAR_4 != 0)
   goto done;
 }
 FUNC_4(VAR_6->imo_max_memberships >= VAR_5->imo_max_memberships);





 for (VAR_3 = 0; VAR_3 < VAR_5->imo_num_memberships; VAR_3++) {
  VAR_6->imo_membership[VAR_3] =
   FUNC_8(&VAR_5->imo_membership[VAR_3]->inm_addr,
      VAR_5->imo_membership[VAR_3]->inm_ifp);
  if (VAR_6->imo_membership[VAR_3] == ((void*)0))
   break;
  VAR_6->imo_num_memberships++;
        }
 FUNC_4(VAR_6->imo_num_memberships == VAR_5->imo_num_memberships);

done:
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);
 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 return (VAR_4);
}
