
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_12__ {int devt; int * type; struct device* parent; int * class; } ;
struct TYPE_13__ {struct module* owner; } ;
struct TYPE_11__ {TYPE_8__ chrdev; scalar_t__ flags; struct iio_event_interface* private; } ;
struct TYPE_10__ {int list; } ;
struct iio_event_interface {int max_events; TYPE_3__ dev; TYPE_2__ handler; int wait; TYPE_1__ det_events; scalar_t__ current_events; int event_list_lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (TYPE_8__*,int *) ;
 int FUNC_5 (TYPE_3__*,char*,char const*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*) ;

int FUNC_14(struct iio_event_interface *VAR_4,
       const char *VAR_5,
       struct module *VAR_6,
       struct device *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_4->dev.class = &VAR_0;
 VAR_4->dev.parent = VAR_7;
 VAR_4->dev.type = &VAR_3;
 FUNC_7(&VAR_4->dev);

 VAR_9 = FUNC_10();
 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto error_device_put;
 }
 VAR_4->dev.devt = FUNC_2(FUNC_1(VAR_1), VAR_9);
 FUNC_5(&VAR_4->dev, "%s", VAR_5);

 VAR_8 = FUNC_6(&VAR_4->dev);
 if (VAR_8)
  goto error_free_minor;

 FUNC_4(&VAR_4->handler.chrdev, &VAR_2);
 VAR_4->handler.chrdev.owner = VAR_6;

 FUNC_12(&VAR_4->event_list_lock);

 VAR_4->max_events = 10;
 VAR_4->current_events = 0;
 FUNC_0(&VAR_4->det_events.list);
 FUNC_11(&VAR_4->wait);
 VAR_4->handler.private = VAR_4;
 VAR_4->handler.flags = 0;

 VAR_8 = FUNC_3(&VAR_4->handler.chrdev, VAR_4->dev.devt, 1);
 if (VAR_8)
  goto error_unreg_device;

 return 0;

error_unreg_device:
 FUNC_8(&VAR_4->dev);
error_free_minor:
 FUNC_9(VAR_9);
error_device_put:
 FUNC_13(&VAR_4->dev);

 return VAR_8;
}
