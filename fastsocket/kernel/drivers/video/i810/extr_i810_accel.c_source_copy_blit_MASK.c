
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i810fb_par {int dummy; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fb_info*,scalar_t__) ;
 int FUNC_2 (struct i810fb_par*) ;

__attribute__((used)) static inline void FUNC_3(int VAR_4, int VAR_5, int VAR_6,
        int VAR_7, int VAR_8, int VAR_9, int VAR_10,
        int VAR_11, struct fb_info *VAR_12)
{
 struct i810fb_par *VAR_13 = VAR_12->par;

 if (FUNC_1(VAR_12, 24 + VAR_2)) return;

 FUNC_0(VAR_0 | VAR_3 | 4);
 FUNC_0(VAR_7 | VAR_10 << 16 | VAR_6 | VAR_1 | VAR_11);
 FUNC_0(VAR_5 << 16 | VAR_4);
 FUNC_0(VAR_9);
 FUNC_0(VAR_6);
 FUNC_0(VAR_8);

 FUNC_2(VAR_13);
}
