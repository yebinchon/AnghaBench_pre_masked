
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int charge_mode; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int (* charge ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_0(VAR_1);
 VAR_2.machinfo->charge(0);
 VAR_2.charge_mode = VAR_0;
}
