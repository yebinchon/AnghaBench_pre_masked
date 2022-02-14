
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint16 ;
struct TYPE_4__ {unsigned int* lut_offset; } ;
struct TYPE_3__ {scalar_t__* word_ram; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

unsigned int FUNC_0(unsigned int VAR_2)
{
  VAR_2 = VAR_0.lut_offset[(VAR_2 >> 2) & 0x7fff] | (VAR_2 & 0x10002);
  return *(uint16 *)(VAR_1.word_ram[1] + VAR_2);
}
