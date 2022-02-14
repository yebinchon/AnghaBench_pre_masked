
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tf ;
struct ata_taskfile {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {int flags; int err_mask; TYPE_2__ result_tf; } ;
struct ata_port {int pflags; } ;
struct TYPE_3__ {int err_mask; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {int sactive; struct ata_device* device; struct ata_eh_context eh_context; struct ata_port* ap; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_device*,int*,struct ata_taskfile*) ;
 int FUNC_2 (struct ata_link*,int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,struct ata_taskfile*,int) ;
 int FUNC_4 (struct ata_taskfile*,int ,int) ;

void FUNC_5(struct ata_link *VAR_9)
{
 struct ata_port *VAR_10 = VAR_9->ap;
 struct ata_eh_context *VAR_11 = &VAR_9->eh_context;
 struct ata_device *VAR_12 = VAR_9->device;
 struct ata_queued_cmd *VAR_13;
 struct ata_taskfile VAR_14;
 int VAR_15, VAR_16;


 if (VAR_10->pflags & VAR_3)
  return;


 if (!VAR_9->sactive || !(VAR_11->i.err_mask & VAR_0))
  return;


 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  VAR_13 = FUNC_0(VAR_10, VAR_15);

  if (!(VAR_13->flags & VAR_4))
   continue;

  if (VAR_13->err_mask)
   return;
 }


 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_16 = FUNC_1(VAR_12, &VAR_15, &VAR_14);
 if (VAR_16) {
  FUNC_2(VAR_9, VAR_8, "failed to read log page 10h "
    "(errno=%d)\n", VAR_16);
  return;
 }

 if (!(VAR_9->sactive & (1 << VAR_15))) {
  FUNC_2(VAR_9, VAR_8, "log page 10h reported "
    "inactive tag %d\n", VAR_15);
  return;
 }


 VAR_13 = FUNC_0(VAR_10, VAR_15);
 FUNC_3(&VAR_13->result_tf, &VAR_14, sizeof(VAR_14));
 VAR_13->result_tf.flags = VAR_5 | VAR_6 | VAR_7;
 VAR_13->err_mask |= VAR_0 | VAR_1;
 VAR_11->i.err_mask &= ~VAR_0;
}
