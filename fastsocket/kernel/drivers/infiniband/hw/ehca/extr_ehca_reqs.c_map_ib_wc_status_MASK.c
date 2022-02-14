
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


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
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_21,
        enum ib_wc_status *VAR_22)
{
 if (FUNC_0(VAR_21 & VAR_19)) {
  switch (VAR_21 & 0x3F) {
  case 0x01:
  case 0x21:
   *VAR_22 = VAR_6;
   break;
  case 0x02:
  case 0x22:
   *VAR_22 = VAR_8;
   break;
  case 0x03:
  case 0x23:
   *VAR_22 = VAR_5;
   break;
  case 0x04:
  case 0x24:
   *VAR_22 = VAR_7;
   break;
  case 0x05:
  case 0x25:
   *VAR_22 = VAR_18;
   break;
  case 0x06:
   *VAR_22 = VAR_9;
   break;
  case 0x07:
   switch ((VAR_21
     & VAR_20) >> 11) {
   case 0x0:




    *VAR_22 = VAR_2;
    break;
   case 0x1:
    *VAR_22 = VAR_13;
    break;
   case 0x2:
    *VAR_22 = VAR_11;
    break;
   case 0x3:
    *VAR_22 = VAR_14;
    break;
   case 0x4:
    *VAR_22 = VAR_12;
    break;
   }
   break;
  case 0x08:
   *VAR_22 = VAR_15;
   break;
  case 0x09:
   *VAR_22 = VAR_16;
   break;
  case 0x0A:
  case 0x2D:
   *VAR_22 = VAR_10;
   break;
  case 0x0B:
  case 0x2E:
   *VAR_22 = VAR_3;
   break;
  case 0x0C:
  case 0x2F:
   *VAR_22 = VAR_4;
   break;
  case 0x0D:
   *VAR_22 = VAR_0;
   break;
  case 0x10:

   *VAR_22 = VAR_18;
   break;
  default:
   *VAR_22 = VAR_1;

  }
 } else
  *VAR_22 = VAR_17;
}
