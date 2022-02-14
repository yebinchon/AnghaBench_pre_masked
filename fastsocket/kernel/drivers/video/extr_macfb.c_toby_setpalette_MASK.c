
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toby_cmap_regs {int lut; int addr; } ;
struct TYPE_2__ {unsigned int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 struct toby_cmap_regs* FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      struct fb_info *VAR_5)
{
 volatile struct toby_cmap_regs *VAR_6 =
  FUNC_3(VAR_0);
 unsigned int VAR_7 = VAR_5->var.bits_per_pixel;

 unsigned char VAR_8 =~(VAR_2>>8);
 unsigned char VAR_9=~(VAR_3>>8);
 unsigned char VAR_10 =~(VAR_4>>8);
 unsigned char VAR_11 = (VAR_1 << (8 - VAR_7)) | (0xFF >> VAR_7);
 unsigned long VAR_12;

 FUNC_1(VAR_12);

 FUNC_4(VAR_11, &VAR_6->addr); FUNC_2();
 FUNC_4(VAR_8, &VAR_6->lut); FUNC_2();
 FUNC_4(VAR_9, &VAR_6->lut); FUNC_2();
 FUNC_4(VAR_10, &VAR_6->lut);

 FUNC_0(VAR_12);
 return 0;
}
