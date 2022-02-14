
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpu_flag; char const* cpu_flag_name; int current_test_name; scalar_t__ test_name; } ;
struct TYPE_3__ {int (* func ) () ;int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_0.cpu_flag;

    VAR_3 |= VAR_4;
    FUNC_0(-1);
    VAR_0.cpu_flag = VAR_3 & FUNC_1();
    FUNC_0(VAR_0.cpu_flag);

    if (!VAR_3 || VAR_0.cpu_flag != VAR_4) {
        int VAR_5;

        VAR_0.cpu_flag_name = VAR_2;
        for (VAR_5 = 0; VAR_1[VAR_5].func; VAR_5++) {
            if (VAR_0.test_name && FUNC_2(VAR_1[VAR_5].name, VAR_0.test_name))
                continue;
            VAR_0.current_test_name = VAR_1[VAR_5].name;
            VAR_1[VAR_5].func();
        }
    }
}
