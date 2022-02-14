
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pa_context_state_t ;
struct TYPE_3__ {int mainloop; int ctx; } ;
typedef TYPE_1__ PulseData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(PulseData *VAR_4)
{
    pa_context_state_t VAR_5;

    while ((VAR_5 = FUNC_0(VAR_4->ctx)) != VAR_2) {
        if (VAR_5 == VAR_1 || VAR_5 == VAR_3)
            return VAR_0;
        FUNC_1(VAR_4->mainloop);
    }
    return 0;
}
