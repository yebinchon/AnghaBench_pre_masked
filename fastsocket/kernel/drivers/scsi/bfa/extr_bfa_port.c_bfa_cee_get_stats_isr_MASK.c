
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bfa_cee_stats_s {int dummy; } ;
struct TYPE_4__ {int get_stats_cbarg; int (* get_stats_cbfn ) (int ,scalar_t__) ;} ;
struct TYPE_3__ {int kva; } ;
struct bfa_cee_s {TYPE_2__ cbfn; int get_stats_pending; scalar_t__ stats; TYPE_1__ stats_dma; scalar_t__ get_stats_status; } ;
typedef scalar_t__ bfa_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bfa_cee_s*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_cee_s *VAR_2, bfa_status_t VAR_3)
{
 u32 *VAR_4;
 int VAR_5;

 VAR_2->get_stats_status = VAR_3;
 FUNC_0(VAR_2, 0);
 if (VAR_3 == VAR_1) {
  FUNC_0(VAR_2, 0);
  FUNC_2(VAR_2->stats, VAR_2->stats_dma.kva,
   sizeof(struct bfa_cee_stats_s));

  VAR_4 = (u32 *)VAR_2->stats;
  for (VAR_5 = 0; VAR_5 < (sizeof(struct bfa_cee_stats_s) /
     sizeof(u32)); VAR_5++)
   VAR_4[VAR_5] = FUNC_1(VAR_4[VAR_5]);
 }
 VAR_2->get_stats_pending = VAR_0;
 FUNC_0(VAR_2, 0);
 if (VAR_2->cbfn.get_stats_cbfn) {
  FUNC_0(VAR_2, 0);
  VAR_2->cbfn.get_stats_cbfn(VAR_2->cbfn.get_stats_cbarg, VAR_3);
 }
}
