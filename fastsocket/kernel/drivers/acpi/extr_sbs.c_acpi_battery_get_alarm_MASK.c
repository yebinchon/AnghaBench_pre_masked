
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct acpi_battery {int alarm_capacity; TYPE_1__* sbs; } ;
struct TYPE_2__ {int hc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct acpi_battery *VAR_2)
{
 return FUNC_0(VAR_2->sbs->hc, VAR_1,
     VAR_0, 0x01,
     (u8 *)&VAR_2->alarm_capacity);
}
