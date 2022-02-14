
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct net_device {int dummy; } ;
struct hso_net {void* mux_bulk_tx_buf; void* mux_bulk_tx_urb; void** mux_bulk_rx_buf_pool; void** mux_bulk_rx_urb_pool; void* out_endp; void* in_endp; struct hso_device* parent; struct net_device* net; } ;
struct TYPE_2__ {struct hso_net* dev_net; } ;
struct hso_device {TYPE_1__ port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct hso_device*) ;
 struct net_device* FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 struct hso_device* FUNC_5 (struct usb_interface*,int) ;
 int FUNC_6 (struct hso_device*,struct usb_interface*) ;
 int FUNC_7 (struct hso_device*) ;
 void* FUNC_8 (struct usb_interface*,int ,int ) ;
 int FUNC_9 (struct hso_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_10 (int ,int ) ;
 struct hso_net* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 void* FUNC_13 (int ,int ) ;

__attribute__((used)) static struct hso_device *FUNC_14(struct usb_interface *VAR_9,
      int VAR_10)
{
 int VAR_11, VAR_12;
 struct net_device *VAR_13;
 struct hso_net *VAR_14;
 struct hso_device *VAR_15;

 VAR_15 = FUNC_5(VAR_9, VAR_10);
 if (!VAR_15)
  return ((void*)0);



 VAR_13 = FUNC_3(sizeof(struct hso_net), "hso%d", VAR_7);
 if (!VAR_13) {
  FUNC_4(&VAR_9->dev, "Unable to create ethernet device\n");
  goto exit;
 }

 VAR_14 = FUNC_11(VAR_13);

 VAR_15->port_data.dev_net = VAR_14;
 VAR_14->net = VAR_13;
 VAR_14->parent = VAR_15;

 VAR_14->in_endp = FUNC_8(VAR_9, VAR_6,
          VAR_4);
 if (!VAR_14->in_endp) {
  FUNC_4(&VAR_9->dev, "Can't find BULK IN endpoint\n");
  goto exit;
 }
 VAR_14->out_endp = FUNC_8(VAR_9, VAR_6,
           VAR_5);
 if (!VAR_14->out_endp) {
  FUNC_4(&VAR_9->dev, "Can't find BULK OUT endpoint\n");
  goto exit;
 }
 FUNC_0(VAR_13, &VAR_9->dev);
 FUNC_1(VAR_13, &VAR_8);


 VAR_11 = FUNC_12(VAR_13);
 if (VAR_11) {
  FUNC_4(&VAR_9->dev, "Failed to register device\n");
  goto exit;
 }


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_14->mux_bulk_rx_urb_pool[VAR_12] = FUNC_13(0, VAR_0);
  if (!VAR_14->mux_bulk_rx_urb_pool[VAR_12]) {
   FUNC_4(&VAR_9->dev, "Could not allocate rx urb\n");
   goto exit;
  }
  VAR_14->mux_bulk_rx_buf_pool[VAR_12] = FUNC_10(VAR_2,
          VAR_0);
  if (!VAR_14->mux_bulk_rx_buf_pool[VAR_12]) {
   FUNC_4(&VAR_9->dev, "Could not allocate rx buf\n");
   goto exit;
  }
 }
 VAR_14->mux_bulk_tx_urb = FUNC_13(0, VAR_0);
 if (!VAR_14->mux_bulk_tx_urb) {
  FUNC_4(&VAR_9->dev, "Could not allocate tx urb\n");
  goto exit;
 }
 VAR_14->mux_bulk_tx_buf = FUNC_10(VAR_3, VAR_0);
 if (!VAR_14->mux_bulk_tx_buf) {
  FUNC_4(&VAR_9->dev, "Could not allocate tx buf\n");
  goto exit;
 }

 FUNC_2(VAR_15);

 FUNC_9(VAR_15);

 FUNC_6(VAR_15, VAR_9);

 return VAR_15;
exit:
 FUNC_7(VAR_15);
 return ((void*)0);
}
