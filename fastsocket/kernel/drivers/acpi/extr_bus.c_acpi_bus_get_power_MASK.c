
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ power_resources; scalar_t__ explicit_get; } ;
struct TYPE_12__ {int state; TYPE_4__ flags; } ;
struct TYPE_11__ {int bus_id; } ;
struct TYPE_7__ {int power_manageable; } ;
struct acpi_device {TYPE_6__ power; TYPE_5__ pnp; int handle; TYPE_3__* parent; TYPE_1__ flags; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_8__ {int state; } ;
struct TYPE_9__ {TYPE_2__ power; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (int ,char*,int *,unsigned long long*) ;
 int FUNC_4 (struct acpi_device*) ;

int FUNC_5(acpi_handle VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 acpi_status VAR_7 = 0;
 struct acpi_device *VAR_8 = ((void*)0);
 unsigned long long VAR_9 = 0;


 VAR_6 = FUNC_2(VAR_4, &VAR_8);
 if (VAR_6)
  return VAR_6;

 *VAR_5 = VAR_2;

 if (!VAR_8->flags.power_manageable) {

  if (VAR_8->parent)
   *VAR_5 = VAR_8->parent->power.state;
  else
   *VAR_5 = VAR_1;
 } else {




  if (VAR_8->power.flags.explicit_get) {
   VAR_7 = FUNC_3(VAR_8->handle, "_PSC",
             ((void*)0), &VAR_9);
   if (FUNC_1(VAR_7))
    return -VAR_3;
   VAR_8->power.state = (int)VAR_9;
  } else if (VAR_8->power.flags.power_resources) {
   VAR_6 = FUNC_4(VAR_8);
   if (VAR_6)
    return VAR_6;
  }

  *VAR_5 = VAR_8->power.state;
 }

 FUNC_0((VAR_0, "Device [%s] power state is D%d\n",
     VAR_8->pnp.bus_id, VAR_8->power.state));

 return 0;
}
