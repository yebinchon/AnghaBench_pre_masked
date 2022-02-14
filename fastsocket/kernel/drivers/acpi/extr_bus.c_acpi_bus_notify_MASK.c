
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* notify ) (struct acpi_device*,int ) ;} ;
struct acpi_driver {int flags; TYPE_1__ ops; } ;
struct acpi_device {struct acpi_driver* driver; } ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,struct acpi_device**) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (struct acpi_device*,int ) ;

__attribute__((used)) static void FUNC_6(acpi_handle VAR_3, u32 VAR_4, void *VAR_5)
{
 struct acpi_device *VAR_6 = ((void*)0);
 struct acpi_driver *VAR_7;

 FUNC_0((VAR_0, "Notification %#02x to handle %p\n",
     VAR_4, VAR_3));

 FUNC_4(&VAR_2,
  VAR_4, (void *)VAR_3);

 switch (VAR_4) {

 case 135:
  FUNC_2(VAR_3);




  break;

 case 133:
  FUNC_1(VAR_3);




  break;

 case 131:

  break;

 case 130:

  break;

 case 132:

  break;

 case 129:

  break;

 case 134:

  break;

 case 128:

  break;

 default:
  FUNC_0((VAR_0,
      "Received unknown/unsupported notification [%08x]\n",
      VAR_4));
  break;
 }

 FUNC_3(VAR_3, &VAR_6);
 if (VAR_6) {
  VAR_7 = VAR_6->driver;
  if (VAR_7 && VAR_7->ops.notify &&
      (VAR_7->flags & VAR_1))
   VAR_7->ops.notify(VAR_6, VAR_4);
 }
}
