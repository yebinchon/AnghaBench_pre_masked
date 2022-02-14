
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {TYPE_2__* intf; } ;
struct hiddev {int exist; struct hid_device* hid; int existancelock; int list_lock; int list; int wait; } ;
struct hid_device {unsigned int maxcollection; size_t minor; struct hiddev* hiddev; TYPE_1__* collection; struct usbhid_device* driver_data; } ;
struct TYPE_4__ {size_t minor; } ;
struct TYPE_3__ {scalar_t__ type; int usage; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 struct hiddev** VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hiddev*) ;
 struct hiddev* FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int *) ;

int FUNC_11(struct hid_device *VAR_5, unsigned int VAR_6)
{
 struct hiddev *VAR_7;
 struct usbhid_device *VAR_8 = VAR_5->driver_data;
 int VAR_9;

 if (!VAR_6) {
  unsigned int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_5->maxcollection; VAR_10++)
   if (VAR_5->collection[VAR_10].type ==
       VAR_2 &&
       !FUNC_1(VAR_5->collection[VAR_10].usage))
    break;

  if (VAR_10 == VAR_5->maxcollection)
   return -1;
 }

 if (!(VAR_7 = FUNC_5(sizeof(struct hiddev), VAR_0)))
  return -1;

 FUNC_3(&VAR_7->wait);
 FUNC_0(&VAR_7->list);
 FUNC_8(&VAR_7->list_lock);
 FUNC_7(&VAR_7->existancelock);
 VAR_5->hiddev = VAR_7;
 VAR_7->hid = VAR_5;
 VAR_7->exist = 1;



 FUNC_6();
 VAR_9 = FUNC_10(VAR_8->intf, &VAR_3);
 if (VAR_9) {
  FUNC_2("Not able to get a minor for this device.");
  VAR_5->hiddev = ((void*)0);
  FUNC_9();
  FUNC_4(VAR_7);
  return -1;
 } else {
  VAR_5->minor = VAR_8->intf->minor;
  VAR_4[VAR_8->intf->minor - VAR_1] = VAR_7;
 }
 FUNC_9();

 return 0;
}
