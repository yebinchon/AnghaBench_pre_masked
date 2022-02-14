
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int sram; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(uint32 VAR_1, uint32 VAR_2)
{
  if (VAR_1 >= 0x202000)
  {
    FUNC_0(VAR_0.sram , VAR_1 & 0xffff, VAR_2);
    return;
  }

  FUNC_1(VAR_1, VAR_2);
}
