
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(u_int VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
       u_int VAR_6, struct fb_info *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_2 >= (1 << VAR_7->var.bits_per_pixel))
  return 1;


 VAR_8 = (VAR_3 * 77 + VAR_4 * 151 + VAR_5 * 28) >> 20;
 if (FUNC_2()) {
  VAR_8 = 15 - VAR_8;
 }

 VAR_10 = 4 * (VAR_2 & 7);
 VAR_8 <<= VAR_10;
 VAR_9 = 15 << VAR_10;
 VAR_8 &= VAR_9;

 VAR_2 = VAR_2 < 8 ? VAR_0 : VAR_1;

 VAR_11 = FUNC_0(VAR_2);
 VAR_11 = (VAR_11 & ~VAR_9) | VAR_8;
 FUNC_1(VAR_11, VAR_2);

 return 0;
}
