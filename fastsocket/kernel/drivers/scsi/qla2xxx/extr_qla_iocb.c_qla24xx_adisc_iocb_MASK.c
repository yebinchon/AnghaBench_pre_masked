
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct logio_entry_24xx {int vp_index; void* nport_handle; void* control_flags; int entry_type; } ;
struct TYPE_7__ {TYPE_2__* fcport; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_6__ {TYPE_1__* vha; int loop_id; } ;
struct TYPE_5__ {int vp_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(srb_t *VAR_2, struct logio_entry_24xx *VAR_3)
{
 VAR_3->entry_type = VAR_1;
 VAR_3->control_flags = FUNC_0(VAR_0);
 VAR_3->nport_handle = FUNC_0(VAR_2->fcport->loop_id);
 VAR_3->vp_index = VAR_2->fcport->vha->vp_idx;
}
