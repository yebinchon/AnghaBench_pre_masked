
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iio_interrupt {int dummy; } ;
struct iio_event_interface {int dummy; } ;
struct TYPE_10__ {int kobj; } ;
struct iio_dev {int num_interrupt_lines; TYPE_3__* event_interfaces; TYPE_3__* interrupts; TYPE_1__* event_attrs; TYPE_5__ dev; int driver_module; } ;
struct TYPE_9__ {int id; scalar_t__ _attrname; scalar_t__ _name; int owner; } ;
struct TYPE_8__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int) ;
 int FUNC_1 (struct iio_dev*,int) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,char const*,int ,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__,int,char*,int) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6;

 if (VAR_3->num_interrupt_lines == 0)
  return 0;

 VAR_3->event_interfaces =
  FUNC_8(sizeof(struct iio_event_interface)
   *VAR_3->num_interrupt_lines,
   VAR_1);
 if (VAR_3->event_interfaces == ((void*)0)) {
  VAR_4 = -VAR_0;
  goto error_ret;
 }

 VAR_3->interrupts = FUNC_8(sizeof(struct iio_interrupt *)
           *VAR_3->num_interrupt_lines,
           VAR_1);
 if (VAR_3->interrupts == ((void*)0)) {
  VAR_4 = -VAR_0;
  goto error_free_event_interfaces;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_interrupt_lines; VAR_5++) {
  VAR_3->event_interfaces[VAR_5].owner = VAR_3->driver_module;
  VAR_4 = FUNC_5(&VAR_2);
  if (VAR_4)
   goto error_free_setup_ev_ints;
  else
   VAR_3->event_interfaces[VAR_5].id = VAR_4;

  FUNC_9(VAR_3->event_interfaces[VAR_5]._name, 20,
    "event_line%d",
   VAR_3->event_interfaces[VAR_5].id);

  VAR_4 = FUNC_6(&VAR_3->event_interfaces[VAR_5],
           (const char *)(VAR_3
            ->event_interfaces[VAR_5]
            ._name),
           VAR_3->driver_module,
           &VAR_3->dev);
  if (VAR_4) {
   FUNC_2(&VAR_3->dev,
    "Could not get chrdev interface\n");
   FUNC_4(&VAR_2,
      VAR_3->event_interfaces[VAR_5].id);
   goto error_free_setup_ev_ints;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_interrupt_lines; VAR_5++) {
  FUNC_9(VAR_3->event_interfaces[VAR_5]._attrname, 20,
   "event_line%d_sources", VAR_5);
  VAR_3->event_attrs[VAR_5].name
   = (const char *)
   (VAR_3->event_interfaces[VAR_5]._attrname);
  VAR_4 = FUNC_10(&VAR_3->dev.kobj,
      &VAR_3->event_attrs[VAR_5]);
  if (VAR_4) {
   FUNC_2(&VAR_3->dev,
    "Failed to register sysfs for event attrs");
   goto error_remove_sysfs_interfaces;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_interrupt_lines; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3, VAR_5);
  if (VAR_4)
   goto error_unregister_config_attrs;
 }

 return 0;

error_unregister_config_attrs:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_1(VAR_3, VAR_5);
 VAR_5 = VAR_3->num_interrupt_lines - 1;
error_remove_sysfs_interfaces:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_11(&VAR_3->dev.kobj,
       &VAR_3->event_attrs[VAR_6]);
 VAR_5 = VAR_3->num_interrupt_lines - 1;
error_free_setup_ev_ints:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_4(&VAR_2,
     VAR_3->event_interfaces[VAR_5].id);
  FUNC_3(&VAR_3->event_interfaces[VAR_6]);
 }
 FUNC_7(VAR_3->interrupts);
error_free_event_interfaces:
 FUNC_7(VAR_3->event_interfaces);
error_ret:

 return VAR_4;
}
