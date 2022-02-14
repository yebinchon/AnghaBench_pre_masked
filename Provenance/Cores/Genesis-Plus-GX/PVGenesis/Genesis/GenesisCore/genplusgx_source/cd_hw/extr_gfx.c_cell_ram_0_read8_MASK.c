
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* lut_offset; } ;
struct TYPE_3__ {int * word_ram; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

unsigned int FUNC_1(unsigned int VAR_2)
{
  VAR_2 = VAR_0.lut_offset[(VAR_2 >> 2) & 0x7fff] | (VAR_2 & 0x10003);
  return FUNC_0(VAR_1.word_ram[0], VAR_2);
}
