
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_video_device {TYPE_1__* dev; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int
FUNC_1(struct acpi_video_device *VAR_0,
       unsigned long long *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->dev->handle, "_DCS", ((void*)0), VAR_1);

 return VAR_2;
}
