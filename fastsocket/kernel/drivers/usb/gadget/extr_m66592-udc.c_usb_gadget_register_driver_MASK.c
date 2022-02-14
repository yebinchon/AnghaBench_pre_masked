
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bus; } ;
struct usb_gadget_driver {scalar_t__ speed; int (* bind ) (TYPE_2__*) ;TYPE_1__ driver; int setup; } ;
struct TYPE_7__ {TYPE_1__* driver; } ;
struct TYPE_6__ {TYPE_3__ dev; } ;
struct m66592 {int old_vbus; TYPE_2__ gadget; struct usb_gadget_driver* driver; int timer; int scount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct m66592*,int,int ) ;
 int FUNC_3 (struct m66592*,int ) ;
 int FUNC_4 (struct m66592*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 struct m66592* VAR_11 ;

int FUNC_9(struct usb_gadget_driver *VAR_12)
{
 struct m66592 *VAR_13 = VAR_11;
 int VAR_14;

 if (!VAR_12
   || VAR_12->speed != VAR_9
   || !VAR_12->bind
   || !VAR_12->setup)
  return -VAR_1;
 if (!VAR_13)
  return -VAR_2;
 if (VAR_13->driver)
  return -VAR_0;


 VAR_12->driver.bus = ((void*)0);
 VAR_13->driver = VAR_12;
 VAR_13->gadget.dev.driver = &VAR_12->driver;

 VAR_14 = FUNC_0(&VAR_13->gadget.dev);
 if (VAR_14) {
  FUNC_7("device_add error (%d)\n", VAR_14);
  goto error;
 }

 VAR_14 = VAR_12->bind (&VAR_13->gadget);
 if (VAR_14) {
  FUNC_7("bind to driver error (%d)\n", VAR_14);
  FUNC_1(&VAR_13->gadget.dev);
  goto error;
 }

 FUNC_2(VAR_13, VAR_7 | VAR_6, VAR_3);
 if (FUNC_3(VAR_13, VAR_4) & VAR_8) {
  FUNC_4(VAR_13);

  VAR_13->old_vbus = FUNC_3(VAR_13,
      VAR_4) & VAR_8;
  VAR_13->scount = VAR_5;
  FUNC_5(&VAR_13->timer, VAR_10 + FUNC_6(50));
 }

 return 0;

error:
 VAR_13->driver = ((void*)0);
 VAR_13->gadget.dev.driver = ((void*)0);

 return VAR_14;
}
