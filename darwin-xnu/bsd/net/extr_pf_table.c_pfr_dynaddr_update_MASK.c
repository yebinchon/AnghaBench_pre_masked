
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {struct pfi_dynaddr* pfrw_dyn; int pfrw_op; } ;
struct pfr_ktable {TYPE_1__* pfrkt_ip6; TYPE_2__* pfrkt_ip4; } ;
struct pfi_dynaddr {scalar_t__ pfid_af; scalar_t__ pfid_acnt6; scalar_t__ pfid_acnt4; } ;
struct TYPE_4__ {int (* rnh_walktree ) (TYPE_2__*,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {int (* rnh_walktree ) (TYPE_1__*,int ,struct pfr_walktree*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pfr_walktree*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,struct pfr_walktree*) ;
 int FUNC_3 (TYPE_1__*,int ,struct pfr_walktree*) ;

void
FUNC_4(struct pfr_ktable *VAR_6, struct pfi_dynaddr *VAR_7)
{
 struct pfr_walktree VAR_8;

 FUNC_0(VAR_4, VAR_2);

 FUNC_1(&VAR_8, sizeof (VAR_8));
 VAR_8.pfrw_op = VAR_3;
 VAR_8.pfrw_dyn = VAR_7;

 VAR_7->pfid_acnt4 = 0;
 VAR_7->pfid_acnt6 = 0;
 if (!VAR_7->pfid_af || VAR_7->pfid_af == VAR_0)
  (void) VAR_6->pfrkt_ip4->rnh_walktree(VAR_6->pfrkt_ip4,
      VAR_5, &VAR_8);
 if (!VAR_7->pfid_af || VAR_7->pfid_af == VAR_1)
  (void) VAR_6->pfrkt_ip6->rnh_walktree(VAR_6->pfrkt_ip6,
      VAR_5, &VAR_8);
}
