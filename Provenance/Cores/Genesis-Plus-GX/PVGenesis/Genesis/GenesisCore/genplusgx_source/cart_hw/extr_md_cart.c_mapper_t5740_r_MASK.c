
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int rom; } ;


 int FUNC_0 (int ,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static uint32 FUNC_1(uint32 VAR_1)
{




  if ((VAR_1 & 0xff00) == 0x8100)
  {
    return FUNC_0(VAR_0.rom , (VAR_1 & 0x7fff));
  }

  return FUNC_0(VAR_0.rom, VAR_1);
}
