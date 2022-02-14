
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


 int FUNC_0 (struct wm8350*,int ,int) ;

int FUNC_1(struct wm8350 *VAR_7, int VAR_8, u16 VAR_9,
      u16 VAR_10, u16 VAR_11, u16 VAR_12, u16 VAR_13,
      u16 VAR_14)
{
 switch (VAR_8) {
 case 129:
  FUNC_0(VAR_7, VAR_5,
     (VAR_9 ? VAR_1 : 0) |
     (VAR_10 ? VAR_2 : 0) |
     VAR_11 | VAR_12 | VAR_13 | VAR_14);
  break;
 case 128:
  FUNC_0(VAR_7, VAR_6,
     (VAR_9 ? VAR_3 : 0) |
     (VAR_10 ? VAR_4 : 0) |
     VAR_11 | VAR_12 | VAR_13 | VAR_14);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
