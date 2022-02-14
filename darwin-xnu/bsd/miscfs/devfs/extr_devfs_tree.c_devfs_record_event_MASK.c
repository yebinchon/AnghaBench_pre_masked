
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ dn_vn; } ;
typedef TYPE_1__ devnode_t ;
typedef TYPE_2__* devfs_vnode_event_t ;
typedef TYPE_3__* devfs_event_log_t ;
struct TYPE_8__ {size_t del_used; size_t del_max; TYPE_2__* del_entries; } ;
struct TYPE_7__ {scalar_t__ dve_vp; int dve_events; int dve_vid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(devfs_event_log_t VAR_1, devnode_t *VAR_2, uint32_t VAR_3)
{
 if (VAR_1->del_used >= VAR_1->del_max) {
  FUNC_0("devfs event log overflowed.\n");
 }


 if (VAR_2->dn_vn != VAR_0 && FUNC_1(VAR_2->dn_vn)) {
  devfs_vnode_event_t VAR_4 = &VAR_1->del_entries[VAR_1->del_used];
  VAR_4->dve_vp = VAR_2->dn_vn;
  VAR_4->dve_vid = FUNC_2(VAR_2->dn_vn);
  VAR_4->dve_events = VAR_3;
  VAR_1->del_used++;
 }
}
