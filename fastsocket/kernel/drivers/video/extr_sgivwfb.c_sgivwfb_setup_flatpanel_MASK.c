
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sgivw_par {int dummy; } ;
struct dbe_timing_info {int flags; int pll_m; int pll_n; int pll_p; } ;


 int FUNC_0 (int ,scalar_t__) ;
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
 int FUNC_1 (int ,int ,scalar_t__,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_2(struct sgivw_par *VAR_18, struct dbe_timing_info *VAR_19)
{
 int VAR_20, VAR_21, VAR_22, VAR_23;
 u32 VAR_24 = 0;

 FUNC_1(VAR_12, VAR_10, VAR_24,
  (VAR_19->flags & VAR_0) ? 0 : 1);
 FUNC_1(VAR_12, VAR_11, VAR_24,
  (VAR_19->flags & VAR_1) ? 0 : 1);
 FUNC_0(VAR_17, VAR_24);


 switch (VAR_13) {
  case 128:
   VAR_20 = 1600;
   VAR_21 = 1024;
   VAR_22 = 0;
   VAR_23 = 1600;
   VAR_19->pll_m = 4;
   VAR_19->pll_n = 1;
   VAR_19->pll_p = 0;
   break;
  default:
         VAR_20 = VAR_21 = VAR_22 = VAR_23 = 0xfff;
   }

 VAR_24 = 0;
 FUNC_1(VAR_2, VAR_4, VAR_24, VAR_22);
 FUNC_1(VAR_2, VAR_3, VAR_24, VAR_23);
 FUNC_0(VAR_14, VAR_24);
 VAR_24 = 0;
 FUNC_1(VAR_5, VAR_6, VAR_24, VAR_20);
 FUNC_0(VAR_15, VAR_24);
 VAR_24 = 0;
 FUNC_1(VAR_7, VAR_9, VAR_24, 1);
 FUNC_1(VAR_7, VAR_8, VAR_24, VAR_21 + 1);
 FUNC_0(VAR_16, VAR_24);
}
