
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_port {int flags; } ;
struct TYPE_4__ {int flags; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct ata_device {int horkage; scalar_t__ xfer_shift; int* id; scalar_t__ pio_mode; scalar_t__ dma_mode; scalar_t__ xfer_mode; int flags; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; struct ata_port* ap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct ata_device*,int ,char*,...) ;
 int FUNC_2 (struct ata_device*,int ,int ) ;
 unsigned int FUNC_3 (struct ata_device*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ata_device *VAR_14)
{
 struct ata_port *VAR_15 = VAR_14->link->ap;
 struct ata_eh_context *VAR_16 = &VAR_14->link->eh_context;
 const bool VAR_17 = VAR_14->horkage & VAR_5;
 const char *VAR_18 = "";
 int VAR_19 = 0;
 unsigned int VAR_20 = 0;
 int VAR_21;

 VAR_14->flags &= ~VAR_2;
 if (VAR_14->xfer_shift == VAR_7)
  VAR_14->flags |= VAR_2;

 if (VAR_17 && VAR_15->flags & VAR_4 && FUNC_6(VAR_14->id))
  VAR_18 = " (SET_XFERMODE skipped)";
 else {
  if (VAR_17)
   FUNC_1(VAR_14, VAR_11,
           "NOSETXFER but PATA detected - can't "
           "skip SETXFER, might malfunction\n");
  VAR_20 = FUNC_3(VAR_14);
 }

 if (VAR_20 & ~VAR_0)
  goto fail;


 VAR_16->i.flags |= VAR_3;
 VAR_21 = FUNC_2(VAR_14, VAR_1, 0);
 VAR_16->i.flags &= ~VAR_3;
 if (VAR_21)
  return VAR_21;

 if (VAR_14->xfer_shift == VAR_7) {

  if (FUNC_5(VAR_14->id))
   VAR_19 = 1;


  if (FUNC_7(VAR_14->id) == 0 &&
     VAR_14->pio_mode <= VAR_13)
   VAR_19 = 1;



  if (!FUNC_4(VAR_14->id) && VAR_14->pio_mode <= VAR_13)
   VAR_19 = 1;
 }


 if (VAR_14->xfer_shift == VAR_6 &&
     VAR_14->dma_mode == VAR_12 &&
     (VAR_14->id[63] >> 8) & 1)
  VAR_19 = 1;


 if (VAR_14->xfer_mode == FUNC_10(FUNC_8(VAR_14->id)))
  VAR_19 = 1;

 if (VAR_20 & VAR_0) {
  if (!VAR_19)
   goto fail;
  else
   VAR_18 = " (device error ignored)";
 }

 FUNC_0("xfer_shift=%u, xfer_mode=0x%x\n",
  VAR_14->xfer_shift, (int)VAR_14->xfer_mode);

 FUNC_1(VAR_14, VAR_10, "configured for %s%s\n",
         FUNC_9(FUNC_11(VAR_14->xfer_mode)),
         VAR_18);

 return 0;

 fail:
 FUNC_1(VAR_14, VAR_9, "failed to set xfermode "
         "(err_mask=0x%x)\n", VAR_20);
 return -VAR_8;
}
