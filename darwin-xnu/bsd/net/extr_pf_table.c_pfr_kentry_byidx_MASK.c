
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {int pfrw_cnt; struct pfr_kentry* pfrw_kentry; int pfrw_op; } ;
struct pfr_ktable {TYPE_1__* pfrkt_ip6; TYPE_2__* pfrkt_ip4; } ;
struct pfr_kentry {int dummy; } ;
struct TYPE_4__ {int (* rnh_walktree ) (TYPE_2__*,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {int (* rnh_walktree ) (TYPE_1__*,int ,struct pfr_walktree*) ;} ;




 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pfr_walktree*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ,struct pfr_walktree*) ;
 int FUNC_3 (TYPE_1__*,int ,struct pfr_walktree*) ;

__attribute__((used)) static struct pfr_kentry *
FUNC_4(struct pfr_ktable *VAR_4, int VAR_5, int VAR_6)
{
 struct pfr_walktree VAR_7;

 FUNC_0(VAR_2, VAR_0);

 FUNC_1(&VAR_7, sizeof (VAR_7));
 VAR_7.pfrw_op = VAR_1;
 VAR_7.pfrw_cnt = VAR_5;

 switch (VAR_6) {
 default:
  return (((void*)0));
 }
}
