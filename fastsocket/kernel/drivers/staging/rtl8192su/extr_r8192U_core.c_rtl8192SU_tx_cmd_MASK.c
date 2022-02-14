
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ PktSize; int LINIP; } ;
typedef TYPE_1__ tx_desc_cmd_819x_usb ;
struct urb {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; scalar_t__ cb; } ;
struct r8192_priv {int * RtOutPipes; int udev; int * tx_pending; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {size_t queue_index; int bLastIniPkt; } ;
typedef TYPE_2__ cb_desc ;


 short VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int VAR_4 ;
 unsigned int FUNC_5 (struct r8192_priv*,size_t) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int ,int ,scalar_t__,scalar_t__,int ,struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;

short FUNC_10(struct net_device *VAR_5, struct sk_buff *VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;
 struct urb *VAR_9;
 unsigned int VAR_10;
 tx_desc_cmd_819x_usb *VAR_11 = (tx_desc_cmd_819x_usb *)VAR_6->data;
 cb_desc *VAR_12 = (cb_desc *)(VAR_6->cb + VAR_2);
 u8 VAR_13 = VAR_12->queue_index;
 u32 VAR_14 = 0;


 FUNC_0(&VAR_7->tx_pending[VAR_13]);

 VAR_9 = FUNC_6(0,VAR_1);
 if(!VAR_9){
  FUNC_1(VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_11, 0, VAR_3);


 VAR_11->LINIP = VAR_12->bLastIniPkt;
 VAR_14 = (u16)(VAR_6->len - VAR_3);
 VAR_11->PktSize = VAR_14;





 VAR_10 = FUNC_5(VAR_7,VAR_13);


 FUNC_7(VAR_9,
                             VAR_7->udev,
                             FUNC_8(VAR_7->udev,VAR_7->RtOutPipes[VAR_10]),
                             VAR_6->data,
                             VAR_6->len,
                             VAR_4,
                             VAR_6);

 VAR_8 = FUNC_9(VAR_9, VAR_1);
 if (!VAR_8){
  return 0;
 }else{
  FUNC_4("Error TX CMD URB, error %d",
    VAR_8);
  return -1;
 }
}
