
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_processor_cx {scalar_t__ entry_method; int address; } ;
struct TYPE_3__ {int address; } ;
struct TYPE_4__ {TYPE_1__ xpm_timer_block; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (struct acpi_processor_cx*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static inline void FUNC_6(struct acpi_processor_cx *VAR_3)
{

 FUNC_5();
 if (VAR_3->entry_method == VAR_0) {

  FUNC_0(VAR_3);
 } else if (VAR_3->entry_method == VAR_1) {
  FUNC_1();
 } else {
  int VAR_4;

  FUNC_2(VAR_3->address);



  VAR_4 = FUNC_3(VAR_2.xpm_timer_block.address);
 }
 FUNC_4();
}
