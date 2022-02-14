
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; scalar_t__ connections; scalar_t__ index; } ;
typedef TYPE_1__ TrackerServerInfo ;


 int FUNC_0 (scalar_t__,char const*,int const) ;

void FUNC_1(TrackerServerInfo *VAR_0,
        const char *VAR_1, const int VAR_2)
{
    VAR_0->count = 1;
    VAR_0->index = 0;
    FUNC_0(VAR_0->connections + 0, VAR_1, VAR_2);
}
