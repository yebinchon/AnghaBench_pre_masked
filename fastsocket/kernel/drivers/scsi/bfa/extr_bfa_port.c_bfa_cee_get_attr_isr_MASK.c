
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int get_attr_cbarg; int (* get_attr_cbfn ) (int ,scalar_t__) ;} ;
struct TYPE_4__ {int kva; } ;
struct bfa_cee_s {TYPE_2__ cbfn; int get_attr_pending; TYPE_1__ attr_dma; TYPE_3__* attr; scalar_t__ get_attr_status; } ;
struct bfa_cee_lldp_cfg_s {void* enabled_system_cap; void* time_to_live; } ;
struct bfa_cee_attr_s {int dummy; } ;
typedef scalar_t__ bfa_status_t ;
struct TYPE_6__ {struct bfa_cee_lldp_cfg_s lldp_remote; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (struct bfa_cee_s*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_cee_s *VAR_2, bfa_status_t VAR_3)
{
 struct bfa_cee_lldp_cfg_s *VAR_4 = &VAR_2->attr->lldp_remote;

 VAR_2->get_attr_status = VAR_3;
 FUNC_1(VAR_2, 0);
 if (VAR_3 == VAR_1) {
  FUNC_1(VAR_2, 0);
  FUNC_2(VAR_2->attr, VAR_2->attr_dma.kva,
   sizeof(struct bfa_cee_attr_s));
  VAR_4->time_to_live = FUNC_0(VAR_4->time_to_live);
  VAR_4->enabled_system_cap =
    FUNC_0(VAR_4->enabled_system_cap);
 }
 VAR_2->get_attr_pending = VAR_0;
 if (VAR_2->cbfn.get_attr_cbfn) {
  FUNC_1(VAR_2, 0);
  VAR_2->cbfn.get_attr_cbfn(VAR_2->cbfn.get_attr_cbarg, VAR_3);
 }
}
