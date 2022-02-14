
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct intelfb_info {int fb_start; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_5(struct intelfb_info *VAR_14, u32 VAR_15, u32 VAR_16, u32 VAR_17,
      u32 VAR_18, const u8* VAR_19, u32 VAR_20, u32 VAR_21, u32 VAR_22,
      u32 VAR_23)
{
 int VAR_24, VAR_25, VAR_26, VAR_27;
 u32 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38;
 int VAR_39, VAR_40;






 VAR_24 = FUNC_3(VAR_17, 16) / 8;


 VAR_24 = VAR_24 * VAR_18;





 if (VAR_24 > VAR_5)
  return 0;


 VAR_25 = FUNC_3(VAR_24, 4) / 4;





 VAR_26 = !(VAR_25 % 2);

 VAR_27 = (VAR_13 & VAR_3) + VAR_25;
 VAR_28 = (VAR_13 & ~VAR_3) | VAR_27;
 VAR_29 = VAR_14->fb_start;
 VAR_30 = (VAR_9 << VAR_8) | (VAR_22 << VAR_7);
 VAR_31 = VAR_16;
 VAR_32 = VAR_15;
 VAR_33 = (VAR_20 << VAR_10) | (VAR_21 << VAR_4);
 VAR_34 = ((VAR_20 + VAR_17) << VAR_10) | ((VAR_21 + VAR_18) << VAR_4);

 switch (VAR_23) {
 case 8:
  VAR_30 |= VAR_2;
  break;
 case 16:
  VAR_30 |= VAR_0;
  break;
 case 32:
  VAR_30 |= VAR_1;
  VAR_28 |= VAR_11 | VAR_12;
  break;
 }

 FUNC_4(8 + VAR_25);
 FUNC_2(VAR_28);
 FUNC_2(VAR_30);
 FUNC_2(VAR_33);
 FUNC_2(VAR_34);
 FUNC_2(VAR_29);
 FUNC_2(VAR_31);
 FUNC_2(VAR_32);
 VAR_36 = VAR_37 = 0;
 VAR_38 = FUNC_3(VAR_17, 8) / 8;
 while (VAR_25--) {
  VAR_35 = 0;
  for (VAR_40 = 0; VAR_40 < 2; ++VAR_40) {
   for (VAR_39 = 0; VAR_39 < 2; ++VAR_39) {
    if (VAR_36 != VAR_38 || VAR_39 == 0)
     VAR_35 |= VAR_19[VAR_37*VAR_38 + VAR_36++] << (VAR_39+VAR_40*2)*8;
   }
   if (VAR_36 == VAR_38 && VAR_37 != (VAR_18-1)) {
    VAR_36 = 0;
    ++VAR_37;
   }
  }
  FUNC_2(VAR_35);
 }
 if (VAR_26)
  FUNC_2(VAR_6);
 FUNC_0();

 return 1;
}
