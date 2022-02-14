
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct pxafb_info {int lccr0; int reg_lccr0; int reg_lccr3; int reg_lccr4; int lccr4; int reg_lccr1; int reg_lccr2; int* fdadr; } ;
struct fb_var_screeninfo {int dummy; } ;


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
 int FUNC_0 (struct pxafb_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxafb_info*,int ) ;
 int FUNC_4 (struct fb_var_screeninfo*) ;
 int FUNC_5 (struct pxafb_info*,int ) ;
 int FUNC_6 (struct pxafb_info*,struct fb_var_screeninfo*) ;
 int FUNC_7 (struct pxafb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_8(struct fb_var_screeninfo *VAR_17,
         struct pxafb_info *VAR_18)
{
 u_long VAR_19;


 FUNC_2(VAR_19);






  FUNC_6(VAR_18, VAR_17);

 FUNC_5(VAR_18, 0);

 VAR_18->reg_lccr0 = VAR_18->lccr0 |
  (VAR_8 | VAR_11 | VAR_6 | VAR_5 |
   VAR_10 | VAR_4 | VAR_9);

 VAR_18->reg_lccr3 |= FUNC_4(VAR_17);

 VAR_18->reg_lccr4 = FUNC_0(VAR_18, VAR_15) & ~VAR_16;
 VAR_18->reg_lccr4 |= (VAR_18->lccr4 & VAR_16);
 FUNC_1(VAR_19);





 if ((FUNC_0(VAR_18, VAR_3) != VAR_18->reg_lccr0) ||
     (FUNC_0(VAR_18, VAR_12) != VAR_18->reg_lccr1) ||
     (FUNC_0(VAR_18, VAR_13) != VAR_18->reg_lccr2) ||
     (FUNC_0(VAR_18, VAR_14) != VAR_18->reg_lccr3) ||
     (FUNC_0(VAR_18, VAR_15) != VAR_18->reg_lccr4) ||
     (FUNC_0(VAR_18, VAR_1) != VAR_18->fdadr[0]) ||
     (FUNC_0(VAR_18, VAR_2) != VAR_18->fdadr[1]))
  FUNC_3(VAR_18, VAR_0);

 return 0;
}
