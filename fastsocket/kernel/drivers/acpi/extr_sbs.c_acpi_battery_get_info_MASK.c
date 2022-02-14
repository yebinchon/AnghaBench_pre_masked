
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct acpi_battery {TYPE_1__* sbs; } ;
struct TYPE_5__ {int offset; int command; int mode; } ;
struct TYPE_4__ {int hc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct acpi_battery *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  VAR_4 = FUNC_1(VAR_2->sbs->hc,
      VAR_1[VAR_3].mode,
      VAR_0,
      VAR_1[VAR_3].command,
      (u8 *) VAR_2 +
      VAR_1[VAR_3].offset);
  if (VAR_4)
   break;
 }
 return VAR_4;
}
