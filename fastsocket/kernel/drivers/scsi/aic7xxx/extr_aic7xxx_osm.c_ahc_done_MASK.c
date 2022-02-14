
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t u_int ;
struct scsi_cmnd {int result; scalar_t__ underflow; size_t cmd_len; int* cmnd; int device; scalar_t__* sense_buffer; } ;
struct scb_tailq {int dummy; } ;
struct scb {int flags; struct scsi_cmnd* io_ctx; TYPE_2__* platform_data; TYPE_1__* hscb; } ;
struct ahc_softc {TYPE_3__* platform_data; struct scb_tailq* untagged_queues; } ;
struct ahc_linux_device {scalar_t__ active; int openings; scalar_t__ tag_success_count; scalar_t__ maxtags; scalar_t__ commands_since_idle_or_otag; int qfrozen; } ;
struct TYPE_8__ {int tqe; } ;
struct TYPE_7__ {scalar_t__ eh_done; } ;
struct TYPE_6__ {struct ahc_linux_device* dev; } ;
struct TYPE_5__ {int tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct scb*,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct ahc_softc*,struct scb*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct scb_tailq*) ;
 int FUNC_4 (struct scb_tailq*,struct scb*,int ) ;
 int VAR_16 ;
 int FUNC_5 (struct ahc_softc*) ;
 int FUNC_6 (struct ahc_softc*,struct scb*) ;
 scalar_t__ FUNC_7 (struct scb*) ;
 scalar_t__ FUNC_8 (struct scb*) ;
 scalar_t__ FUNC_9 (struct scb*) ;
 scalar_t__ FUNC_10 (struct scb*) ;
 int FUNC_11 (struct ahc_softc*,int ,struct scb*) ;
 int FUNC_12 (struct ahc_softc*,struct scsi_cmnd*) ;
 int FUNC_13 (struct ahc_softc*,struct scb*) ;
 int FUNC_14 (struct ahc_softc*,struct scb*) ;
 int FUNC_15 (struct scb*,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 TYPE_4__ VAR_17 ;
 int FUNC_17 (char*) ;
 int VAR_18 ;
 int FUNC_18 (char*,...) ;

void
FUNC_19(struct ahc_softc *VAR_19, struct scb *VAR_20)
{
 struct scsi_cmnd *VAR_21;
 struct ahc_linux_device *VAR_22;

 FUNC_1(VAR_20, VAR_18);
 if ((VAR_20->flags & VAR_14) != 0) {
  struct scb_tailq *VAR_23;
  int VAR_24;

  VAR_24 = FUNC_2(VAR_19, VAR_20);
  VAR_23 = &(VAR_19->untagged_queues[VAR_24]);
  FUNC_4(VAR_23, VAR_20, VAR_17.tqe);
  FUNC_0(!FUNC_3(VAR_23));
 } else if ((VAR_20->flags & VAR_11) == 0) {





  FUNC_18("SCB %d done'd twice\n", VAR_20->hscb->tag);
  FUNC_5(VAR_19);
  FUNC_17("Stopping for safety");
 }
 VAR_21 = VAR_20->io_ctx;
 VAR_22 = VAR_20->platform_data->dev;
 VAR_22->active--;
 VAR_22->openings++;
 if ((VAR_21->result & (VAR_5 << 16)) != 0) {
  VAR_21->result &= ~(VAR_5 << 16);
  VAR_22->qfrozen--;
 }
 FUNC_13(VAR_19, VAR_20);







 VAR_21->sense_buffer[0] = 0;
 if (FUNC_9(VAR_20) == VAR_8) {
  uint32_t VAR_25;

  VAR_25 =
      FUNC_10(VAR_20) - FUNC_7(VAR_20);
  if ((VAR_20->flags & VAR_13) != 0) {






   FUNC_15(VAR_20, VAR_10);
  } else {
   FUNC_15(VAR_20, VAR_7);
  }
 } else if (FUNC_9(VAR_20) == VAR_9) {
  FUNC_11(VAR_19, VAR_21->device, VAR_20);
 }

 if (VAR_22->openings == 1
  && FUNC_9(VAR_20) == VAR_7
  && FUNC_8(VAR_20) != VAR_15)
  VAR_22->tag_success_count++;






 if ((VAR_22->openings + VAR_22->active) < VAR_22->maxtags
  && VAR_22->tag_success_count > VAR_1) {
  VAR_22->tag_success_count = 0;
  VAR_22->openings++;
 }

 if (VAR_22->active == 0)
  VAR_22->commands_since_idle_or_otag = 0;

 if ((VAR_20->flags & VAR_12) != 0) {
  FUNC_18("Recovery SCB completes\n");
  if (FUNC_9(VAR_20) == VAR_2
   || FUNC_9(VAR_20) == VAR_6)
   FUNC_15(VAR_20, VAR_3);

  if (VAR_19->platform_data->eh_done)
   FUNC_16(VAR_19->platform_data->eh_done);
 }

 FUNC_6(VAR_19, VAR_20);
 FUNC_12(VAR_19, VAR_21);
}
