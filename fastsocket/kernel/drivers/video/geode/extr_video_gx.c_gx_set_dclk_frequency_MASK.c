
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct gx_pll_entry {int sys_rstpll_bits; scalar_t__ dotpll_value; scalar_t__ pixclock; } ;
struct TYPE_3__ {scalar_t__ pixclock; } ;
struct fb_info {TYPE_1__ var; } ;
struct TYPE_4__ {int x86_mask; } ;


 int FUNC_0 (struct gx_pll_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_1 (scalar_t__) ;
 TYPE_2__ FUNC_2 (int ) ;
 struct gx_pll_entry* VAR_8 ;
 struct gx_pll_entry* VAR_9 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct fb_info *VAR_10)
{
 const struct gx_pll_entry *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;
 long VAR_15, VAR_16;
 u64 VAR_17, VAR_18;
 int VAR_19 = 1000;


 if (FUNC_2(0).x86_mask == 1) {
  VAR_11 = VAR_8;
  VAR_12 = FUNC_0(VAR_8);
 } else {
  VAR_11 = VAR_9;
  VAR_12 = FUNC_0(VAR_9);
 }


 VAR_14 = 0;
 VAR_15 = FUNC_1(VAR_11[0].pixclock - VAR_10->var.pixclock);
 for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++) {
  VAR_16 = FUNC_1(VAR_11[VAR_13].pixclock - VAR_10->var.pixclock);
  if (VAR_16 < VAR_15) {
   VAR_15 = VAR_16;
   VAR_14 = VAR_13;
  }
 }

 FUNC_3(VAR_4, VAR_18);
 FUNC_3(VAR_0, VAR_17);


 VAR_17 &= 0x00000000ffffffffull;
 VAR_17 |= (u64)VAR_11[VAR_14].dotpll_value << 32;
 VAR_17 |= VAR_2;
 VAR_17 &= ~VAR_1;

 FUNC_4(VAR_0, VAR_17);


 VAR_18 &= ~( VAR_6
    | VAR_7
    | VAR_5 );
 VAR_18 |= VAR_11[VAR_14].sys_rstpll_bits;

 FUNC_4(VAR_4, VAR_18);


 VAR_17 &= ~(VAR_2);
 FUNC_4(VAR_0, VAR_17);


 do {
  FUNC_3(VAR_0, VAR_17);
 } while (VAR_19-- && !(VAR_17 & VAR_3));
}
