
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct fsg_dev {int running; int bulk_in_enabled; int bulk_out_enabled; int intr_in_enabled; int nluns; TYPE_1__* luns; TYPE_2__* intreq; int intr_in; int bulk_out; int bulk_in; struct fsg_buffhd* buffhds; int gadget; int atomic_bitflags; int bulk_out_maxpacket; } ;
struct fsg_buffhd {TYPE_2__* outreq; TYPE_2__* inreq; int buf; } ;
struct TYPE_5__ {int complete; struct fsg_buffhd* context; int buf; } ;
struct TYPE_4__ {int unit_attention_data; } ;


 int FUNC_0 (struct fsg_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fsg_dev*,int ,TYPE_2__**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fsg_dev*,int ,struct usb_endpoint_descriptor const*) ;
 struct usb_endpoint_descriptor* FUNC_4 (int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct fsg_dev *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;
 const struct usb_endpoint_descriptor *VAR_16;

 if (VAR_12->running)
  FUNC_0(VAR_12, "reset interface\n");

reset:

 for (VAR_15 = 0; VAR_15 < VAR_1; ++VAR_15) {
  struct fsg_buffhd *VAR_17 = &VAR_12->buffhds[VAR_15];

  if (VAR_17->inreq) {
   FUNC_8(VAR_12->bulk_in, VAR_17->inreq);
   VAR_17->inreq = ((void*)0);
  }
  if (VAR_17->outreq) {
   FUNC_8(VAR_12->bulk_out, VAR_17->outreq);
   VAR_17->outreq = ((void*)0);
  }
 }
 if (VAR_12->intreq) {
  FUNC_8(VAR_12->intr_in, VAR_12->intreq);
  VAR_12->intreq = ((void*)0);
 }


 if (VAR_12->bulk_in_enabled) {
  FUNC_7(VAR_12->bulk_in);
  VAR_12->bulk_in_enabled = 0;
 }
 if (VAR_12->bulk_out_enabled) {
  FUNC_7(VAR_12->bulk_out);
  VAR_12->bulk_out_enabled = 0;
 }
 if (VAR_12->intr_in_enabled) {
  FUNC_7(VAR_12->intr_in);
  VAR_12->intr_in_enabled = 0;
 }

 VAR_12->running = 0;
 if (VAR_13 < 0 || VAR_14 != 0)
  return VAR_14;

 FUNC_0(VAR_12, "set interface %d\n", VAR_13);


 VAR_16 = FUNC_4(VAR_12->gadget, &VAR_5, &VAR_8);
 if ((VAR_14 = FUNC_3(VAR_12, VAR_12->bulk_in, VAR_16)) != 0)
  goto reset;
 VAR_12->bulk_in_enabled = 1;

 VAR_16 = FUNC_4(VAR_12->gadget, &VAR_6, &VAR_9);
 if ((VAR_14 = FUNC_3(VAR_12, VAR_12->bulk_out, VAR_16)) != 0)
  goto reset;
 VAR_12->bulk_out_enabled = 1;
 VAR_12->bulk_out_maxpacket = FUNC_5(VAR_16->wMaxPacketSize);
 FUNC_2(VAR_0, &VAR_12->atomic_bitflags);

 if (FUNC_6()) {
  VAR_16 = FUNC_4(VAR_12->gadget, &VAR_7, &VAR_10);
  if ((VAR_14 = FUNC_3(VAR_12, VAR_12->intr_in, VAR_16)) != 0)
   goto reset;
  VAR_12->intr_in_enabled = 1;
 }


 for (VAR_15 = 0; VAR_15 < VAR_1; ++VAR_15) {
  struct fsg_buffhd *VAR_18 = &VAR_12->buffhds[VAR_15];

  if ((VAR_14 = FUNC_1(VAR_12, VAR_12->bulk_in, &VAR_18->inreq)) != 0)
   goto reset;
  if ((VAR_14 = FUNC_1(VAR_12, VAR_12->bulk_out, &VAR_18->outreq)) != 0)
   goto reset;
  VAR_18->inreq->buf = VAR_18->outreq->buf = VAR_18->buf;
  VAR_18->inreq->context = VAR_18->outreq->context = VAR_18;
  VAR_18->inreq->complete = VAR_3;
  VAR_18->outreq->complete = VAR_4;
 }
 if (FUNC_6()) {
  if ((VAR_14 = FUNC_1(VAR_12, VAR_12->intr_in, &VAR_12->intreq)) != 0)
   goto reset;
  VAR_12->intreq->complete = VAR_11;
 }

 VAR_12->running = 1;
 for (VAR_15 = 0; VAR_15 < VAR_12->nluns; ++VAR_15)
  VAR_12->luns[VAR_15].unit_attention_data = VAR_2;
 return VAR_14;
}
