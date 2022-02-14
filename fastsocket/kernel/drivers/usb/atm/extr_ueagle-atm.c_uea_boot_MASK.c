
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct uea_softc {scalar_t__ kthread; int work_q; int * urb_int; TYPE_6__* usb_dev; int sync_q; int task; int send_cmvs; int stat; int schedule_load_page; int dispatch_cmv; } ;
struct intr_pkt {int dummy; } ;
struct TYPE_13__ {TYPE_5__* actconfig; } ;
struct TYPE_12__ {TYPE_4__** interface; } ;
struct TYPE_11__ {TYPE_3__* altsetting; } ;
struct TYPE_10__ {TYPE_2__* endpoint; } ;
struct TYPE_8__ {int bInterval; } ;
struct TYPE_9__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct uea_softc*) ;
 scalar_t__ FUNC_3 (struct uea_softc*) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct intr_pkt*) ;
 struct intr_pkt* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int ,struct uea_softc*,char*) ;
 int FUNC_10 (struct uea_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,TYPE_6__*,int ,struct intr_pkt*,int,int ,struct uea_softc*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_6__*,int ) ;
 int FUNC_19 (int *,int ) ;

__attribute__((used)) static int FUNC_20(struct uea_softc *VAR_19)
{
 int VAR_20, VAR_21;
 struct intr_pkt *VAR_22;

 FUNC_11(FUNC_2(VAR_19));

 if (FUNC_3(VAR_19) == VAR_3) {
  VAR_21 = VAR_2;
  VAR_19->dispatch_cmv = VAR_8;
  VAR_19->schedule_load_page = VAR_14;
  VAR_19->stat = VAR_18;
  VAR_19->send_cmvs = VAR_16;
  FUNC_1(&VAR_19->task, VAR_12);
 } else {
  VAR_21 = VAR_1;
  VAR_19->dispatch_cmv = VAR_7;
  VAR_19->schedule_load_page = VAR_13;
  VAR_19->stat = VAR_17;
  VAR_19->send_cmvs = VAR_15;
  FUNC_1(&VAR_19->task, VAR_11);
 }

 FUNC_6(&VAR_19->sync_q);

 VAR_19->work_q = FUNC_4("ueagle-dsp");
 if (!VAR_19->work_q) {
  FUNC_12(FUNC_2(VAR_19), "cannot allocate workqueue\n");
  FUNC_13(FUNC_2(VAR_19));
  return -VAR_4;
 }

 if (FUNC_3(VAR_19) == VAR_0)
  FUNC_10(VAR_19);

 VAR_22 = FUNC_8(VAR_21, VAR_5);
 if (!VAR_22) {
  FUNC_12(FUNC_2(VAR_19),
         "cannot allocate interrupt package\n");
  goto err0;
 }

 VAR_19->urb_int = FUNC_14(0, VAR_5);
 if (!VAR_19->urb_int) {
  FUNC_12(FUNC_2(VAR_19), "cannot allocate interrupt URB\n");
  goto err1;
 }

 FUNC_15(VAR_19->urb_int, VAR_19->usb_dev,
    FUNC_18(VAR_19->usb_dev, VAR_6),
    VAR_22, VAR_21, VAR_9, VAR_19,
    VAR_19->usb_dev->actconfig->interface[0]->altsetting[0].
    endpoint[0].desc.bInterval);

 VAR_20 = FUNC_19(VAR_19->urb_int, VAR_5);
 if (VAR_20 < 0) {
  FUNC_12(FUNC_2(VAR_19),
         "urb submition failed with error %d\n", VAR_20);
  goto err1;
 }

 VAR_19->kthread = FUNC_9(VAR_10, VAR_19, "ueagle-atm");
 if (VAR_19->kthread == FUNC_0(-VAR_4)) {
  FUNC_12(FUNC_2(VAR_19), "failed to create thread\n");
  goto err2;
 }

 FUNC_13(FUNC_2(VAR_19));
 return 0;

err2:
 FUNC_17(VAR_19->urb_int);
err1:
 FUNC_16(VAR_19->urb_int);
 VAR_19->urb_int = ((void*)0);
 FUNC_7(VAR_22);
err0:
 FUNC_5(VAR_19->work_q);
 FUNC_13(FUNC_2(VAR_19));
 return -VAR_4;
}
