
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int port; int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(TrackerServerInfo *VAR_0,
        const ConnectionInfo *VAR_1)
{
    return FUNC_0(VAR_0, VAR_1->ip_addr, VAR_1->port);
}
