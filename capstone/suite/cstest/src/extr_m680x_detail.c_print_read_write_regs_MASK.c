
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int csh ;
struct TYPE_3__ {int regs_read_count; int regs_write_count; int * regs_write; int * regs_read; } ;
typedef TYPE_1__ cs_detail ;


 int FUNC_0 (char**,char*,...) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, csh *VAR_1, cs_detail *VAR_2)
{
 int VAR_3;

 if (VAR_2->regs_read_count > 0) {
  FUNC_0(&VAR_0, "\treading from regs: ");

  for (VAR_3 = 0; VAR_3 < VAR_2->regs_read_count; ++VAR_3) {
   if (VAR_3 > 0)
    FUNC_0(&VAR_0, ", ");

   FUNC_0(&VAR_0, "%s", FUNC_1(*VAR_1, VAR_2->regs_read[VAR_3]));
  }
 }

 if (VAR_2->regs_write_count > 0) {
  FUNC_0(&VAR_0, "\twriting to regs: ");

  for (VAR_3 = 0; VAR_3 < VAR_2->regs_write_count; ++VAR_3) {
   if (VAR_3 > 0)
    FUNC_0(&VAR_0, ", ");

   FUNC_0(&VAR_0, "%s", FUNC_1(*VAR_1, VAR_2->regs_write[VAR_3]));
  }
 }
}
