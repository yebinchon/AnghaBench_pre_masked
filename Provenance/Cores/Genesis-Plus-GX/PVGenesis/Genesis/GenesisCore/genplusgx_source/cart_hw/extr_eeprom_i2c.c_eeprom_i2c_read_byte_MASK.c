
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rom; } ;
struct TYPE_4__ {unsigned int sda_out_adr; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_2)
{
  if (VAR_2 == VAR_1.config.sda_out_adr)
  {
    return FUNC_1();
  }

  return FUNC_0(VAR_0.rom, VAR_2);
}
