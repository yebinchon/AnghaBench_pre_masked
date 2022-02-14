
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da8xx_fb_par {int p_palette_base; int databuf_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_7, struct da8xx_fb_par *VAR_8)
{
 u32 VAR_9 = VAR_8->p_palette_base + VAR_8->databuf_sz - 4;
 u32 VAR_10;


 FUNC_2(VAR_8->p_palette_base, VAR_0);
 FUNC_2(VAR_9, VAR_1);


 VAR_10 = FUNC_1(VAR_2);
 VAR_10 &= ~(3 << 20);
 if (VAR_7 == VAR_3)
  VAR_10 |= FUNC_0(VAR_5);
 else if (VAR_7 == VAR_4)
  VAR_10 |= FUNC_0(VAR_6);

 FUNC_2(VAR_10, VAR_2);
}
