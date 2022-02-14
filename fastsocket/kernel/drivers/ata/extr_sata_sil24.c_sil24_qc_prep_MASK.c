
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sil24_prb {int fis; void* ctrl; void* prot; } ;
struct TYPE_7__ {int cdb; struct sil24_sge* sge; struct sil24_prb prb; } ;
struct TYPE_6__ {struct sil24_sge* sge; struct sil24_prb prb; } ;
union sil24_cmd_block {TYPE_2__ atapi; TYPE_1__ ata; } ;
typedef int u16 ;
struct sil24_sge {int dummy; } ;
struct sil24_port_priv {union sil24_cmd_block* cmd_block; } ;
struct TYPE_10__ {int flags; int protocol; } ;
struct ata_queued_cmd {int flags; TYPE_4__* dev; TYPE_5__ tf; int cdb; int tag; struct ata_port* ap; } ;
struct ata_port {struct sil24_port_priv* private_data; } ;
struct TYPE_9__ {TYPE_3__* link; int cdb_len; } ;
struct TYPE_8__ {int pmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct ata_queued_cmd*,struct sil24_sge*) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ata_queued_cmd *VAR_8)
{
 struct ata_port *VAR_9 = VAR_8->ap;
 struct sil24_port_priv *VAR_10 = VAR_9->private_data;
 union sil24_cmd_block *VAR_11;
 struct sil24_prb *VAR_12;
 struct sil24_sge *VAR_13;
 u16 VAR_14 = 0;

 VAR_11 = &VAR_10->cmd_block[FUNC_8(VAR_8->tag)];

 if (!FUNC_0(VAR_8->tf.protocol)) {
  VAR_12 = &VAR_11->ata.prb;
  VAR_13 = VAR_11->ata.sge;
  if (FUNC_1(VAR_8->tf.protocol)) {
   u16 VAR_15 = 0;
   VAR_14 = VAR_4;
   if (FUNC_2(VAR_8->tf.protocol))
    VAR_15 |= VAR_5;
   if (VAR_8->tf.flags & VAR_1)
    VAR_15 |= VAR_7;
   else
    VAR_15 |= VAR_6;
   VAR_12->prot = FUNC_4(VAR_15);
  }
 } else {
  VAR_12 = &VAR_11->atapi.prb;
  VAR_13 = VAR_11->atapi.sge;
  FUNC_6(VAR_11->atapi.cdb, 0, 32);
  FUNC_5(VAR_11->atapi.cdb, VAR_8->cdb, VAR_8->dev->cdb_len);

  if (FUNC_1(VAR_8->tf.protocol)) {
   if (VAR_8->tf.flags & VAR_1)
    VAR_14 = VAR_3;
   else
    VAR_14 = VAR_2;
  }
 }

 VAR_12->ctrl = FUNC_4(VAR_14);
 FUNC_3(&VAR_8->tf, VAR_8->dev->link->pmp, 1, VAR_12->fis);

 if (VAR_8->flags & VAR_0)
  FUNC_7(VAR_8, VAR_13);
}
