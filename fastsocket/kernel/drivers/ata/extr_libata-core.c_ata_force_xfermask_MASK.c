
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; int xfer_mask; } ;
struct ata_force_ent {int port; int device; TYPE_2__ param; } ;
struct ata_device {int devno; unsigned long udma_mask; unsigned long mwdma_mask; unsigned long pio_mask; TYPE_3__* link; } ;
struct TYPE_6__ {int pmp; TYPE_1__* ap; } ;
struct TYPE_4__ {int print_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,int ,char*,int ) ;
 struct ata_force_ent* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_3)
{
 int VAR_4 = VAR_3->link->pmp + VAR_3->devno;
 int VAR_5 = VAR_4;
 int VAR_6;


 if (FUNC_1(VAR_3->link))
  VAR_5 += 15;

 for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--) {
  const struct ata_force_ent *VAR_7 = &VAR_1[VAR_6];
  unsigned long VAR_8, VAR_9, VAR_10;

  if (VAR_7->port != -1 && VAR_7->port != VAR_3->link->ap->print_id)
   continue;

  if (VAR_7->device != -1 && VAR_7->device != VAR_4 &&
      VAR_7->device != VAR_5)
   continue;

  if (!VAR_7->param.xfer_mask)
   continue;

  FUNC_2(VAR_7->param.xfer_mask,
        &VAR_8, &VAR_9, &VAR_10);
  if (VAR_10)
   VAR_3->udma_mask = VAR_10;
  else if (VAR_9) {
   VAR_3->udma_mask = 0;
   VAR_3->mwdma_mask = VAR_9;
  } else {
   VAR_3->udma_mask = 0;
   VAR_3->mwdma_mask = 0;
   VAR_3->pio_mask = VAR_8;
  }

  FUNC_0(VAR_3, VAR_0,
   "FORCE: xfer_mask set to %s\n", VAR_7->param.name);
  return;
 }
}
