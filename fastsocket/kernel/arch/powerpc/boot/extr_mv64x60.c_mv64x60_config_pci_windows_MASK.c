
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int size; int lo; int fcn; int hi; } ;
struct TYPE_5__ {int lo; int hi; } ;
struct TYPE_4__ {int lo; int hi; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int,int,int ,int ,int) ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__** VAR_8 ;
 int FUNC_3 (int*,int) ;

void FUNC_4(u8 *VAR_9, u8 *VAR_10, u8 VAR_11,
  u8 VAR_12, u32 VAR_13, u32 VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18;


 VAR_18 = ~(1 << 9);
 VAR_17 = VAR_11 ? VAR_2 : VAR_0;
 FUNC_3((u32 *)(VAR_9 + VAR_17), VAR_18);

 for (VAR_15=0; VAR_15<VAR_5; VAR_15++)
  FUNC_3((u32 *)(VAR_9 + VAR_8[VAR_11][VAR_15].lo), 0);


 if (VAR_13 == 0)
  return;


 VAR_16 = VAR_11 ?
  VAR_3 : VAR_1;
 VAR_15 = FUNC_1((u32 *)(VAR_9 + VAR_16));
 FUNC_3((u32 *)(VAR_9 + VAR_16), VAR_15 & ~0x1);

 VAR_13 = (VAR_13 - 1) & 0xfffff000;


 FUNC_2(VAR_9, VAR_11, VAR_12,
   FUNC_0(0, VAR_6[VAR_11].fcn),
   VAR_6[VAR_11].hi, 0);
 FUNC_2(VAR_9, VAR_11, VAR_12,
   FUNC_0(0, VAR_6[VAR_11].fcn),
   VAR_6[VAR_11].lo, 0);
 FUNC_3((u32 *)(VAR_9 + VAR_6[VAR_11].size),VAR_13);

 VAR_14 |= VAR_4;
 FUNC_3((u32 *)(VAR_9 + VAR_8[VAR_11][0].hi), 0);
 FUNC_3((u32 *)(VAR_9 + VAR_8[VAR_11][0].lo), VAR_14);
 FUNC_3((u32 *)(VAR_9 + VAR_8[VAR_11][0].size),VAR_13);


 VAR_15 = (u32)VAR_9;
 VAR_15 &= 0xffff0000;
 VAR_15 |= (0x2 << 1);
 FUNC_2(VAR_9, VAR_11, VAR_12, FUNC_0(0,0),
   VAR_7[VAR_11].hi, 0);
 FUNC_2(VAR_9, VAR_11, VAR_12, FUNC_0(0,0),
   VAR_7[VAR_11].lo, VAR_15);

 VAR_18 &= ~0x1;
 FUNC_3((u32 *)(VAR_9 + VAR_17), VAR_18);
}
