
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int command; int feature; } ;
struct ata_queued_cmd {int err_mask; int flags; TYPE_3__ tf; int tag; struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {int pflags; TYPE_1__* ops; } ;
struct ata_eh_info {int * dev_action; } ;
struct ata_device {size_t devno; int flags; TYPE_2__* link; } ;
struct TYPE_5__ {struct ata_eh_info eh_info; } ;
struct TYPE_4__ {scalar_t__ error_handler; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ata_queued_cmd*) ;
 int FUNC_6 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct ata_queued_cmd *VAR_9)
{
 struct ata_port *VAR_10 = VAR_9->ap;
 if (VAR_10->ops->error_handler) {
  struct ata_device *VAR_11 = VAR_9->dev;
  struct ata_eh_info *VAR_12 = &VAR_11->link->eh_info;

  if (FUNC_7(VAR_9->err_mask))
   VAR_9->flags |= VAR_5;

  if (FUNC_7(VAR_9->flags & VAR_5)) {

   FUNC_6(VAR_9);

   if (!FUNC_4(VAR_9->tag))
    FUNC_3(VAR_9);
   else
    FUNC_1(VAR_9);
   return;
  }

  FUNC_0(VAR_10->pflags & VAR_3);


  if (VAR_9->flags & VAR_6)
   FUNC_6(VAR_9);




  switch (VAR_9->tf.command) {
  case 130:
   if (VAR_9->tf.feature != VAR_8 &&
       VAR_9->tf.feature != VAR_7)
    break;

  case 131:
  case 129:

   VAR_12->dev_action[VAR_11->devno] |= VAR_2;
   FUNC_2(VAR_10);
   break;

  case 128:
   VAR_11->flags |= VAR_1;
   break;
  }

  if (FUNC_7(VAR_11->flags & VAR_0))
   FUNC_5(VAR_9);

  FUNC_1(VAR_9);
 } else {
  if (VAR_9->flags & VAR_4)
   return;


  if (VAR_9->err_mask || VAR_9->flags & VAR_6)
   FUNC_6(VAR_9);

  FUNC_1(VAR_9);
 }
}
