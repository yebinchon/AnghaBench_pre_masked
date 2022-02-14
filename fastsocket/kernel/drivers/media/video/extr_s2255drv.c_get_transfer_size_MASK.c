
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s2255_mode {scalar_t__ format; int scale; int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_19 ;





__attribute__((used)) static u32 FUNC_0(struct s2255_mode *VAR_20)
{
 int VAR_21 = VAR_10;
 int VAR_22 = VAR_18;
 u32 VAR_23;
 u32 VAR_24;
 unsigned int VAR_25;

 if (VAR_20 == ((void*)0))
  return 0;

 if (VAR_20->format == VAR_2) {
  switch (VAR_20->scale) {
  case 129:
  case 128:
   VAR_21 = VAR_16 * 2;
   VAR_22 = VAR_8;
   break;
  case 130:
   VAR_21 = VAR_14;
   VAR_22 = VAR_6;
   break;
  case 131:
   VAR_21 = VAR_12;
   VAR_22 = VAR_4;
   break;
  default:
   break;
  }
 } else if (VAR_20->format == VAR_3) {
  switch (VAR_20->scale) {
  case 129:
  case 128:
   VAR_21 = VAR_17 * 2;
   VAR_22 = VAR_9;
   break;
  case 130:
   VAR_21 = VAR_15;
   VAR_22 = VAR_7;
   break;
  case 131:
   VAR_21 = VAR_13;
   VAR_22 = VAR_5;
   break;
  default:
   break;
  }
 }
 VAR_23 = VAR_21 * VAR_22;
 if ((VAR_20->color & VAR_11) != VAR_0) {

  VAR_23 *= 2;
 }



 VAR_24 = VAR_23 + VAR_19;
 VAR_25 = 0xffffffffUL - VAR_1 + 1;

 if (VAR_24 & ~VAR_25)
  VAR_24 = (VAR_24 & VAR_25) + (VAR_1);
 return VAR_24;
}
