
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl8192_rx_info {int out_pipe; struct net_device* dev; struct urb* urb; } ;
struct r8192_priv {int rx_queue; int udev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int ,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device*VAR_4)
{
        struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_1(VAR_4);
        struct urb *VAR_6;
        struct sk_buff *VAR_7;
        struct rtl8192_rx_info *VAR_8;


        while (FUNC_3(&VAR_5->rx_queue) < VAR_1) {
                VAR_7 = FUNC_0(VAR_2, VAR_0);
                if (!VAR_7)
                        break;
         VAR_6 = FUNC_6(0, VAR_0);
                if (!VAR_6) {
                        FUNC_2(VAR_7);
                        break;
                }

                FUNC_7(VAR_6, VAR_5->udev,
                                  FUNC_8(VAR_5->udev, 3), FUNC_5(VAR_7),
                                  VAR_2, VAR_3, VAR_7);
                VAR_8 = (struct rtl8192_rx_info *) VAR_7->cb;
                VAR_8->urb = VAR_6;
                VAR_8->dev = VAR_4;
  VAR_8->out_pipe = 3;
                FUNC_4(&VAR_5->rx_queue, VAR_7);
                FUNC_9(VAR_6, VAR_0);
        }


        while (FUNC_3(&VAR_5->rx_queue) < VAR_1 + 3) {

                VAR_7 = FUNC_0(VAR_2 ,VAR_0);
                if (!VAR_7)
                        break;
                VAR_6 = FUNC_6(0, VAR_0);
                if (!VAR_6) {
                        FUNC_2(VAR_7);
                        break;
                }
                FUNC_7(VAR_6, VAR_5->udev,
                                  FUNC_8(VAR_5->udev, 9), FUNC_5(VAR_7),
                                  VAR_2, VAR_3, VAR_7);
                VAR_8 = (struct rtl8192_rx_info *) VAR_7->cb;
                VAR_8->urb = VAR_6;
                VAR_8->dev = VAR_4;
     VAR_8->out_pipe = 9;
                FUNC_4(&VAR_5->rx_queue, VAR_7);
  FUNC_9(VAR_6, VAR_0);
        }

        return 0;
}
