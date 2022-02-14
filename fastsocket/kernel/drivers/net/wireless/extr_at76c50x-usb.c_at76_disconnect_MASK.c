
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct at76_priv {TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct at76_priv*) ;
 int FUNC_1 (int ,int *,char*) ;
 struct at76_priv* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_1)
{
 struct at76_priv *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_3(VAR_1, ((void*)0));


 if (!VAR_2)
  return;

 FUNC_4(VAR_2->hw->wiphy, "disconnecting\n");
 FUNC_0(VAR_2);
 FUNC_1(VAR_0, &VAR_1->dev, "disconnected\n");
}
