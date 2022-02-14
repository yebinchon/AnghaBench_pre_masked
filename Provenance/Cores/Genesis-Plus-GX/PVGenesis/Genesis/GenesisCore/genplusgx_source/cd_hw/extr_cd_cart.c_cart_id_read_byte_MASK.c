
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int id; } ;
struct TYPE_4__ {TYPE_1__ cartridge; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{

  if (VAR_1 & 1)
  {
    return VAR_0.cartridge.id;
  }

  return 0xff;
}
