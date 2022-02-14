
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;


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
 int FUNC_0 (struct wm8350*) ;
 int FUNC_1 (struct wm8350*,int ) ;
 int FUNC_2 (struct wm8350*) ;
 int FUNC_3 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct wm8350 *VAR_18, int VAR_19, int VAR_20)
{
 u16 VAR_21;

 FUNC_2(VAR_18);
 switch (VAR_19) {
 case 0:
  VAR_21 = FUNC_1(VAR_18, VAR_14)
      & ~VAR_1;
  FUNC_3(VAR_18, VAR_14,
     VAR_21 | ((VAR_20 & 0xf) << 0));
  break;
 case 1:
  VAR_21 = FUNC_1(VAR_18, VAR_14)
      & ~VAR_5;
  FUNC_3(VAR_18, VAR_14,
     VAR_21 | ((VAR_20 & 0xf) << 4));
  break;
 case 2:
  VAR_21 = FUNC_1(VAR_18, VAR_14)
      & ~VAR_6;
  FUNC_3(VAR_18, VAR_14,
     VAR_21 | ((VAR_20 & 0xf) << 8));
  break;
 case 3:
  VAR_21 = FUNC_1(VAR_18, VAR_14)
      & ~VAR_7;
  FUNC_3(VAR_18, VAR_14,
     VAR_21 | ((VAR_20 & 0xf) << 12));
  break;
 case 4:
  VAR_21 = FUNC_1(VAR_18, VAR_15)
      & ~VAR_8;
  FUNC_3(VAR_18, VAR_15,
     VAR_21 | ((VAR_20 & 0xf) << 0));
  break;
 case 5:
  VAR_21 = FUNC_1(VAR_18, VAR_15)
      & ~VAR_9;
  FUNC_3(VAR_18, VAR_15,
     VAR_21 | ((VAR_20 & 0xf) << 4));
  break;
 case 6:
  VAR_21 = FUNC_1(VAR_18, VAR_15)
      & ~VAR_10;
  FUNC_3(VAR_18, VAR_15,
     VAR_21 | ((VAR_20 & 0xf) << 8));
  break;
 case 7:
  VAR_21 = FUNC_1(VAR_18, VAR_15)
      & ~VAR_11;
  FUNC_3(VAR_18, VAR_15,
     VAR_21 | ((VAR_20 & 0xf) << 12));
  break;
 case 8:
  VAR_21 = FUNC_1(VAR_18, VAR_16)
      & ~VAR_12;
  FUNC_3(VAR_18, VAR_16,
     VAR_21 | ((VAR_20 & 0xf) << 0));
  break;
 case 9:
  VAR_21 = FUNC_1(VAR_18, VAR_16)
      & ~VAR_13;
  FUNC_3(VAR_18, VAR_16,
     VAR_21 | ((VAR_20 & 0xf) << 4));
  break;
 case 10:
  VAR_21 = FUNC_1(VAR_18, VAR_16)
      & ~VAR_2;
  FUNC_3(VAR_18, VAR_16,
     VAR_21 | ((VAR_20 & 0xf) << 8));
  break;
 case 11:
  VAR_21 = FUNC_1(VAR_18, VAR_16)
      & ~VAR_3;
  FUNC_3(VAR_18, VAR_16,
     VAR_21 | ((VAR_20 & 0xf) << 12));
  break;
 case 12:
  VAR_21 = FUNC_1(VAR_18, VAR_17)
      & ~VAR_4;
  FUNC_3(VAR_18, VAR_17,
     VAR_21 | ((VAR_20 & 0xf) << 0));
  break;
 default:
  FUNC_0(VAR_18);
  return -VAR_0;
 }

 FUNC_0(VAR_18);
 return 0;
}
