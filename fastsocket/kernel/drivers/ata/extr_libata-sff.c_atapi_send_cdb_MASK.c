
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int protocol; } ;
struct ata_queued_cmd {TYPE_1__ tf; TYPE_3__* dev; int cdb; } ;
struct ata_port {TYPE_2__* ops; void* hsm_task_state; } ;
struct TYPE_6__ {int cdb_len; } ;
struct TYPE_5__ {int (* bmdma_start ) (struct ata_queued_cmd*) ;int (* sff_data_xfer ) (TYPE_3__*,int ,int,int) ;} ;





 int FUNC_0 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (TYPE_3__*,int ,int,int) ;
 int FUNC_4 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_2, struct ata_queued_cmd *VAR_3)
{

 FUNC_0("send cdb\n");
 FUNC_1(VAR_3->dev->cdb_len < 12);

 VAR_2->ops->sff_data_xfer(VAR_3->dev, VAR_3->cdb, VAR_3->dev->cdb_len, 1);
 FUNC_2(VAR_2);


 switch (VAR_3->tf.protocol) {
 case 128:
  VAR_2->hsm_task_state = VAR_0;
  break;
 case 129:
  VAR_2->hsm_task_state = VAR_1;
  break;
 case 130:
  VAR_2->hsm_task_state = VAR_1;

  VAR_2->ops->bmdma_start(VAR_3);
  break;
 }
}
