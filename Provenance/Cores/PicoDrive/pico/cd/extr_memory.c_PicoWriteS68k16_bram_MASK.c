
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* bram; } ;
struct TYPE_3__ {int changed; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_4, u32 VAR_5)
{
  FUNC_0(VAR_0, "s68k_bram w16: [%06x] %04x @%06x", VAR_4, VAR_5, VAR_3);
  VAR_4 = (VAR_4 >> 1) & 0x1fff;
  VAR_1->bram[VAR_4++] = VAR_5;
  VAR_1->bram[VAR_4++] = VAR_5 >> 8;
  VAR_2.changed = 1;
}
