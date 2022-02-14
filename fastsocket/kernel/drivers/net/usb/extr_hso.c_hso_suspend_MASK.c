
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_6__ {struct usb_interface* interface; } ;
struct TYPE_5__ {struct usb_interface* interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__** VAR_2 ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_4, pm_message_t VAR_5)
{
 int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_3[VAR_6] && (VAR_3[VAR_6]->interface == VAR_4)) {
   VAR_7 = FUNC_1(VAR_3[VAR_6]);
   if (VAR_7)
    goto out;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2[VAR_6] &&
      (VAR_2[VAR_6]->interface == VAR_4)) {
   VAR_7 = FUNC_0(VAR_2[VAR_6]);
   if (VAR_7)
    goto out;
  }
 }

out:
 return 0;
}
