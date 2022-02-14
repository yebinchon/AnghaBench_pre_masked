
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usbnet {scalar_t__ hard_mtu; int maxpacket; int rx_urb_size; TYPE_1__* driver_info; int out; int udev; int data; struct net_device* net; } ;
struct usb_interface {int dev; } ;
struct rndis_set_c {int dummy; } ;
struct rndis_set {void* msg_len; int msg_type; void* offset; void* len; int oid; } ;
struct rndis_query_c {int dummy; } ;
struct rndis_query {int dummy; } ;
typedef void rndis_msg_hdr ;
struct rndis_init_c {int packet_alignment; int max_transfer_size; } ;
struct rndis_init {void* max_transfer_size; void* minor_version; void* major_version; void* msg_len; int msg_type; } ;
struct rndis_halt {void* msg_len; int msg_type; void* offset; void* len; int oid; } ;
struct rndis_data_hdr {int dummy; } ;
struct net_device {scalar_t__ hard_header_len; scalar_t__ mtu; int perm_addr; int dev_addr; int * netdev_ops; } ;
struct cdc_state {int * data; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ (* early_init ) (struct usbnet*) ;} ;


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
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char*,int) ;
 int FUNC_9 (struct rndis_set*,int ,int) ;
 scalar_t__ FUNC_10 (struct usbnet*) ;
 int FUNC_11 (struct usbnet*,void*,int ) ;
 int VAR_17 ;
 int FUNC_12 (struct usbnet*,struct usb_interface*,void*,int ,int,void**,int*) ;
 scalar_t__ FUNC_13 (struct usbnet*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct usbnet*,struct usb_interface*) ;

int
FUNC_19(struct usbnet *VAR_18, struct usb_interface *VAR_19, int VAR_20)
{
 int VAR_21;
 struct net_device *VAR_22 = VAR_18->net;
 struct cdc_state *VAR_23 = (void *) &VAR_18->data;
 union {
  void *buf;
  struct rndis_msg_hdr *header;
  struct rndis_init *init;
  struct rndis_init_c *init_c;
  struct rndis_query *get;
  struct rndis_query_c *get_c;
  struct rndis_set *set;
  struct rndis_set_c *set_c;
  struct rndis_halt *halt;
 } VAR_24;
 u32 VAR_25;
 __le32 VAR_26, *VAR_27;
 int VAR_28;
 unsigned char *VAR_29;


 VAR_24.buf = FUNC_6(VAR_0, VAR_7);
 if (!VAR_24.buf)
  return -VAR_3;
 VAR_21 = FUNC_18(VAR_18, VAR_19);
 if (VAR_21 < 0)
  goto fail;

 VAR_24.init->msg_type = VAR_13;
 VAR_24.init->msg_len = FUNC_0(sizeof *VAR_24.init);
 VAR_24.init->major_version = FUNC_0(1);
 VAR_24.init->minor_version = FUNC_0(0);
 VAR_22->hard_header_len += sizeof (struct rndis_data_hdr);
 VAR_18->hard_mtu = VAR_22->mtu + VAR_22->hard_header_len;

 VAR_18->maxpacket = FUNC_16(VAR_18->udev, VAR_18->out, 1);
 if (VAR_18->maxpacket == 0) {
  if (FUNC_10(VAR_18))
   FUNC_1(&VAR_19->dev, "dev->maxpacket can't be 0\n");
  VAR_21 = -VAR_1;
  goto fail_and_release;
 }

 VAR_18->rx_urb_size = VAR_18->hard_mtu + (VAR_18->maxpacket + 1);
 VAR_18->rx_urb_size &= ~(VAR_18->maxpacket - 1);
 VAR_24.init->max_transfer_size = FUNC_0(VAR_18->rx_urb_size);

 VAR_22->netdev_ops = &VAR_17;

 VAR_21 = FUNC_11(VAR_18, VAR_24.header, VAR_0);
 if (FUNC_14(VAR_21 < 0)) {

  FUNC_2(&VAR_19->dev, "RNDIS init failed, %d\n", VAR_21);
  goto fail_and_release;
 }
 VAR_25 = FUNC_7(VAR_24.init_c->max_transfer_size);
 if (VAR_25 < VAR_18->hard_mtu) {
  if (VAR_25 <= VAR_22->hard_header_len) {
   FUNC_2(&VAR_19->dev,
    "dev can't take %u byte packets (max %u)\n",
    VAR_18->hard_mtu, VAR_25);
   VAR_21 = -VAR_1;
   goto halt_fail_and_release;
  }
  FUNC_3(&VAR_19->dev,
    "dev can't take %u byte packets (max %u), "
    "adjusting MTU to %u\n",
    VAR_18->hard_mtu, VAR_25, VAR_25 - VAR_22->hard_header_len);
  VAR_18->hard_mtu = VAR_25;
  VAR_22->mtu = VAR_18->hard_mtu - VAR_22->hard_header_len;
 }


 FUNC_1(&VAR_19->dev,
  "hard mtu %u (%u from dev), rx buflen %Zu, align %d\n",
  VAR_18->hard_mtu, VAR_25, VAR_18->rx_urb_size,
  1 << FUNC_7(VAR_24.init_c->packet_alignment));



 if (VAR_18->driver_info->early_init &&
   VAR_18->driver_info->early_init(VAR_18) != 0)
  goto halt_fail_and_release;


 VAR_27 = ((void*)0);
 VAR_28 = sizeof *VAR_27;
 VAR_21 = FUNC_12(VAR_18, VAR_19, VAR_24.buf, VAR_10,
   0, (void **) &VAR_27, &VAR_28);
 if (VAR_21 != 0 || !VAR_27) {

  VAR_26 = VAR_15;
  VAR_27 = &VAR_26;
 }
 if ((VAR_20 & VAR_6) &&
   *VAR_27 != VAR_16) {
  if (FUNC_10(VAR_18))
   FUNC_1(&VAR_19->dev, "driver requires wireless "
    "physical medium, but device is not.\n");
  VAR_21 = -VAR_2;
  goto halt_fail_and_release;
 }
 if ((VAR_20 & VAR_5) &&
   *VAR_27 == VAR_16) {
  if (FUNC_10(VAR_18))
   FUNC_1(&VAR_19->dev, "driver requires non-wireless "
    "physical medium, but device is wireless.\n");
  VAR_21 = -VAR_2;
  goto halt_fail_and_release;
 }


 VAR_28 = VAR_4;
 VAR_21 = FUNC_12(VAR_18, VAR_19, VAR_24.buf, VAR_8,
   48, (void **) &VAR_29, &VAR_28);
 if (FUNC_14(VAR_21< 0)) {
  FUNC_2(&VAR_19->dev, "rndis get ethaddr, %d\n", VAR_21);
  goto halt_fail_and_release;
 }
 FUNC_8(VAR_22->dev_addr, VAR_29, VAR_4);
 FUNC_8(VAR_22->perm_addr, VAR_29, VAR_4);


 FUNC_9(VAR_24.set, 0, sizeof *VAR_24.set);
 VAR_24.set->msg_type = VAR_14;
 VAR_24.set->msg_len = FUNC_0(4 + sizeof *VAR_24.set);
 VAR_24.set->oid = VAR_9;
 VAR_24.set->len = FUNC_0(4);
 VAR_24.set->offset = FUNC_0((sizeof *VAR_24.set) - 8);
 *(__le32 *)(VAR_24.buf + sizeof *VAR_24.set) = VAR_11;

 VAR_21 = FUNC_11(VAR_18, VAR_24.header, VAR_0);
 if (FUNC_14(VAR_21 < 0)) {
  FUNC_2(&VAR_19->dev, "rndis set packet filter, %d\n", VAR_21);
  goto halt_fail_and_release;
 }

 VAR_21 = 0;

 FUNC_5(VAR_24.buf);
 return VAR_21;

halt_fail_and_release:
 FUNC_9(VAR_24.halt, 0, sizeof *VAR_24.halt);
 VAR_24.halt->msg_type = VAR_12;
 VAR_24.halt->msg_len = FUNC_0(sizeof *VAR_24.halt);
 (void) FUNC_11(VAR_18, (void *)VAR_24.halt, VAR_0);
fail_and_release:
 FUNC_17(VAR_23->data, ((void*)0));
 FUNC_15(FUNC_4(VAR_19), VAR_23->data);
 VAR_23->data = ((void*)0);
fail:
 FUNC_5(VAR_24.buf);
 return VAR_21;
}
