
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {int pfrw_op; } ;
struct pfr_ktable {TYPE_1__* pfrkt_ip6; TYPE_2__* pfrkt_ip4; } ;
struct TYPE_4__ {scalar_t__ (* rnh_walktree ) (TYPE_2__*,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {scalar_t__ (* rnh_walktree ) (TYPE_1__*,int ,struct pfr_walktree*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pfr_walktree*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,struct pfr_walktree*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct pfr_walktree*) ;

__attribute__((used)) static void
FUNC_4(struct pfr_ktable *VAR_2)
{
 struct pfr_walktree VAR_3;

 FUNC_0(&VAR_3, sizeof (VAR_3));
 VAR_3.pfrw_op = VAR_0;
 if (VAR_2->pfrkt_ip4->rnh_walktree(VAR_2->pfrkt_ip4, VAR_1, &VAR_3))
  FUNC_1("pfr_mark_addrs: IPv4 walktree failed.\n");
 if (VAR_2->pfrkt_ip6->rnh_walktree(VAR_2->pfrkt_ip6, VAR_1, &VAR_3))
  FUNC_1("pfr_mark_addrs: IPv6 walktree failed.\n");
}
