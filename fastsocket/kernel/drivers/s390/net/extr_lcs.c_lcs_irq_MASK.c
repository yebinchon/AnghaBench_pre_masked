
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_channel {scalar_t__ state; int io_idx; int irq_tasklet; struct ccw_device* ccwdev; scalar_t__ iob; struct ccw1* ccws; } ;
struct lcs_card {int wait_q; struct lcs_channel write; struct lcs_channel read; } ;
struct TYPE_3__ {int cstat; int dstat; int fctl; int actl; scalar_t__ cpa; scalar_t__ cc; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;
struct ccw_device {int dev; } ;
struct ccw1 {int dummy; } ;
typedef int addr_t ;


 struct lcs_card* FUNC_0 (struct ccw_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int ,char*,int,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct lcs_channel*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ccw_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int) ;
 scalar_t__ FUNC_7 (struct ccw_device*,struct irb*) ;
 int FUNC_8 (struct ccw_device*,struct irb*) ;
 int FUNC_9 (struct lcs_card*) ;
 int FUNC_10 (int *) ;
 int VAR_16 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct ccw_device *VAR_17, unsigned long VAR_18, struct irb *VAR_19)
{
 struct lcs_card *VAR_20;
 struct lcs_channel *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;

 if (FUNC_7(VAR_17, VAR_19))
  return;

 VAR_20 = FUNC_0(VAR_17);
 if (VAR_20->read.ccwdev == VAR_17)
  VAR_21 = &VAR_20->read;
 else
  VAR_21 = &VAR_20->write;

 VAR_24 = VAR_19->scsw.cmd.cstat;
 VAR_25 = VAR_19->scsw.cmd.dstat;
 FUNC_1(5, VAR_16, "Rint%s", FUNC_5(&VAR_17->dev));
 FUNC_1(5, VAR_16, "%4x%4x", VAR_19->scsw.cmd.cstat,
        VAR_19->scsw.cmd.dstat);
 FUNC_1(5, VAR_16, "%4x%4x", VAR_19->scsw.cmd.fctl,
        VAR_19->scsw.cmd.actl);


 VAR_22 = FUNC_8(VAR_17, VAR_19);
 if (VAR_22 || (VAR_25 & VAR_3)) {
  FUNC_6(&VAR_17->dev,
   "The LCS device stopped because of an error,"
   " dstat=0x%X, cstat=0x%X \n",
       VAR_25, VAR_24);
  if (VAR_22) {
   VAR_21->state = VAR_5;
  }
 }
 if (VAR_21->state == VAR_5) {
  FUNC_9(VAR_20);
  FUNC_11(&VAR_20->wait_q);
  return;
 }

 if ((VAR_21->state != VAR_7) &&
     (VAR_19->scsw.cmd.fctl & VAR_15) &&
     (VAR_19->scsw.cmd.cpa != 0)) {
  VAR_23 = (struct ccw1 *) FUNC_3((addr_t) VAR_19->scsw.cmd.cpa)
   - VAR_21->ccws;
  if ((VAR_19->scsw.cmd.actl & VAR_12) ||
      (VAR_19->scsw.cmd.cstat & VAR_11))

   VAR_23 = (VAR_23 - 1) & (VAR_10 - 1);
  while (VAR_21->io_idx != VAR_23) {
   FUNC_2(VAR_21,
            VAR_21->iob + VAR_21->io_idx);
   VAR_21->io_idx =
    (VAR_21->io_idx + 1) & (VAR_10 - 1);
  }
 }

 if ((VAR_19->scsw.cmd.dstat & VAR_1) ||
     (VAR_19->scsw.cmd.dstat & VAR_0) ||
     (VAR_19->scsw.cmd.dstat & VAR_2))

  VAR_21->state = VAR_8;
 else if (VAR_19->scsw.cmd.actl & VAR_12)

  VAR_21->state = VAR_9;
 if (VAR_19->scsw.cmd.fctl & VAR_14) {
  if (VAR_19->scsw.cmd.cc != 0) {
   FUNC_4(VAR_21->ccwdev, (addr_t) VAR_21);
   return;
  }

  VAR_21->state = VAR_6;
 }
 if (VAR_19->scsw.cmd.fctl & VAR_13)
  VAR_21->state = VAR_4;

 FUNC_10(&VAR_21->irq_tasklet);
}
