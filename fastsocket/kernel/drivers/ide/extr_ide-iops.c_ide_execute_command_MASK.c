
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int command; } ;
struct ide_cmd {scalar_t__ protocol; TYPE_2__ tf; } ;
struct TYPE_10__ {int lock; TYPE_1__* tp_ops; } ;
typedef TYPE_3__ ide_hwif_t ;
typedef int ide_handler_t ;
struct TYPE_11__ {int atapi_flags; TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;
struct TYPE_8__ {int (* exec_command ) (TYPE_3__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_3__*,int ) ;

void FUNC_5(ide_drive_t *VAR_3, struct ide_cmd *VAR_4,
    ide_handler_t *VAR_5, unsigned VAR_6)
{
 ide_hwif_t *VAR_7 = VAR_3->hwif;
 unsigned long VAR_8;

 FUNC_2(&VAR_7->lock, VAR_8);
 if ((VAR_4->protocol != VAR_0 &&
      VAR_4->protocol != VAR_1) ||
     (VAR_3->atapi_flags & VAR_2))
  FUNC_0(VAR_3, VAR_5, VAR_6);
 VAR_7->tp_ops->exec_command(VAR_7, VAR_4->tf.command);






 FUNC_1(400);
 FUNC_3(&VAR_7->lock, VAR_8);
}
