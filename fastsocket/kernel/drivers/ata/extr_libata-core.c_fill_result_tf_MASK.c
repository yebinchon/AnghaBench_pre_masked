
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; TYPE_1__ result_tf; struct ata_port* ap; } ;
struct ata_port {TYPE_3__* ops; } ;
struct TYPE_6__ {int (* qc_fill_rtf ) (struct ata_queued_cmd*) ;} ;


 int FUNC_0 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;

 VAR_0->result_tf.flags = VAR_0->tf.flags;
 VAR_1->ops->qc_fill_rtf(VAR_0);
}
