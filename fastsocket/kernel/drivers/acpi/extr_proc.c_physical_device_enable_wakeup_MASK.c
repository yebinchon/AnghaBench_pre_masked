
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int enabled; } ;
struct TYPE_4__ {TYPE_1__ state; } ;
struct acpi_device {TYPE_2__ wakeup; int handle; } ;


 struct device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_0)
{
 struct device *VAR_1 = FUNC_0(VAR_0->handle);

 if (VAR_1 && FUNC_1(VAR_1))
  FUNC_2(VAR_1, VAR_0->wakeup.state.enabled);
}
