
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int event_t ;
typedef int boolean_t ;
struct TYPE_2__ {int max_cpus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(void)
{
        boolean_t VAR_7;

        VAR_7 = FUNC_1(VAR_0);
        if (VAR_6 != VAR_1) {
                VAR_6 = VAR_2;
                FUNC_0((event_t)&VAR_6, VAR_4);
                (void)FUNC_2(VAR_3);
        }
        (void) FUNC_1(VAR_7);
        return(VAR_5.max_cpus);
}
