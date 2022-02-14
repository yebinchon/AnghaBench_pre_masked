
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ msb_right; } ;
struct TYPE_5__ {TYPE_1__ green; } ;
struct TYPE_6__ {TYPE_2__ var; } ;
struct clcd_fb {TYPE_3__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clcd_fb*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct clcd_fb *VAR_4)
{
 unsigned int VAR_5;

 VAR_4->fb.var.green.length = 5;
 VAR_4->fb.var.green.msb_right = 0;


 VAR_5 = FUNC_1(VAR_2);
 FUNC_2(VAR_5, VAR_2);

 FUNC_2(3, VAR_3);

 VAR_5 = FUNC_1(VAR_1);
 FUNC_2(VAR_5 | 1, VAR_1);

 VAR_5 = FUNC_1(VAR_0);
 FUNC_2(VAR_5 | 1, VAR_0);
 return FUNC_0(VAR_4);
}
