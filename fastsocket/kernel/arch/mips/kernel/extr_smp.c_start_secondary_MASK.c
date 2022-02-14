
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int udelay_val; } ;
struct TYPE_3__ {int (* smp_finish ) () ;int (* init_secondary ) () ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;

void FUNC_15(void)
{
 unsigned int VAR_5;





 FUNC_2();
 FUNC_3();
 FUNC_7();
 FUNC_5();
 VAR_4->init_secondary();






 FUNC_0();
 FUNC_8();
 VAR_5 = FUNC_11();
 VAR_2[VAR_5].udelay_val = VAR_3;

 FUNC_6(VAR_5);

 VAR_4->smp_finish();
 FUNC_10(VAR_5);

 FUNC_4(VAR_5, VAR_1);

 FUNC_14();

 FUNC_1();
}
