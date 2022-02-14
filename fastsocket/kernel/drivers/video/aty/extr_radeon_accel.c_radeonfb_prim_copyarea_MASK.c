
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {int dp_gui_master_cntl; } ;
struct fb_copyarea {int width; int height; int dx; int dy; int sx; int sy; } ;


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
 int FUNC_0 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct radeonfb_info *VAR_17,
       const struct fb_copyarea *VAR_18)
{
 int VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_25 = VAR_18->width; VAR_26 = VAR_18->height;
 VAR_23 = VAR_18->dx; VAR_24 = VAR_18->dy;
 VAR_21 = VAR_18->sx; VAR_22 = VAR_18->sy;
 VAR_19 = VAR_21 - VAR_23;
 VAR_20 = VAR_22 - VAR_24;

 if ( VAR_19 < 0 ) { VAR_21 += VAR_25-1; VAR_23 += VAR_25-1; }
 if ( VAR_20 < 0 ) { VAR_22 += VAR_26-1; VAR_24 += VAR_26-1; }

 FUNC_1(3);
 FUNC_0(VAR_1,
  VAR_17->dp_gui_master_cntl
  | VAR_9
  | VAR_10
  | VAR_12
  | VAR_2 );
 FUNC_0(VAR_3, 0xffffffff);
 FUNC_0(VAR_0, (VAR_19>=0 ? VAR_6 : 0)
   | (VAR_20>=0 ? VAR_7 : 0));

 FUNC_1(2);
 FUNC_0(VAR_4, VAR_11);
 FUNC_0(VAR_16, (VAR_14 | VAR_15));

 FUNC_1(3);
 FUNC_0(VAR_13, (VAR_22 << 16) | VAR_21);
 FUNC_0(VAR_8, (VAR_24 << 16) | VAR_23);
 FUNC_0(VAR_5, (VAR_26 << 16) | VAR_25);
}
