
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int enabled; int* fixed_ranges; int def_type; TYPE_1__* var_ranges; scalar_t__ have_fixed; } ;
struct TYPE_3__ {int mask_lo; int base_lo; scalar_t__ mask_hi; scalar_t__ base_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

u8 FUNC_0(u64 VAR_8, u64 VAR_9)
{
 int VAR_10;
 u64 VAR_11, VAR_12;
 u8 VAR_13, VAR_14;

 if (!VAR_5)
  return 0xFF;

 if (!VAR_4.enabled)
  return 0xFF;


 VAR_9--;


 if (VAR_4.have_fixed && (VAR_8 < 0x100000)) {
  int VAR_15;

  if (VAR_8 < 0x80000) {
   VAR_15 = 0;
   VAR_15 += (VAR_8 >> 16);
   return VAR_4.fixed_ranges[VAR_15];
  } else if (VAR_8 < 0xC0000) {
   VAR_15 = 1 * 8;
   VAR_15 += ((VAR_8 - 0x80000) >> 14);
   return VAR_4.fixed_ranges[VAR_15];
  } else if (VAR_8 < 0x1000000) {
   VAR_15 = 3 * 8;
   VAR_15 += ((VAR_8 - 0xC0000) >> 12);
   return VAR_4.fixed_ranges[VAR_15];
  }
 }






 if (!(VAR_4.enabled & 2))
  return VAR_4.def_type;

 VAR_13 = 0xFF;
 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  unsigned short VAR_16, VAR_17;

  if (!(VAR_4.var_ranges[VAR_10].mask_lo & (1 << 11)))
   continue;

  VAR_11 = (((u64)VAR_4.var_ranges[VAR_10].base_hi) << 32) +
         (VAR_4.var_ranges[VAR_10].base_lo & VAR_3);
  VAR_12 = (((u64)VAR_4.var_ranges[VAR_10].mask_hi) << 32) +
         (VAR_4.var_ranges[VAR_10].mask_lo & VAR_3);

  VAR_16 = ((VAR_8 & VAR_12) == (VAR_11 & VAR_12));
  VAR_17 = ((VAR_9 & VAR_12) == (VAR_11 & VAR_12));
  if (VAR_16 != VAR_17)
   return 0xFE;

  if ((VAR_8 & VAR_12) != (VAR_11 & VAR_12))
   continue;

  VAR_14 = VAR_4.var_ranges[VAR_10].base_lo & 0xff;
  if (VAR_13 == 0xFF) {
   VAR_13 = VAR_14;
   continue;
  }

  if (VAR_13 == VAR_0 ||
      VAR_14 == VAR_0) {
   return VAR_0;
  }

  if ((VAR_13 == VAR_1 &&
       VAR_14 == VAR_2) ||
      (VAR_13 == VAR_2 &&
       VAR_14 == VAR_1)) {
   VAR_13 = VAR_2;
   VAR_14 = VAR_2;
  }

  if (VAR_13 != VAR_14)
   return VAR_0;
 }

 if (VAR_6) {
  if (VAR_8 >= (1ULL<<32) && (VAR_9 < VAR_6))
   return VAR_1;
 }

 if (VAR_13 != 0xFF)
  return VAR_13;

 return VAR_4.def_type;
}
