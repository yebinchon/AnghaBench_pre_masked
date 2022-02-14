
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* states; int state_count; } ;
struct powernow_k8_data {int irt; int rvo; int exttype; int plllock; int vidmvs; int vstable; TYPE_2__ acpi_data; } ;
typedef int acpi_integer ;
struct TYPE_3__ {int control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_0(struct powernow_k8_data *VAR_14,
  unsigned int VAR_15)
{
 acpi_integer VAR_16;

 if (!VAR_14->acpi_data.state_count || (VAR_13 == VAR_0))
  return;

 VAR_16 = VAR_14->acpi_data.states[VAR_15].control;
 VAR_14->irt = (VAR_16 >> VAR_4) & VAR_3;
 VAR_14->rvo = (VAR_16 >> VAR_10) & VAR_9;
 VAR_14->exttype = (VAR_16 >> VAR_2) & VAR_1;
 VAR_14->plllock = (VAR_16 >> VAR_8) & VAR_7;
 VAR_14->vidmvs = 1 << ((VAR_16 >> VAR_6) & VAR_5);
 VAR_14->vstable = (VAR_16 >> VAR_12) & VAR_11;
}
