
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef TYPE_1__* devfs_vnode_event_t ;
typedef TYPE_2__* devfs_event_log_t ;
struct TYPE_5__ {size_t del_used; TYPE_1__* del_entries; } ;
struct TYPE_4__ {int dve_vp; int dve_events; int dve_vid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(devfs_event_log_t VAR_0)
{
 uint32_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->del_used; VAR_1++) {
  devfs_vnode_event_t VAR_2 = &VAR_0->del_entries[VAR_1];
  if (FUNC_0(VAR_2->dve_vp, VAR_2->dve_vid) == 0) {
   FUNC_1(VAR_2->dve_vp, VAR_2->dve_events, ((void*)0));
   FUNC_2(VAR_2->dve_vp);
  }
 }
}
