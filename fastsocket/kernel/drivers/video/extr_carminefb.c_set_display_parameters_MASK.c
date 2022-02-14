
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct carmine_fb {TYPE_1__* res; } ;
struct TYPE_2__ {int hdp; int vdp; int htp; int hsp; int hsw; int vtr; int vsp; int vsw; int disp_mode; } ;


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
 int FUNC_0 (struct carmine_fb*,int ) ;
 int FUNC_1 (struct carmine_fb*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct carmine_fb *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;





 VAR_17 = VAR_15->res->hdp - 1;
 VAR_18 = VAR_15->res->vdp - 1;
 VAR_19 = VAR_15->res->htp - 1;
 VAR_20 = VAR_15->res->hsp - 1;
 VAR_21 = VAR_15->res->hsw - 1;
 VAR_22 = VAR_15->res->vtr - 1;
 VAR_23 = VAR_15->res->vsp - 1;
 VAR_24 = VAR_15->res->vsw - 1;

 FUNC_1(VAR_15, VAR_7,
   VAR_19 << VAR_4);
 FUNC_1(VAR_15, VAR_6,
   (VAR_17 << VAR_2) | VAR_17);
 FUNC_1(VAR_15, VAR_8,
   (VAR_24 << VAR_12) |
   (VAR_21 << VAR_3) |
   (VAR_20));
 FUNC_1(VAR_15, VAR_10,
   VAR_22 << VAR_13);
 FUNC_1(VAR_15, VAR_9,
   (VAR_18 << VAR_11) | VAR_23);


 VAR_16 = FUNC_0(VAR_15, VAR_5);
 VAR_16 = (VAR_16 & ~VAR_1) |
  (VAR_15->res->disp_mode & VAR_1);

 VAR_16 |= VAR_0 | VAR_14;
 FUNC_1(VAR_15, VAR_5, VAR_16);
}
