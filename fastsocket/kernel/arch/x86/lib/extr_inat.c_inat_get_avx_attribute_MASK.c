
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t insn_byte_t ;
typedef int const insn_attr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int const*** VAR_2 ;

insn_attr_t FUNC_0(insn_byte_t VAR_3, insn_byte_t VAR_4,
       insn_byte_t VAR_5)
{
 const insn_attr_t *VAR_6;
 if (VAR_4 > VAR_1 || VAR_5 > VAR_0)
  return 0;
 VAR_6 = VAR_2[VAR_4][VAR_5];
 if (!VAR_6)
  return 0;
 return VAR_6[VAR_3];
}
