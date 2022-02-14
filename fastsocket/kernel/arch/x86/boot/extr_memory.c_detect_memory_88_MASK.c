
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct biosregs {int ah; int eflags; int ax; } ;
struct TYPE_3__ {int ext_mem_k; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct biosregs VAR_2, VAR_3;

 FUNC_0(&VAR_2);
 VAR_2.ah = 0x88;
 FUNC_1(0x15, &VAR_2, &VAR_3);

 VAR_1.screen_info.ext_mem_k = VAR_3.ax;

 return -(VAR_3.eflags & VAR_0);
}
