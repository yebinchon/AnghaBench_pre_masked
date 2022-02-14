
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lxfb_par {int output; } ;
struct fb_info {struct lxfb_par* par; } ;


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
 int FUNC_0 (struct lxfb_par*,int ) ;
 int FUNC_1 (struct lxfb_par*,int ) ;
 int FUNC_2 (struct lxfb_par*,int ,int) ;
 int FUNC_3 (struct lxfb_par*,int ,int) ;

int FUNC_4(struct fb_info *VAR_11, int VAR_12)
{
 struct lxfb_par *VAR_13 = VAR_11->par;
 u32 VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;


 switch (VAR_12) {
 case 129:
  VAR_17 = 0; VAR_18 = 1; VAR_19 = 1;
  break;
 case 131:
  VAR_17 = 1; VAR_18 = 1; VAR_19 = 1;
  break;
 case 128:
  VAR_17 = 1; VAR_18 = 1; VAR_19 = 0;
  break;
 case 132:
  VAR_17 = 1; VAR_18 = 0; VAR_19 = 1;
  break;
 case 130:
  VAR_17 = 1; VAR_18 = 0; VAR_19 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_1(VAR_13, VAR_4);
 VAR_14 &= ~(VAR_6 | VAR_7 | VAR_8 |
   VAR_5);
 if (!VAR_17)
  VAR_14 |= VAR_6 | VAR_5;
 if (VAR_18)
  VAR_14 |= VAR_7;
 if (VAR_19)
  VAR_14 |= VAR_8;

 FUNC_3(VAR_13, VAR_4, VAR_14);

 VAR_15 = FUNC_1(VAR_13, VAR_9);

 if (VAR_19 && VAR_18)
  VAR_15 &= ~VAR_10;
 else
  VAR_15 |= VAR_10;

 FUNC_3(VAR_13, VAR_9, VAR_15);



 if (VAR_13->output & VAR_3) {
  VAR_16 = FUNC_0(VAR_13, VAR_1);
  if (VAR_12 == 130)
   VAR_16 &= ~VAR_2;
  else
   VAR_16 |= VAR_2;
  FUNC_2(VAR_13, VAR_1, VAR_16);
 }

 return 0;
}
