
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct uwb_dev* dev; int type; } ;
struct uwb_rsv {int pal_node; int max_interval; int min_mas; int max_mas; int type; TYPE_1__ target; } ;
struct uwb_rc {TYPE_2__* dbg; } ;
struct uwb_mac_addr {int dummy; } ;
struct uwb_dev {int dummy; } ;
struct uwb_dbg_cmd_rsv_establish {int max_interval; int min_mas; int max_mas; int type; int target; } ;
typedef int macaddr ;
struct TYPE_4__ {int list_lock; int rsvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct uwb_mac_addr*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 struct uwb_dev* FUNC_4 (struct uwb_rc*,struct uwb_mac_addr*) ;
 int FUNC_5 (struct uwb_dev*) ;
 struct uwb_rsv* FUNC_6 (struct uwb_rc*,int ,TYPE_2__*) ;
 int FUNC_7 (struct uwb_rsv*) ;
 int FUNC_8 (struct uwb_rsv*) ;

__attribute__((used)) static int FUNC_9(struct uwb_rc *VAR_4,
        struct uwb_dbg_cmd_rsv_establish *VAR_5)
{
 struct uwb_mac_addr VAR_6;
 struct uwb_rsv *VAR_7;
 struct uwb_dev *VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6, VAR_5->target, sizeof(VAR_6));
 VAR_8 = FUNC_4(VAR_4, &VAR_6);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_4, VAR_3, VAR_4->dbg);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_8);
  return -VAR_1;
 }

 VAR_7->target.type = VAR_2;
 VAR_7->target.dev = VAR_8;
 VAR_7->type = VAR_5->type;
 VAR_7->max_mas = VAR_5->max_mas;
 VAR_7->min_mas = VAR_5->min_mas;
 VAR_7->max_interval = VAR_5->max_interval;

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  FUNC_7(VAR_7);
 else {
  FUNC_2(&(VAR_4->dbg)->list_lock);
  FUNC_0(&VAR_7->pal_node, &VAR_4->dbg->rsvs);
  FUNC_3(&(VAR_4->dbg)->list_lock);
 }
 return VAR_9;
}
