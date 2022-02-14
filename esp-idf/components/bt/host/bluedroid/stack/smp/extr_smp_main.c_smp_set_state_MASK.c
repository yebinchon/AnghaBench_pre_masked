
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tSMP_STATE ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(tSMP_STATE VAR_2)
{
    if (VAR_2 < VAR_0) {
        FUNC_0( "State change: %s(%d) ==> %s(%d)",
                         FUNC_1(VAR_1.state), VAR_1.state,
                         FUNC_1(VAR_2), VAR_2 );
        VAR_1.state = VAR_2;
    } else {
        FUNC_0("smp_set_state invalid state =%d", VAR_2 );
    }
}
