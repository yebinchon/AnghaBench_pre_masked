
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {TYPE_5__* skb; int head; int truesize; } ;
struct mcs_cb {TYPE_1__ rx_buff; int irlap; int qos; TYPE_2__* usbdev; int rx_time; scalar_t__ receiving; int ep_out; int ep_in; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {int devnum; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,int *,char*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct mcs_cb*) ;
 int FUNC_7 (struct mcs_cb*) ;
 int FUNC_8 (struct mcs_cb*) ;
 struct mcs_cb* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_2)
{
 struct mcs_cb *VAR_3 = FUNC_9(VAR_2);
 char VAR_4[16];
 int VAR_5 = 0;

 VAR_5 = FUNC_13(VAR_3->usbdev,
        FUNC_15(VAR_3->usbdev, VAR_3->ep_in));
 if (VAR_5)
  goto error1;
 VAR_5 = FUNC_13(VAR_3->usbdev,
        FUNC_14(VAR_3->usbdev, VAR_3->ep_out));
 if (VAR_5)
  goto error1;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5)
  goto error1;

 VAR_5 = -VAR_0;


 VAR_3->receiving = 0;
 VAR_3->rx_buff.truesize = VAR_1;
 VAR_3->rx_buff.skb = FUNC_1(VAR_1);
 if (!VAR_3->rx_buff.skb)
  goto error1;

 FUNC_11(VAR_3->rx_buff.skb, 1);
 VAR_3->rx_buff.head = VAR_3->rx_buff.skb->data;
 FUNC_2(&VAR_3->rx_time);






 FUNC_12(VAR_4, "usb#%d", VAR_3->usbdev->devnum);
 VAR_3->irlap = FUNC_4(VAR_2, &VAR_3->qos, VAR_4);
 if (!VAR_3->irlap) {
  FUNC_0("mcs7780: irlap_open failed\n");
  goto error2;
 }

 if (!FUNC_8(VAR_3))
 goto error3;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  goto error3;

 FUNC_10(VAR_2);
 return 0;

 error3:
  FUNC_3(VAR_3->irlap);
 error2:
  FUNC_5(VAR_3->rx_buff.skb);
 error1:
  return VAR_5;
}
