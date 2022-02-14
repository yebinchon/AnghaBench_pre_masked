
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void** prg_ram_b; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int,void*,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, u32 VAR_2)
{

  if (VAR_1 & 2) {
    void *VAR_3 = VAR_0->prg_ram_b[(VAR_2 >> 6) & 3];
    FUNC_0(0x020000, 0x03ffff, VAR_3, 0);
  }
  else {
    FUNC_1(0x020000, 0x03ffff);
  }
}
