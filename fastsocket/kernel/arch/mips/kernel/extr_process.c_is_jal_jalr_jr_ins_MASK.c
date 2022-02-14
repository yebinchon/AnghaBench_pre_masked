
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opcode; scalar_t__ func; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;
union mips_instruction {TYPE_2__ r_format; TYPE_1__ j_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int FUNC_0(union mips_instruction *VAR_4)
{
 if (VAR_4->j_format.opcode == VAR_0)
  return 1;
 if (VAR_4->r_format.opcode != VAR_3)
  return 0;
 return VAR_4->r_format.func == VAR_1 || VAR_4->r_format.func == VAR_2;
}
