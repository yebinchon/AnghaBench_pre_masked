
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* pdev; } ;
struct drm_connector {int connector_type; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (struct acpi_device*,int,int,void**) ;
 void* FUNC_3 (void*,int ,int ) ;

void *
FUNC_4(struct drm_device *VAR_3, struct drm_connector *VAR_4)
{
 struct acpi_device *VAR_5;
 acpi_handle VAR_6;
 int VAR_7, VAR_8;
 void *VAR_9;

 switch (VAR_4->connector_type) {
 case 129:
 case 128:
  VAR_7 = VAR_0;
  break;
 default:
  return ((void*)0);
 }

 VAR_6 = FUNC_0(&VAR_3->pdev->dev);
 if (!VAR_6)
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_6, &VAR_5);
 if (VAR_8)
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_5, VAR_7, -1, &VAR_9);
 if (VAR_8 < 0)
  return ((void*)0);

 return FUNC_3(VAR_9, VAR_1, VAR_2);
}
