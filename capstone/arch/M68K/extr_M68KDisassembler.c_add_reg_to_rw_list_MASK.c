
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
typedef scalar_t__ m68k_reg ;
struct TYPE_3__ {size_t regs_write_count; size_t regs_read_count; void** regs_read; void** regs_write; } ;
typedef TYPE_1__ m68k_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void**,size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_1, m68k_reg VAR_2, int VAR_3)
{
 if (VAR_2 == VAR_0)
  return;

 if (VAR_3)
 {
  if (FUNC_0(VAR_1->regs_write, VAR_1->regs_write_count, VAR_2))
   return;

  VAR_1->regs_write[VAR_1->regs_write_count] = (uint16_t)VAR_2;
  VAR_1->regs_write_count++;
 }
 else
 {
  if (FUNC_0(VAR_1->regs_read, VAR_1->regs_read_count, VAR_2))
   return;

  VAR_1->regs_read[VAR_1->regs_read_count] = (uint16_t)VAR_2;
  VAR_1->regs_read_count++;
 }
}
