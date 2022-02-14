
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_3__ {scalar_t__ address; } ;
struct TYPE_4__ {TYPE_1__ xpm1b_control_block; TYPE_1__ xpm1a_control_block; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(u32 VAR_2, u32 VAR_3)
{
 acpi_status VAR_4;

 FUNC_1(VAR_1);

 VAR_4 =
     FUNC_2(VAR_2, &VAR_0.xpm1a_control_block);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_4);
 }

 if (VAR_0.xpm1b_control_block.address) {
  VAR_4 =
      FUNC_2(VAR_3,
      &VAR_0.xpm1b_control_block);
 }
 FUNC_3(VAR_4);
}
