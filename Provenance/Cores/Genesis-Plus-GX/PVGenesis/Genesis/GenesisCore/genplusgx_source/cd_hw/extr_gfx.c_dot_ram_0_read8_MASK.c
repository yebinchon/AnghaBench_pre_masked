
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int * word_ram; } ;


 int FUNC_0 (int ,unsigned int) ;
 TYPE_1__ VAR_0 ;

unsigned int FUNC_1(unsigned int VAR_1)
{
  uint8 VAR_2 = FUNC_0(VAR_0.word_ram[0], (VAR_1 >> 1) & 0x1ffff);

  if (VAR_1 & 1)
  {
    return (VAR_2 & 0x0f);
  }

  return (VAR_2 >> 4);
}
