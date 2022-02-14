
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timefilter; int ports; int filled_pkts; int new_pkts; int packet_count; scalar_t__ client; scalar_t__ activated; } ;
typedef TYPE_1__ JackData ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(JackData *VAR_0)
{
    if (VAR_0->client) {
        if (VAR_0->activated)
            FUNC_4(VAR_0->client);
        FUNC_3(VAR_0->client);
    }
    FUNC_5(&VAR_0->packet_count);
    FUNC_2(&VAR_0->new_pkts);
    FUNC_2(&VAR_0->filled_pkts);
    FUNC_0(&VAR_0->ports);
    FUNC_1(VAR_0->timefilter);
}
