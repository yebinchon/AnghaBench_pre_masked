
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {int outhead; int outtail; int ctrlhead; int ctrltail; scalar_t__ urbctrl; scalar_t__ last_ctrl; int iofl; TYPE_2__* ctrl; scalar_t__ urbout; scalar_t__ last_out; TYPE_1__* out; } ;
struct hid_report {int size; scalar_t__ id; scalar_t__ type; } ;
struct hid_device {int quirks; int dev; struct usbhid_device* driver_data; } ;
struct TYPE_4__ {unsigned char dir; struct hid_report* report; void* raw_report; } ;
struct TYPE_3__ {struct hid_report* report; void* raw_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hid_report*,void*) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;
 scalar_t__ FUNC_4 (struct hid_device*) ;
 int VAR_10 ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct hid_device *VAR_11, struct hid_report *VAR_12,
       unsigned char VAR_13)
{
 int VAR_14;
 struct usbhid_device *VAR_15 = VAR_11->driver_data;
 int VAR_16 = ((VAR_12->size - 1) >> 3) + 1 + (VAR_12->id > 0);

 if ((VAR_11->quirks & VAR_6) && VAR_13 == VAR_8)
  return;

 if (VAR_15->urbout && VAR_13 == VAR_9 && VAR_12->type == VAR_4) {
  if ((VAR_14 = (VAR_15->outhead + 1) & (VAR_3 - 1)) == VAR_15->outtail) {
   FUNC_1(&VAR_11->dev, "output queue full\n");
   return;
  }

  VAR_15->out[VAR_15->outhead].raw_report = FUNC_5(VAR_16, VAR_0);
  if (!VAR_15->out[VAR_15->outhead].raw_report) {
   FUNC_1(&VAR_11->dev, "output queueing failed\n");
   return;
  }
  FUNC_2(VAR_12, VAR_15->out[VAR_15->outhead].raw_report);
  VAR_15->out[VAR_15->outhead].report = VAR_12;
  VAR_15->outhead = VAR_14;

  if (!FUNC_6(VAR_5, &VAR_15->iofl)) {
   if (FUNC_4(VAR_11))
    FUNC_0(VAR_5, &VAR_15->iofl);
  } else {







   if (FUNC_7(VAR_10, VAR_15->last_out + VAR_7 * 5))
    FUNC_8(VAR_15->urbout);
  }
  return;
 }

 if ((VAR_14 = (VAR_15->ctrlhead + 1) & (VAR_1 - 1)) == VAR_15->ctrltail) {
  FUNC_1(&VAR_11->dev, "control queue full\n");
  return;
 }

 if (VAR_13 == VAR_9) {
  VAR_15->ctrl[VAR_15->ctrlhead].raw_report = FUNC_5(VAR_16, VAR_0);
  if (!VAR_15->ctrl[VAR_15->ctrlhead].raw_report) {
   FUNC_1(&VAR_11->dev, "control queueing failed\n");
   return;
  }
  FUNC_2(VAR_12, VAR_15->ctrl[VAR_15->ctrlhead].raw_report);
 }
 VAR_15->ctrl[VAR_15->ctrlhead].report = VAR_12;
 VAR_15->ctrl[VAR_15->ctrlhead].dir = VAR_13;
 VAR_15->ctrlhead = VAR_14;

 if (!FUNC_6(VAR_2, &VAR_15->iofl)) {
  if (FUNC_3(VAR_11))
   FUNC_0(VAR_2, &VAR_15->iofl);
 } else {







  if (FUNC_7(VAR_10, VAR_15->last_ctrl + VAR_7 * 5))
   FUNC_8(VAR_15->urbctrl);
 }
}
