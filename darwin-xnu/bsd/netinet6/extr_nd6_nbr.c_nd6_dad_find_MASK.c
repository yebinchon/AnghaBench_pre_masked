
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nd_opt_nonce {int nd_opt_nonce_len; int * nd_opt_nonce; } ;
struct ifaddr {int ifa_ifp; } ;
struct TYPE_4__ {struct dadq* tqe_next; } ;
struct dadq {int dad_ns_lcount; int * dad_nonce; struct ifaddr* dad_ifa; TYPE_1__ dad_list; } ;
struct TYPE_6__ {struct dadq* tqh_first; } ;
struct TYPE_5__ {int ip6s_dad_loopcount; } ;


 int FUNC_0 (struct dadq*) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (struct dadq*) ;
 int FUNC_3 (struct ifaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct dadq *
FUNC_10(struct ifaddr *VAR_5, struct nd_opt_nonce *VAR_6)
{
 struct dadq *VAR_7;

 FUNC_6(VAR_2);
 for (VAR_7 = VAR_3.tqh_first; VAR_7; VAR_7 = VAR_7->dad_list.tqe_next) {
  FUNC_1(VAR_7);
  if (VAR_7->dad_ifa != VAR_5) {
   FUNC_2(VAR_7);
   continue;
  }






  if (VAR_6 != ((void*)0) &&
      VAR_6->nd_opt_nonce_len == (VAR_1 + 2) / 8 &&
      FUNC_8(&VAR_6->nd_opt_nonce[0], &VAR_7->dad_nonce[0],
      VAR_1) == 0) {
   FUNC_9((VAR_0, "%s: a looped back NS message is "
       "detected during DAD for %s. Ignoring.\n",
       FUNC_4(VAR_5->ifa_ifp),
       FUNC_5(FUNC_3(VAR_5))));
   VAR_7->dad_ns_lcount++;
   ++VAR_4.ip6s_dad_loopcount;
   FUNC_2(VAR_7);
   continue;
  }

  FUNC_0(VAR_7);
  FUNC_2(VAR_7);
  break;
 }
 FUNC_7(VAR_2);
 return (VAR_7);
}
