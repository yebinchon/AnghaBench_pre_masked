
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int brightness; int * event_count; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct acpi_device *VAR_4, u32 VAR_5)
{

 if (!VAR_3)
  return;






 if (VAR_5 > VAR_0)
  return;

 if ((VAR_5 & ~((u32) VAR_2)) < 16)
  VAR_3->brightness = (VAR_5 & ~((u32) VAR_2));
 else if ((VAR_5 & ~((u32) VAR_1)) < 16)
  VAR_3->brightness = (VAR_5 & ~((u32) VAR_1));

 FUNC_0(VAR_3->device, VAR_5,
    VAR_3->event_count[VAR_5 % 128]++);

 return;
}
