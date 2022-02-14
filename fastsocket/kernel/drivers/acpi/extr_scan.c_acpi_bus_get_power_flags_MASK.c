
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int valid; int explicit_set; } ;
struct TYPE_8__ {scalar_t__ count; } ;
struct acpi_device_power_state {int power; int latency; TYPE_2__ flags; TYPE_4__ resources; } ;
struct TYPE_5__ {int explicit_get; int inrush_current; int power_resources; } ;
struct TYPE_7__ {int state; struct acpi_device_power_state* states; TYPE_1__ flags; } ;
struct acpi_device {TYPE_3__ power; int handle; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,int *,TYPE_4__*) ;
 int FUNC_3 (int ,char*,int **) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_3)
{
 acpi_status VAR_4 = 0;
 acpi_handle VAR_5 = ((void*)0);
 u32 VAR_6 = 0;





 VAR_4 = FUNC_3(VAR_3->handle, "_PSC", &VAR_5);
 if (FUNC_0(VAR_4))
  VAR_3->power.flags.explicit_get = 1;
 VAR_4 = FUNC_3(VAR_3->handle, "_IRC", &VAR_5);
 if (FUNC_0(VAR_4))
  VAR_3->power.flags.inrush_current = 1;




 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++) {
  struct acpi_device_power_state *VAR_7 = &VAR_3->power.states[VAR_6];
  char VAR_8[5] = { '_', 'P', 'R', '0' + VAR_6, '\0' };


  FUNC_2(VAR_3->handle, VAR_8, ((void*)0),
     &VAR_7->resources);
  if (VAR_7->resources.count) {
   VAR_3->power.flags.power_resources = 1;
   VAR_7->flags.valid = 1;
  }


  VAR_8[2] = 'S';
  VAR_4 = FUNC_3(VAR_3->handle, VAR_8, &VAR_5);
  if (FUNC_0(VAR_4)) {
   VAR_7->flags.explicit_set = 1;
   VAR_7->flags.valid = 1;
  }


  if (VAR_7->resources.count || VAR_7->flags.explicit_set)
   VAR_7->flags.valid = 1;

  VAR_7->power = -1;
  VAR_7->latency = -1;
 }


 VAR_3->power.states[VAR_0].flags.valid = 1;
 VAR_3->power.states[VAR_0].power = 100;
 VAR_3->power.states[VAR_1].flags.valid = 1;
 VAR_3->power.states[VAR_1].power = 0;



 VAR_3->power.state = VAR_2;
 FUNC_1(VAR_3->handle, &(VAR_3->power.state));

 return 0;
}
