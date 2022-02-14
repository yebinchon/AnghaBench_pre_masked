
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ t0; } ;
struct TYPE_4__ {TYPE_1__ int_raw; } ;
typedef scalar_t__ RESET_REASON ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
    RESET_REASON VAR_2 = FUNC_2(0);
    if(VAR_2 != VAR_0){
        FUNC_1("Not software reset\n");
    }
    FUNC_0(VAR_0, VAR_2);
    FUNC_3();

    FUNC_0(0, VAR_1);
}
