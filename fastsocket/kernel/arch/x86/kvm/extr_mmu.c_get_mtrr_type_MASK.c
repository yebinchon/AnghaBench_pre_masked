
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct mtrr_state_type {int enabled; int* fixed_ranges; int def_type; TYPE_1__* var_ranges; scalar_t__ have_fixed; } ;
struct TYPE_2__ {int mask_lo; int base_lo; scalar_t__ mask_hi; scalar_t__ base_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct mtrr_state_type *VAR_5,
    u64 VAR_6, u64 VAR_7)
{
 int VAR_8;
 u64 VAR_9, VAR_10;
 u8 VAR_11, VAR_12;
 int VAR_13 = VAR_0;

 if (!VAR_5->enabled)
  return 0xFF;


 VAR_7--;


 if (VAR_5->have_fixed && (VAR_6 < 0x100000)) {
  int VAR_14;

  if (VAR_6 < 0x80000) {
   VAR_14 = 0;
   VAR_14 += (VAR_6 >> 16);
   return VAR_5->fixed_ranges[VAR_14];
  } else if (VAR_6 < 0xC0000) {
   VAR_14 = 1 * 8;
   VAR_14 += ((VAR_6 - 0x80000) >> 14);
   return VAR_5->fixed_ranges[VAR_14];
  } else if (VAR_6 < 0x1000000) {
   VAR_14 = 3 * 8;
   VAR_14 += ((VAR_6 - 0xC0000) >> 12);
   return VAR_5->fixed_ranges[VAR_14];
  }
 }






 if (!(VAR_5->enabled & 2))
  return VAR_5->def_type;

 VAR_11 = 0xFF;
 for (VAR_8 = 0; VAR_8 < VAR_13; ++VAR_8) {
  unsigned short VAR_15, VAR_16;

  if (!(VAR_5->var_ranges[VAR_8].mask_lo & (1 << 11)))
   continue;

  VAR_9 = (((u64)VAR_5->var_ranges[VAR_8].base_hi) << 32) +
         (VAR_5->var_ranges[VAR_8].base_lo & VAR_4);
  VAR_10 = (((u64)VAR_5->var_ranges[VAR_8].mask_hi) << 32) +
         (VAR_5->var_ranges[VAR_8].mask_lo & VAR_4);

  VAR_15 = ((VAR_6 & VAR_10) == (VAR_9 & VAR_10));
  VAR_16 = ((VAR_7 & VAR_10) == (VAR_9 & VAR_10));
  if (VAR_15 != VAR_16)
   return 0xFE;

  if ((VAR_6 & VAR_10) != (VAR_9 & VAR_10))
   continue;

  VAR_12 = VAR_5->var_ranges[VAR_8].base_lo & 0xff;
  if (VAR_11 == 0xFF) {
   VAR_11 = VAR_12;
   continue;
  }

  if (VAR_11 == VAR_1 ||
      VAR_12 == VAR_1)
   return VAR_1;

  if ((VAR_11 == VAR_2 &&
       VAR_12 == VAR_3) ||
      (VAR_11 == VAR_3 &&
       VAR_12 == VAR_2)) {
   VAR_11 = VAR_3;
   VAR_12 = VAR_3;
  }

  if (VAR_11 != VAR_12)
   return VAR_1;
 }

 if (VAR_11 != 0xFF)
  return VAR_11;

 return VAR_5->def_type;
}
