
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct geodefb_par {scalar_t__ panel_x; scalar_t__ vid_regs; scalar_t__ enable_crt; } ;
struct fb_info {struct geodefb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_8, int VAR_9)
{
 struct geodefb_par *VAR_10 = VAR_8->par;
 u32 VAR_11;
 int VAR_12, VAR_13, VAR_14;

 switch (VAR_9) {
 case 129:
  VAR_12 = 0; VAR_13 = 1; VAR_14 = 1;
  break;
 case 131:
  VAR_12 = 1; VAR_13 = 1; VAR_14 = 1;
  break;
 case 128:
  VAR_12 = 1; VAR_13 = 1; VAR_14 = 0;
  break;
 case 132:
  VAR_12 = 1; VAR_13 = 0; VAR_14 = 1;
  break;
 case 130:
  VAR_12 = 1; VAR_13 = 0; VAR_14 = 0;
  break;
 default:
  return -VAR_7;
 }

 VAR_11 = FUNC_0(VAR_10->vid_regs + VAR_6);

 VAR_11 &= ~(VAR_0 | VAR_1
    | VAR_4 | VAR_5
    | VAR_2 | VAR_3);

 if (VAR_10->enable_crt) {
  if (!VAR_12)
   VAR_11 |= VAR_0 | VAR_1;
  if (VAR_13)
   VAR_11 |= VAR_4;
  if (VAR_14)
   VAR_11 |= VAR_5;
 }
 if (VAR_10->panel_x > 0) {
  if (!VAR_12)
   VAR_11 |= VAR_2;
  if (VAR_13 && VAR_14)
   VAR_11 |= VAR_3;
 }

 FUNC_1(VAR_11, VAR_10->vid_regs + VAR_6);

 return 0;
}
