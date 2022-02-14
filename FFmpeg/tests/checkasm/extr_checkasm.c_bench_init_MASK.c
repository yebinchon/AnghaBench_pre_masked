
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nop_time; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_4(void)
{



    int VAR_1 = FUNC_0();

    if (VAR_1 < 0)
        return VAR_1;

    VAR_0.nop_time = FUNC_2();
    FUNC_3("nop: %d.%d\n", VAR_0.nop_time/10, VAR_0.nop_time%10);
    return 0;
}
