
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jack_xrun; int timefilter; } ;
typedef TYPE_1__ JackData ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
    JackData *VAR_1 = VAR_0;
    VAR_1->jack_xrun = 1;
    FUNC_0(VAR_1->timefilter);
    return 0;
}
