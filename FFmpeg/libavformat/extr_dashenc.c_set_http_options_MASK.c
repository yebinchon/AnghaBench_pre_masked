
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout; scalar_t__ http_persistent; scalar_t__ user_agent; scalar_t__ method; } ;
typedef TYPE_1__ DASHContext ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char*,scalar_t__,int ) ;
 int FUNC_1 (int **,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(AVDictionary **VAR_0, DASHContext *VAR_1)
{
    if (VAR_1->method)
        FUNC_0(VAR_0, "method", VAR_1->method, 0);
    if (VAR_1->user_agent)
        FUNC_0(VAR_0, "user_agent", VAR_1->user_agent, 0);
    if (VAR_1->http_persistent)
        FUNC_1(VAR_0, "multiple_requests", 1, 0);
    if (VAR_1->timeout >= 0)
        FUNC_1(VAR_0, "timeout", VAR_1->timeout, 0);
}
