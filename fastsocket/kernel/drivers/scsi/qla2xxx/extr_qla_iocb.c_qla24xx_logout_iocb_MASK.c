
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct logio_entry_24xx {int vp_index; int * port_id; void* nport_handle; void* control_flags; int entry_type; } ;
struct TYPE_11__ {TYPE_4__* fcport; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_7__ {int domain; int area; int al_pa; } ;
struct TYPE_8__ {TYPE_1__ b; } ;
struct TYPE_10__ {int loop_id; TYPE_3__* vha; TYPE_2__ d_id; } ;
struct TYPE_9__ {int vp_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(srb_t *VAR_3, struct logio_entry_24xx *VAR_4)
{
 VAR_4->entry_type = VAR_2;
 VAR_4->control_flags =
     FUNC_0(VAR_0|VAR_1);
 VAR_4->nport_handle = FUNC_0(VAR_3->fcport->loop_id);
 VAR_4->port_id[0] = VAR_3->fcport->d_id.b.al_pa;
 VAR_4->port_id[1] = VAR_3->fcport->d_id.b.area;
 VAR_4->port_id[2] = VAR_3->fcport->d_id.b.domain;
 VAR_4->vp_index = VAR_3->fcport->vha->vp_idx;
}
