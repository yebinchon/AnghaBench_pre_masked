
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* connections; } ;
typedef TYPE_2__ TrackerServerInfo ;
struct TYPE_5__ {int port; } ;


 int FUNC_0 (TYPE_2__ const*,int ,char*,int const) ;

__attribute__((used)) static inline int FUNC_1(const TrackerServerInfo *VAR_0,
        char *VAR_1, const int VAR_2)
{
    return FUNC_0(VAR_0,
            VAR_0->connections[0].port, VAR_1, VAR_2);
}
