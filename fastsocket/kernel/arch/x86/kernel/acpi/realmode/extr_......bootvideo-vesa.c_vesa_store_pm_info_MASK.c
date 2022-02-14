
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct biosregs {int ax; int di; int es; } ;
struct TYPE_3__ {int vesapm_off; int vesapm_seg; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_1, VAR_2;

 FUNC_0(&VAR_1);
 VAR_1.ax = 0x4f0a;
 FUNC_1(0x10, &VAR_1, &VAR_2);

 if (VAR_2.ax != 0x004f)
  return;

 VAR_0.screen_info.vesapm_seg = VAR_2.es;
 VAR_0.screen_info.vesapm_off = VAR_2.di;
}
