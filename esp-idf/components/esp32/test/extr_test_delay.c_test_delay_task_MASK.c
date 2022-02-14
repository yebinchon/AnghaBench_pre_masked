
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int method; int delay_us; int result; int done; } ;
typedef TYPE_1__ delay_test_arg_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void* VAR_1)
{
    delay_test_arg_t* VAR_2 = (delay_test_arg_t*) VAR_1;
    FUNC_3(1);
    uint64_t VAR_3 = FUNC_2();
    switch (VAR_2->method) {
        case 0:
            FUNC_1(VAR_2->delay_us);
            break;
        case 1:
            FUNC_3(VAR_2->delay_us / VAR_0 / 1000);
            break;
        default:
            FUNC_0();
    }
    uint64_t VAR_4 = FUNC_2();

    VAR_2->result = (int) (VAR_4 - VAR_3);
    FUNC_5(VAR_2->done);
    FUNC_4(((void*)0));
}
