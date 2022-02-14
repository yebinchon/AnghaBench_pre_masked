
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i810fb_par {int dummy; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct fb_info*,scalar_t__) ;
 int FUNC_2 (struct i810fb_par*) ;

__attribute__((used)) static inline void FUNC_3(int VAR_6, int VAR_7, int VAR_8, int VAR_9,
         int VAR_10, int VAR_11, int VAR_12,
         struct fb_info *VAR_13)
{
 struct i810fb_par *VAR_14 = VAR_13->par;

 if (FUNC_1(VAR_13, 24 + VAR_3)) return;

 FUNC_0(VAR_0 | VAR_1 | 3);
 FUNC_0(VAR_10 << 16 | VAR_8 | VAR_5 | VAR_2 | VAR_12);
 FUNC_0(VAR_7 << 16 | VAR_6);
 FUNC_0(VAR_9);
 FUNC_0(VAR_11);
 FUNC_0(VAR_4);

 FUNC_2(VAR_14);
}
