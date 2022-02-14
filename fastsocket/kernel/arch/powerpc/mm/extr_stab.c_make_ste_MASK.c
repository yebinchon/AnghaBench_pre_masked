
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_entry {unsigned long esid_data; unsigned long vsid_data; } ;
struct TYPE_2__ {unsigned long stab_rr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;
 struct stab_entry *VAR_18, *VAR_19;
 unsigned long VAR_20 = (VAR_8 << VAR_2) >= VAR_1;

 VAR_11 = VAR_9 << VAR_6;
 VAR_10 = VAR_8 << VAR_2 | VAR_3 | VAR_5;
 if (! VAR_20)
  VAR_10 |= VAR_4;


 VAR_17 = (VAR_8 & 0x1f) << 3;
 VAR_18 = (struct stab_entry *)(VAR_7 | ((VAR_8 & 0x1f) << 7));


 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++, VAR_18++) {
   if (!(VAR_18->esid_data & VAR_5)) {
    VAR_18->vsid_data = VAR_11;
    FUNC_0();
    VAR_18->esid_data = VAR_10;
    return (VAR_17 | VAR_12);
   }
  }

  VAR_17 = ((~VAR_8) & 0x1f) << 3;
  VAR_18 = (struct stab_entry *)(VAR_7 | (((~VAR_8) & 0x1f) << 7));
 }





 VAR_15 = FUNC_1()->stab_rr;
 for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
  if (VAR_15 < 8) {
   VAR_17 = (VAR_8 & 0x1f) << 3;
   VAR_18 = (struct stab_entry *)(VAR_7 | ((VAR_8 & 0x1f) << 7));
   VAR_19 = VAR_18 + VAR_15;
  } else {
   VAR_17 = ((~VAR_8) & 0x1f) << 3;
   VAR_18 = (struct stab_entry *)(VAR_7 | (((~VAR_8) & 0x1f) << 7));
   VAR_19 = VAR_18 + (VAR_15 - 8);
  }


  if ((VAR_19->esid_data & VAR_0) != VAR_1)
   break;

  VAR_15 = (VAR_15 + 1) & 0xf;
 }

 FUNC_1()->stab_rr = (VAR_15 + 1) & 0xf;




 asm volatile("isync" : : : "memory");

 VAR_14 = VAR_19->esid_data >> VAR_2;
 VAR_19->esid_data = 0;

 asm volatile("sync" : : : "memory");

 VAR_19->vsid_data = VAR_11;
 FUNC_0();
 VAR_19->esid_data = VAR_10;

 asm volatile("slbie  %0" : : "r" (VAR_14 << VAR_2));

 asm volatile("sync" : : : "memory");

 return (VAR_17 | (VAR_15 & 0x7));
}
