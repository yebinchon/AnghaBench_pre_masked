
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int protocol; int flags; } ;
struct ata_queued_cmd {TYPE_2__* dev; TYPE_3__ tf; struct ata_port* ap; } ;
struct ata_port {int flags; void* hsm_task_state; TYPE_1__* ops; } ;
struct TYPE_7__ {int flags; int devno; } ;
struct TYPE_6__ {int (* bmdma_setup ) (struct ata_queued_cmd*) ;int (* sff_tf_load ) (struct ata_port*,TYPE_3__*) ;int (* bmdma_start ) (struct ata_queued_cmd*) ;} ;


 unsigned int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ata_port*,int ,int,int ) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int FUNC_4 (struct ata_port*,int ) ;
 int FUNC_5 (struct ata_port*,TYPE_3__*) ;
 int FUNC_6 (struct ata_port*,TYPE_3__*) ;
 int FUNC_7 (struct ata_queued_cmd*) ;
 int FUNC_8 (struct ata_queued_cmd*) ;
 int FUNC_9 (struct ata_port*,TYPE_3__*) ;
 int FUNC_10 (struct ata_queued_cmd*) ;

unsigned int FUNC_11(struct ata_queued_cmd *VAR_8)
{
 struct ata_port *VAR_9 = VAR_8->ap;




 if (VAR_9->flags & VAR_2) {
  switch (VAR_8->tf.protocol) {
  case 128:
  case 129:
  case 131:
  case 132:
   VAR_8->tf.flags |= VAR_3;
   break;
  case 133:
   if (VAR_8->dev->flags & VAR_1)

    FUNC_0();
   break;
  default:
   break;
  }
 }


 FUNC_2(VAR_9, VAR_8->dev->devno, 1, 0);


 switch (VAR_8->tf.protocol) {
 case 129:
  if (VAR_8->tf.flags & VAR_3)
   FUNC_3(VAR_8);

  FUNC_5(VAR_9, &VAR_8->tf);
  VAR_9->hsm_task_state = VAR_7;

  if (VAR_8->tf.flags & VAR_3)
   FUNC_4(VAR_9, 0);

  break;

 case 130:
  FUNC_1(VAR_8->tf.flags & VAR_3);

  VAR_9->ops->sff_tf_load(VAR_9, &VAR_8->tf);
  VAR_9->ops->bmdma_setup(VAR_8);
  VAR_9->ops->bmdma_start(VAR_8);
  VAR_9->hsm_task_state = VAR_7;
  break;

 case 128:
  if (VAR_8->tf.flags & VAR_3)
   FUNC_3(VAR_8);

  FUNC_5(VAR_9, &VAR_8->tf);

  if (VAR_8->tf.flags & VAR_4) {

   VAR_9->hsm_task_state = VAR_6;
   FUNC_4(VAR_9, 0);




  } else {

   VAR_9->hsm_task_state = VAR_5;

   if (VAR_8->tf.flags & VAR_3)
    FUNC_4(VAR_9, 0);





  }

  break;

 case 131:
 case 132:
  if (VAR_8->tf.flags & VAR_3)
   FUNC_3(VAR_8);

  FUNC_5(VAR_9, &VAR_8->tf);

  VAR_9->hsm_task_state = VAR_6;


  if ((!(VAR_8->dev->flags & VAR_1)) ||
      (VAR_8->tf.flags & VAR_3))
   FUNC_4(VAR_9, 0);
  break;

 case 133:
  FUNC_1(VAR_8->tf.flags & VAR_3);

  VAR_9->ops->sff_tf_load(VAR_9, &VAR_8->tf);
  VAR_9->ops->bmdma_setup(VAR_8);
  VAR_9->hsm_task_state = VAR_6;


  if (!(VAR_8->dev->flags & VAR_1))
   FUNC_4(VAR_9, 0);
  break;

 default:
  FUNC_1(1);
  return VAR_0;
 }

 return 0;
}
