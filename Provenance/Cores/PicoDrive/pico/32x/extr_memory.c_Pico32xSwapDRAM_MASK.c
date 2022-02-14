
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * dram; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_4__ {int addr; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;

void FUNC_2(int VAR_17)
{
  FUNC_1(VAR_2, 0x840000, 0x85ffff, VAR_0->dram[VAR_17], 0);
  FUNC_1(VAR_1, 0x840000, 0x85ffff, VAR_0->dram[VAR_17], 0);
  FUNC_1(VAR_2, 0x860000, 0x87ffff, VAR_0->dram[VAR_17], 0);
  FUNC_1(VAR_1, 0x860000, 0x87ffff, VAR_0->dram[VAR_17], 0);
  FUNC_1(VAR_8, 0x840000, 0x87ffff,
                 VAR_17 ? VAR_7 : VAR_6, 1);
  FUNC_1(VAR_5, 0x840000, 0x87ffff,
                 VAR_17 ? VAR_4 : VAR_3, 1);


  VAR_10[0x04/2].addr = VAR_10[0x24/2].addr =
  VAR_9[0x04/2].addr = VAR_9[0x24/2].addr = FUNC_0(VAR_0->dram[VAR_17]);

  VAR_16[0x04/2] = VAR_16[0x24/2] = VAR_17 ? VAR_15 : VAR_14;
  VAR_13[0x04/2] = VAR_13[0x24/2] = VAR_17 ? VAR_12 : VAR_11;
}
