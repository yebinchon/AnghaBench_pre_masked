
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int fxiocb_comp; } ;
struct TYPE_14__ {TYPE_3__ fxiocb; } ;
struct TYPE_18__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_15__ {TYPE_4__ u; TYPE_9__ timer; } ;
struct TYPE_16__ {TYPE_5__ iocb_cmd; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_6__ u; TYPE_2__* fcport; int free; } ;
typedef TYPE_7__ srb_t ;
struct TYPE_12__ {TYPE_1__* vha; } ;
struct TYPE_11__ {int hw; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void
FUNC_4(srb_t *VAR_5, unsigned long VAR_6)
{
 FUNC_3(&VAR_5->u.iocb_cmd.timer);
 VAR_5->u.iocb_cmd.timer.expires = VAR_2 + VAR_6 * VAR_0;
 VAR_5->u.iocb_cmd.timer.data = (unsigned long)VAR_5;
 VAR_5->u.iocb_cmd.timer.function = VAR_4;
 FUNC_1(&VAR_5->u.iocb_cmd.timer);
 VAR_5->free = VAR_3;
 if ((FUNC_0(VAR_5->fcport->vha->hw)) &&
     (VAR_5->type == VAR_1))
  FUNC_2(&VAR_5->u.iocb_cmd.u.fxiocb.fxiocb_comp);
}
