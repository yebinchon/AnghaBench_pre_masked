
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i810fb_par {int dummy; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct fb_info*,scalar_t__) ;
 int FUNC_2 (struct i810fb_par*) ;

__attribute__((used)) static inline void FUNC_3(int VAR_4, int VAR_5, int VAR_6,
       int VAR_7, int VAR_8, int VAR_9,
       int VAR_10, const u32 *VAR_11, int VAR_12,
       int VAR_13, struct fb_info *VAR_14)
{
 struct i810fb_par *VAR_15 = VAR_14->par;

 if (FUNC_1(VAR_14, 24 + (VAR_7 << 2) + VAR_2)) return;

 FUNC_0(VAR_0 | VAR_3 | (4 + VAR_7));
 FUNC_0(VAR_1 | VAR_8 | VAR_9 << 16 | VAR_6);
 FUNC_0(VAR_5 << 16 | VAR_4);
 FUNC_0(VAR_10);
 FUNC_0(VAR_12);
 FUNC_0(VAR_13);
 while (VAR_7--)
  FUNC_0(*VAR_11++);

 FUNC_2(VAR_15);
}
