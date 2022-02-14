
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint16 ;
struct TYPE_6__ {scalar_t__ rom; } ;
struct TYPE_4__ {unsigned int sda_out_adr; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_2)
{
  if (VAR_2 == VAR_1.config.sda_out_adr)
  {
    return (FUNC_0() << 8);
  }

  if (VAR_2 == (VAR_1.config.sda_out_adr ^ 1))
  {
    return FUNC_0();
  }

  return *(uint16 *)(VAR_0.rom + VAR_2);
}
