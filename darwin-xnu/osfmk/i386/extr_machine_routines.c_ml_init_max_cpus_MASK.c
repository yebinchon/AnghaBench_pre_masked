
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ integer_t ;
typedef int event_t ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ max_cpus; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,int ) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(unsigned long VAR_7)
{
        boolean_t VAR_8;

        VAR_8 = FUNC_1(VAR_0);
        if (VAR_5 != VAR_2) {
                if (VAR_7 > 0 && VAR_7 <= VAR_1) {






                        VAR_4.max_cpus = (integer_t)FUNC_0(VAR_7, VAR_6);
  }
                if (VAR_5 == VAR_3)
                        FUNC_2((event_t)&VAR_5);
                VAR_5 = VAR_2;
        }
        (void) FUNC_1(VAR_8);
}
