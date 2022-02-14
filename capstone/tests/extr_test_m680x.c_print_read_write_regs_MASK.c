
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int csh ;
struct TYPE_3__ {int regs_read_count; int regs_write_count; int * regs_write; int * regs_read; } ;
typedef TYPE_1__ cs_detail ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(csh VAR_0, cs_detail *VAR_1)
{
 int VAR_2;

 if (VAR_1->regs_read_count > 0) {
  FUNC_1("\tRegisters read:");

  for (VAR_2 = 0; VAR_2 < VAR_1->regs_read_count; ++VAR_2)
   FUNC_1(" %s",
    FUNC_0(VAR_0, VAR_1->regs_read[VAR_2]));

  FUNC_1("\n");
 }

 if (VAR_1->regs_write_count > 0) {
  FUNC_1("\tRegisters modified:");

  for (VAR_2 = 0; VAR_2 < VAR_1->regs_write_count; ++VAR_2)
   FUNC_1(" %s",
    FUNC_0(VAR_0, VAR_1->regs_write[VAR_2]));

  FUNC_1("\n");
 }
}
