
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
typedef int user_addr_t ;
struct pfr_walktree {int pfrw_free; int pfrw_flags; int pfrw_addr; int pfrw_op; } ;
struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_cnt; TYPE_1__* pfrkt_ip6; TYPE_2__* pfrkt_ip4; } ;
struct TYPE_4__ {int (* rnh_walktree ) (TYPE_2__*,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {int (* rnh_walktree ) (TYPE_1__*,int ,struct pfr_walktree*) ;} ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pfr_walktree*,int) ;
 struct pfr_ktable* FUNC_2 (struct pfr_table*) ;
 scalar_t__ FUNC_3 (struct pfr_table*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_2__*,int ,struct pfr_walktree*) ;
 int FUNC_6 (TYPE_1__*,int ,struct pfr_walktree*) ;

int
FUNC_7(struct pfr_table *VAR_6, user_addr_t VAR_7, int *VAR_8,
 int VAR_9)
{
 struct pfr_ktable *VAR_10;
 struct pfr_walktree VAR_11;
 int VAR_12;

 FUNC_0(VAR_9, 0);
 if (FUNC_3(VAR_6, 0, 0))
  return (VAR_0);
 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 == ((void*)0) || !(VAR_10->pfrkt_flags & VAR_4))
  return (VAR_2);
 if (VAR_10->pfrkt_cnt > *VAR_8) {
  *VAR_8 = VAR_10->pfrkt_cnt;
  return (0);
 }

 FUNC_1(&VAR_11, sizeof (VAR_11));
 VAR_11.pfrw_op = VAR_3;
 VAR_11.pfrw_addr = VAR_7;
 VAR_11.pfrw_free = VAR_10->pfrkt_cnt;
 VAR_11.pfrw_flags = VAR_9;
 VAR_12 = VAR_10->pfrkt_ip4->rnh_walktree(VAR_10->pfrkt_ip4, VAR_5, &VAR_11);
 if (!VAR_12)
  VAR_12 = VAR_10->pfrkt_ip6->rnh_walktree(VAR_10->pfrkt_ip6,
      VAR_5, &VAR_11);
 if (VAR_12)
  return (VAR_12);

 if (VAR_11.pfrw_free) {
  FUNC_4("pfr_get_addrs: corruption detected (%d).\n",
      VAR_11.pfrw_free);
  return (VAR_1);
 }
 *VAR_8 = VAR_10->pfrkt_cnt;
 return (0);
}
