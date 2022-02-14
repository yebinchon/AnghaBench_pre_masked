
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int regs_read_count; int regs_write_count; int * regs_write; int * regs_read; } ;
typedef TYPE_1__ cs_detail ;


 char* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(cs_detail* VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->regs_read_count; ++VAR_2)
 {
  uint16_t VAR_3 = VAR_1->regs_read[VAR_2];
  const char* VAR_4 = FUNC_0(VAR_0, VAR_3);
  FUNC_1("\treading from reg: %s\n", VAR_4);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->regs_write_count; ++VAR_2)
 {
  uint16_t VAR_5 = VAR_1->regs_write[VAR_2];
  const char* VAR_6 = FUNC_0(VAR_0, VAR_5);
  FUNC_1("\twriting to reg:   %s\n", VAR_6);
 }
}
