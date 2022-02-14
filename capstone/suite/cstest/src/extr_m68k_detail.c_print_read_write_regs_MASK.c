
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int csh ;
struct TYPE_3__ {int regs_read_count; int regs_write_count; int * regs_write; int * regs_read; } ;
typedef TYPE_1__ cs_detail ;


 int FUNC_0 (char**,char*,char const*) ;
 char* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, cs_detail* VAR_1, csh *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->regs_read_count; ++VAR_3) {
  uint16_t VAR_4 = VAR_1->regs_read[VAR_3];
  const char* VAR_5 = FUNC_1(*VAR_2, VAR_4);
  FUNC_0(&VAR_0, " ; reading from reg: %s", VAR_5);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->regs_write_count; ++VAR_3) {
  uint16_t VAR_6 = VAR_1->regs_write[VAR_3];
  const char* VAR_7 = FUNC_1(*VAR_2, VAR_6);
  FUNC_0(&VAR_0, " ; writing to reg:   %s", VAR_7);
 }
}
