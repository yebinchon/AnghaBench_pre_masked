
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_device {unsigned long request_state; int dev; } ;
struct acpi_video_device {int dummy; } ;


 int FUNC_0 (struct acpi_video_device*,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct output_device *VAR_0)
{
 unsigned long VAR_1 = VAR_0->request_state;
 struct acpi_video_device *VAR_2=
  (struct acpi_video_device *)FUNC_1(&VAR_0->dev);
 return FUNC_0(VAR_2, VAR_1);
}
