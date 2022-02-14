
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int sda_in_adr; unsigned int sda_in_bit; unsigned int scl_adr; unsigned int scl_bit; } ;
struct TYPE_4__ {unsigned int sda; unsigned int scl; TYPE_1__ config; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
  int VAR_3 = 0;

  if (VAR_1 == VAR_0.config.sda_in_adr)
  {
    VAR_0.sda = (VAR_2 >> VAR_0.config.sda_in_bit) & 1;
    VAR_3 = 1;
  }

  if (VAR_1 == VAR_0.config.scl_adr)
  {
    VAR_0.scl = (VAR_2 >> VAR_0.config.scl_bit) & 1;
    VAR_3 = 1;
  }

  if (VAR_3)
  {
    FUNC_0();
    return;
  }

  FUNC_1(VAR_1, VAR_2);
}
