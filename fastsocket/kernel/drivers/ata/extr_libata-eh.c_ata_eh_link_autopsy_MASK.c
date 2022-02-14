
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ata_queued_cmd {int flags; int err_mask; struct ata_device* dev; int result_tf; } ;
struct TYPE_5__ {unsigned int err_mask; } ;
struct TYPE_6__ {TYPE_1__ i; } ;
struct TYPE_7__ {TYPE_2__ eh_context; } ;
struct ata_port {int pflags; TYPE_3__ link; } ;
struct TYPE_8__ {int flags; int action; int err_mask; int* dev_action; struct ata_device* dev; int probe_mask; int serror; } ;
struct ata_eh_context {TYPE_4__ i; } ;
struct ata_link {struct ata_device* device; struct ata_eh_context eh_context; struct ata_port* ap; } ;
struct ata_device {size_t devno; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*) ;
 int VAR_21 ;
 int VAR_22 ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,int) ;
 scalar_t__ FUNC_2 (struct ata_device*) ;
 struct ata_link* FUNC_3 (struct ata_device*) ;
 int FUNC_4 (struct ata_link*) ;
 int FUNC_5 (struct ata_link*) ;
 int FUNC_6 (struct ata_queued_cmd*,int *) ;
 int FUNC_7 (struct ata_device*,unsigned int,unsigned int) ;
 int FUNC_8 (struct ata_link*) ;
 int FUNC_9 (struct ata_link*) ;
 int FUNC_10 (struct ata_link*,int ,int *) ;

__attribute__((used)) static void FUNC_11(struct ata_link *VAR_23)
{
 struct ata_port *VAR_24 = VAR_23->ap;
 struct ata_eh_context *VAR_25 = &VAR_23->eh_context;
 struct ata_device *VAR_26;
 unsigned int VAR_27 = 0, VAR_28 = 0;
 int VAR_29;
 u32 VAR_30;
 int VAR_31;

 FUNC_0("ENTER\n");

 if (VAR_25->i.flags & VAR_11)
  return;


 VAR_31 = FUNC_10(VAR_23, VAR_22, &VAR_30);
 if (VAR_31 == 0) {
  VAR_25->i.serror |= VAR_30;
  FUNC_5(VAR_23);
 } else if (VAR_31 != -VAR_21) {

  VAR_25->i.probe_mask |= VAR_7;
  VAR_25->i.action |= VAR_13;
  VAR_25->i.err_mask |= VAR_5;
 }


 FUNC_4(VAR_23);


 if (VAR_25->i.err_mask & ~VAR_5)
  VAR_25->i.err_mask &= ~VAR_5;

 VAR_27 |= VAR_25->i.err_mask;

 for (VAR_29 = 0; VAR_29 < VAR_15; VAR_29++) {
  struct ata_queued_cmd *VAR_32 = FUNC_1(VAR_24, VAR_29);

  if (!(VAR_32->flags & VAR_17) ||
      FUNC_3(VAR_32->dev) != VAR_23)
   continue;


  VAR_32->err_mask |= VAR_25->i.err_mask;


  VAR_25->i.action |= FUNC_6(VAR_32, &VAR_32->result_tf);


  if (VAR_32->err_mask & VAR_0)
   VAR_32->err_mask &= ~(VAR_1 | VAR_4 |
       VAR_3);


  if (VAR_32->err_mask & ~VAR_5)
   VAR_32->err_mask &= ~VAR_5;


  if (VAR_32->flags & VAR_20)
   VAR_32->err_mask &= ~(VAR_1 | VAR_5);


  if (VAR_32->flags & VAR_18 ||
      (!(VAR_32->err_mask & VAR_3) &&
       VAR_32->err_mask != VAR_1))
   VAR_32->flags |= VAR_19;


  VAR_25->i.dev = VAR_32->dev;
  VAR_27 |= VAR_32->err_mask;
  if (VAR_32->flags & VAR_18)
   VAR_28 |= VAR_10;
 }


 if (VAR_24->pflags & VAR_16 ||
     VAR_27 & (VAR_2 | VAR_6))
  VAR_25->i.action |= VAR_13;
 else if (((VAR_28 & VAR_10) && VAR_27) ||
   (!(VAR_28 & VAR_10) && (VAR_27 & ~VAR_1)))
  VAR_25->i.action |= VAR_14;




 if (VAR_25->i.dev) {
  VAR_25->i.dev_action[VAR_25->i.dev->devno] |=
   VAR_25->i.action & VAR_12;
  VAR_25->i.action &= ~VAR_12;
 }


 if ((VAR_27 & VAR_6) && !FUNC_8(VAR_23))
  VAR_24->link.eh_context.i.err_mask |= VAR_6;


 VAR_26 = VAR_25->i.dev;
 if (!VAR_26 && ((FUNC_9(VAR_23) == 1 &&
        FUNC_2(VAR_23->device))))
     VAR_26 = VAR_23->device;

 if (VAR_26) {
  if (VAR_26->flags & VAR_8)
   VAR_28 |= VAR_9;
  VAR_25->i.action |= FUNC_7(VAR_26, VAR_28, VAR_27);
 }

 FUNC_0("EXIT\n");
}
