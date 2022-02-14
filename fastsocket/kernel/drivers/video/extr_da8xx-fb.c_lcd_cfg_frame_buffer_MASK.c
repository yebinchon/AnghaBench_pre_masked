
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da8xx_fb_par {int palette_sz; int databuf_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct da8xx_fb_par *VAR_7, u32 VAR_8, u32 VAR_9,
  u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13;


 VAR_13 = FUNC_0(VAR_1);
 FUNC_1(VAR_13 & ~VAR_2,
      VAR_1);



 VAR_8 &= 0x3f0;
 VAR_13 = FUNC_0(VAR_5);
 VAR_13 &= 0xfffffc00;
 VAR_13 |= ((VAR_8 >> 4) - 1) << 4;
 FUNC_1(VAR_13, VAR_5);


 VAR_13 = FUNC_0(VAR_6);
 VAR_13 = ((VAR_9 - 1) & 0x3ff) | (VAR_13 & 0xfffffc00);
 FUNC_1(VAR_13, VAR_6);


 VAR_13 = FUNC_0(VAR_3) & ~(1 << 8);
 if (VAR_11)
  VAR_13 |= VAR_4;
 FUNC_1(VAR_13, VAR_3);

 switch (VAR_10) {
 case 1:
 case 2:
 case 4:
 case 16:
  VAR_7->palette_sz = 16 * 2;
  break;

 case 8:
  VAR_7->palette_sz = 256 * 2;
  break;

 default:
  return -VAR_0;
 }

 VAR_12 = VAR_8 * VAR_10 / 8;
 VAR_7->databuf_sz = VAR_9 * VAR_12 + VAR_7->palette_sz;

 return 0;
}
