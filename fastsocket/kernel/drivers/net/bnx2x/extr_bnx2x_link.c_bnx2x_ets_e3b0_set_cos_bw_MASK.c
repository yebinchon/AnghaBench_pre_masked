
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x {int dummy; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct bnx2x*,int,int const) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_19,
         const u8 VAR_20,
         const u32 VAR_21,
         const u32 VAR_22,
         const u16 VAR_23,
         const u8 VAR_24,
         const u8 VAR_25)
{
 u32 VAR_26 = 0;
 u32 VAR_27 = 0;

 const u32 VAR_28 = ((VAR_24 ? VAR_24 : 1) * VAR_21) / VAR_23;
 const u32 VAR_29 = ((VAR_24 ? VAR_24 : 1) * VAR_22) / VAR_23;

 switch (VAR_20) {
 case 0:
     VAR_26 =
   (VAR_25) ? VAR_7 :
       VAR_1;
      VAR_27 = (VAR_25) ?
   VAR_11 : VAR_10;
      break;
 case 1:
      VAR_26 = (VAR_25) ?
   VAR_8 :
   VAR_2;
      VAR_27 = (VAR_25) ?
   VAR_13 : VAR_12;
      break;
 case 2:
      VAR_26 = (VAR_25) ?
   VAR_9 :
   VAR_3;

   VAR_27 = (VAR_25) ?
       VAR_15 : VAR_14;
      break;
 case 3:
     if (VAR_25)
   return -VAR_0;
      VAR_26 =
   VAR_4;
      VAR_27 =
   VAR_16;
      break;
 case 4:
     if (VAR_25)
  return -VAR_0;
      VAR_26 =
   VAR_5;
      VAR_27 = VAR_17;
      break;
 case 5:
     if (VAR_25)
  return -VAR_0;
      VAR_26 =
   VAR_6;
      VAR_27 = VAR_18;
      break;
 }

 FUNC_0(VAR_19, VAR_26, VAR_28);

 FUNC_0(VAR_19, VAR_27, VAR_29);

 return 0;
}
