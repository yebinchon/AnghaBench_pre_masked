
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct TYPE_4__ {int lut; int addr; int cntl; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char,int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_4 (unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      struct fb_info *VAR_5)
{

 unsigned char VAR_6 =VAR_2>>8;
 unsigned char VAR_7=VAR_3>>8;
 unsigned char VAR_8 =VAR_4>>8;
 unsigned char VAR_9;
 unsigned long VAR_10;

 if (VAR_5->var.bits_per_pixel > 8) return 1;

 FUNC_1(VAR_10);





 VAR_9 = VAR_1 + (256-(1 << VAR_5->var.bits_per_pixel));


 FUNC_3(0xFF, &VAR_0->cntl); FUNC_2();


 FUNC_3(VAR_9, &VAR_0->addr); FUNC_2();


 FUNC_3(VAR_6, &VAR_0->lut); FUNC_2();
 FUNC_3(VAR_7, &VAR_0->lut); FUNC_2();
 FUNC_3(VAR_8, &VAR_0->lut);

 FUNC_0(VAR_10);
 return 0;
}
