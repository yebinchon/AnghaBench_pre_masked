
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ata_taskfile {int command; int feature; } ;
struct TYPE_7__ {int feature; } ;
struct ata_queued_cmd {int err_mask; int flags; TYPE_3__ result_tf; TYPE_2__* scsicmd; TYPE_4__* dev; TYPE_1__* ap; } ;
struct TYPE_8__ {int class; } ;
struct TYPE_6__ {int sense_buffer; } ;
struct TYPE_5__ {int pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int FUNC_0 (TYPE_4__*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct ata_queued_cmd *VAR_17,
          const struct ata_taskfile *VAR_18)
{
 unsigned int VAR_19, VAR_20 = 0;
 u8 VAR_21 = VAR_18->command, VAR_22 = VAR_18->feature;

 if ((VAR_21 & (VAR_6 | VAR_9 | VAR_8)) != VAR_8) {
  VAR_17->err_mask |= VAR_2;
  return VAR_10;
 }

 if (VAR_21 & (VAR_11 | VAR_7))
  VAR_17->err_mask |= VAR_1;
 else
  return 0;

 switch (VAR_17->dev->class) {
 case 129:
  if (VAR_22 & VAR_12)
   VAR_17->err_mask |= VAR_0;
  if (VAR_22 & VAR_16)
   VAR_17->err_mask |= VAR_4;
  if (VAR_22 & VAR_13)
   VAR_17->err_mask |= VAR_3;
  break;

 case 128:
  if (!(VAR_17->ap->pflags & VAR_14)) {
   VAR_19 = FUNC_0(VAR_17->dev,
      VAR_17->scsicmd->sense_buffer,
      VAR_17->result_tf.feature >> 4);
   if (!VAR_19) {







    VAR_17->flags |= VAR_15;
   } else
    VAR_17->err_mask |= VAR_19;
  }
 }

 if (VAR_17->err_mask & (VAR_2 | VAR_5 | VAR_0))
  VAR_20 |= VAR_10;

 return VAR_20;
}
