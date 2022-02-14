
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int flags; int * data; } ;
struct TYPE_14__ {TYPE_4__ logio; } ;
struct srb_iocb {TYPE_5__ u; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ u; int handle; int name; TYPE_7__* fcport; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_10__ {int al_pa; int area; int domain; } ;
struct TYPE_11__ {TYPE_1__ b; } ;
struct TYPE_16__ {int vha; int flags; TYPE_2__ d_id; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_7__*,int *) ;
 int FUNC_2 (int ,TYPE_7__*,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_6)
{
 srb_t *VAR_7 = (srb_t *)VAR_6;
 fc_port_t *VAR_8 = VAR_7->fcport;

 FUNC_0(VAR_5, VAR_8->vha, 0x2071,
     "Async-%s timeout - hdl=%x portid=%02x%02x%02x.\n",
     VAR_7->name, VAR_7->handle, VAR_8->d_id.b.domain, VAR_8->d_id.b.area,
     VAR_8->d_id.b.al_pa);

 VAR_8->flags &= ~VAR_0;
 if (VAR_7->type == VAR_3) {
  struct srb_iocb *VAR_9 = &VAR_7->u.iocb_cmd;
  FUNC_2(VAR_8->vha, VAR_8, ((void*)0));

  VAR_9->u.logio.data[0] = VAR_1;
  VAR_9->u.logio.data[1] = VAR_9->u.logio.flags & VAR_4 ?
      VAR_2 : 0;
  FUNC_1(VAR_8->vha, VAR_8,
      VAR_9->u.logio.data);
 }
}
