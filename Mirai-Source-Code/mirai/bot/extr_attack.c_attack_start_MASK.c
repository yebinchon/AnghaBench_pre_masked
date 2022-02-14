
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct attack_target {int dummy; } ;
struct attack_option {int dummy; } ;
struct TYPE_2__ {scalar_t__ vector; int (* func ) (int ,struct attack_target*,int ,struct attack_option*) ;} ;
typedef scalar_t__ ATTACK_VECTOR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct attack_target*,int ,struct attack_option*) ;

void FUNC_7(int VAR_2, ATTACK_VECTOR VAR_3, uint8_t VAR_4, struct attack_target *VAR_5, uint8_t VAR_6, struct attack_option *VAR_7)
{
    int VAR_8, VAR_9;

    VAR_8 = FUNC_1();
    if (VAR_8 == -1 || VAR_8 > 0)
        return;

    VAR_9 = FUNC_1();
    if (VAR_9 == -1)
        FUNC_0(0);
    else if (VAR_9 == 0)
    {
        FUNC_5(VAR_2);
        FUNC_3(FUNC_2(), 9);
        FUNC_0(0);
    }
    else
    {
        int VAR_10;

        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
        {
            if (VAR_0[VAR_10]->vector == VAR_3)
            {



                VAR_0[VAR_10]->func(VAR_4, VAR_5, VAR_6, VAR_7);
                break;
            }
        }


        FUNC_0(0);
    }
}
