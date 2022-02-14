
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct biosregs {int ah; int dh; int dl; } ;
struct TYPE_3__ {int orig_y; int orig_x; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_1, VAR_2;

 FUNC_0(&VAR_1);
 VAR_1.ah = 0x03;
 FUNC_1(0x10, &VAR_1, &VAR_2);

 VAR_0.screen_info.orig_x = VAR_2.dl;
 VAR_0.screen_info.orig_y = VAR_2.dh;
}
