
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int url; } ;
struct TYPE_5__ {char* method; char* user_agent; int timeout; char* headers; scalar_t__ http_persistent; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char*,char*,int ) ;
 int FUNC_1 (int **,char*,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_0, AVDictionary **VAR_1, HLSContext *VAR_2)
{
    int VAR_3 = FUNC_2(VAR_0->url);

    if (VAR_2->method) {
        FUNC_0(VAR_1, "method", VAR_2->method, 0);
    } else if (VAR_3) {
        FUNC_0(VAR_1, "method", "PUT", 0);
    }
    if (VAR_2->user_agent)
        FUNC_0(VAR_1, "user_agent", VAR_2->user_agent, 0);
    if (VAR_2->http_persistent)
        FUNC_1(VAR_1, "multiple_requests", 1, 0);
    if (VAR_2->timeout >= 0)
        FUNC_1(VAR_1, "timeout", VAR_2->timeout, 0);
    if (VAR_2->headers)
        FUNC_0(VAR_1, "headers", VAR_2->headers, 0);
}
