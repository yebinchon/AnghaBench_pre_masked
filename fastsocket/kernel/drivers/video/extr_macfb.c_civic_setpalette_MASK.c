
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct TYPE_4__ {int lut; int status2; scalar_t__ vbl_addr; int addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 void* FUNC_3 (int *) ;
 unsigned long* FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7 (unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        struct fb_info *VAR_6)
{
 static int VAR_7 = -1;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_6->var.bits_per_pixel > 8) return 1;

 VAR_3 >>= 8;
 VAR_4 >>= 8;
 VAR_5 >>= 8;

 FUNC_1(VAR_8);




 FUNC_5(VAR_2, &VAR_1->addr); FUNC_2();
 VAR_9 = FUNC_3(&VAR_1->status2);

 if ((VAR_9 & 0x0008) == 0)
 {
  FUNC_5( VAR_3, &VAR_1->lut); FUNC_2();
  FUNC_5(VAR_4, &VAR_1->lut); FUNC_2();
  FUNC_5( VAR_5, &VAR_1->lut); FUNC_2();
  FUNC_5( 0x00, &VAR_1->lut); FUNC_2();
 }
 else
 {
  unsigned char VAR_10;

  VAR_10 = FUNC_3(&VAR_1->lut); FUNC_2();
  VAR_10 = FUNC_3(&VAR_1->lut); FUNC_2();
  VAR_10 = FUNC_3(&VAR_1->lut); FUNC_2();
  VAR_10 = FUNC_3(&VAR_1->lut); FUNC_2();

  if ((VAR_9 & 0x000D) != 0)
  {
   FUNC_5(0x00, &VAR_1->lut); FUNC_2();
   FUNC_5(0x00, &VAR_1->lut); FUNC_2();
  }

  FUNC_5( VAR_3, &VAR_1->lut); FUNC_2();
  FUNC_5(VAR_4, &VAR_1->lut); FUNC_2();
  FUNC_5( VAR_5, &VAR_1->lut); FUNC_2();
  FUNC_5( VAR_10, &VAR_1->lut); FUNC_2();
 }

 FUNC_0(VAR_8);
 VAR_7 = VAR_2;
 return 0;
}
