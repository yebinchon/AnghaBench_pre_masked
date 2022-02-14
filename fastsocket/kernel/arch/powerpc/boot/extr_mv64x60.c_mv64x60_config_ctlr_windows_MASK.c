
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_8__ {int lo; int size; } ;
struct TYPE_7__ {int lo; int size; } ;
struct TYPE_6__ {int lo; int size; } ;
struct TYPE_5__ {int lo; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int*) ;
 TYPE_4__* VAR_15 ;
 int* VAR_16 ;
 TYPE_3__* VAR_17 ;
 TYPE_2__* VAR_18 ;
 TYPE_1__* VAR_19 ;
 int FUNC_1 (int*,int) ;

void FUNC_2(u8 *VAR_20, u8 *VAR_21,
  u8 VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27 = 0, VAR_28 = 0;


 FUNC_1((u32 *)(VAR_20 + VAR_5), 0x3f);
 FUNC_1((u32 *)(VAR_20 + VAR_13), 0xf);
 FUNC_1((u32 *)(VAR_20 + VAR_5), 0xff);

 if (VAR_22)
  VAR_28 = 0x2 << 12;

 VAR_26 = FUNC_0((u32 *)(VAR_20 + VAR_1)) & 0xf;

 for (VAR_23=0; VAR_23<VAR_0; VAR_23++) {
  if (VAR_26 & (1 << VAR_23))
   continue;

  VAR_24 = FUNC_0((u32 *)(VAR_20 + VAR_15[VAR_23].lo))
   << 16;
  VAR_24 |= VAR_28 | (VAR_16[VAR_23] << 8);
  VAR_25 = FUNC_0((u32 *)(VAR_20 + VAR_15[VAR_23].size))
   << 16;
  VAR_27 |= (0x3 << (VAR_23 << 1));

  FUNC_1((u32 *)(VAR_20 + VAR_17[VAR_23].lo), VAR_24);
  FUNC_1((u32 *)(VAR_20 + VAR_17[VAR_23].size), VAR_25);
  FUNC_1((u32 *)(VAR_20 + VAR_19[VAR_23].lo), VAR_24);
  FUNC_1((u32 *)(VAR_20 + VAR_19[VAR_23].size), VAR_25);
  FUNC_1((u32 *)(VAR_20 + VAR_18[VAR_23].lo), VAR_24);
  FUNC_1((u32 *)(VAR_20 + VAR_18[VAR_23].size), VAR_25);
 }

 FUNC_1((u32 *)(VAR_20 + VAR_2), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_3), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_4), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_11), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_12), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_6), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_7), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_8), VAR_27);
 FUNC_1((u32 *)(VAR_20 + VAR_9), VAR_27);


 FUNC_1((u32 *)(VAR_20 + VAR_14),
   (u32)VAR_21);

 FUNC_1((u32 *)(VAR_20 + VAR_5), VAR_26);
 FUNC_1((u32 *)(VAR_20 + VAR_13), VAR_26);
 FUNC_1((u32 *)(VAR_20 + VAR_10), VAR_26);
}
