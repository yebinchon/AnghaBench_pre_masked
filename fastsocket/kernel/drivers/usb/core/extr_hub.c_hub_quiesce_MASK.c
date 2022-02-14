
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clear_work; scalar_t__ hub; } ;
struct usb_hub {int quiescing; TYPE_1__ tt; int leds; scalar_t__ has_indicators; int urb; int init_work; struct usb_device* hdev; } ;
struct usb_device {int maxchild; scalar_t__* children; } ;
typedef enum hub_quiescing_type { ____Placeholder_hub_quiescing_type } hub_quiescing_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_hub *VAR_1, enum hub_quiescing_type VAR_2)
{
 struct usb_device *VAR_3 = VAR_1->hdev;
 int VAR_4;

 FUNC_0(&VAR_1->init_work);


 VAR_1->quiescing = 1;

 if (VAR_2 != VAR_0) {

  for (VAR_4 = 0; VAR_4 < VAR_3->maxchild; ++VAR_4) {
   if (VAR_3->children[VAR_4])
    FUNC_2(&VAR_3->children[VAR_4]);
  }
 }


 FUNC_3(VAR_1->urb);
 if (VAR_1->has_indicators)
  FUNC_0(&VAR_1->leds);
 if (VAR_1->tt.hub)
  FUNC_1(&VAR_1->tt.clear_work);
}
