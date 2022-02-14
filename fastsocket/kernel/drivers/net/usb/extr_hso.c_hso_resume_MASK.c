
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct hso_net {int flags; int * skb_tx_buf; int net; } ;
struct TYPE_11__ {scalar_t__ open_count; } ;
struct TYPE_10__ {struct usb_interface* interface; } ;
struct TYPE_9__ {struct usb_interface* interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hso_net* FUNC_0 (TYPE_2__*) ;
 TYPE_5__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_2__** VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct hso_net *VAR_9;


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_5[VAR_7] && (VAR_5[VAR_7]->interface == VAR_6)) {
   if (FUNC_1(VAR_5[VAR_7])->open_count) {
    VAR_8 =
        FUNC_6(VAR_5[VAR_7], VAR_0);
    FUNC_3(FUNC_1(VAR_5[VAR_7]));
    if (VAR_8)
     goto out;
   }
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_4[VAR_7] &&
      (VAR_4[VAR_7]->interface == VAR_6)) {
   VAR_9 = FUNC_0(VAR_4[VAR_7]);
   if (VAR_9->flags & VAR_3) {


    if (VAR_9->skb_tx_buf) {
     FUNC_2(&VAR_6->dev,
      "Transmitting"
      " lingering data\n");
     FUNC_4(VAR_9->skb_tx_buf,
          VAR_9->net);
     VAR_9->skb_tx_buf = ((void*)0);
    }
    VAR_8 = FUNC_5(VAR_4[VAR_7]);
    if (VAR_8)
     goto out;
   }
  }
 }

out:
 return VAR_8;
}
