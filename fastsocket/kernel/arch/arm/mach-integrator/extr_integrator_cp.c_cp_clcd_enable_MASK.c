
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct clcd_fb {TYPE_2__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct clcd_fb *VAR_9)
{
 u32 VAR_10;

 if (VAR_9->fb.var.bits_per_pixel <= 8)
  VAR_10 = VAR_4;
 else if (VAR_9->fb.var.bits_per_pixel <= 16)
  VAR_10 = VAR_3
   | VAR_0 | VAR_1
   | VAR_6 | VAR_7;
 else
  VAR_10 = 0;

 FUNC_0(VAR_2|
     VAR_0|
     VAR_1|
     VAR_6|
     VAR_7|
     VAR_5|
     VAR_8, VAR_10);
}
