
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mdns_result_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_10__ {TYPE_4__* max_results; TYPE_3__* timeout; TYPE_2__* proto; TYPE_1__* service; int end; } ;
struct TYPE_9__ {int* ival; } ;
struct TYPE_8__ {int* ival; } ;
struct TYPE_7__ {char** sval; } ;
struct TYPE_6__ {char** sval; } ;


 int FUNC_0 (int,char**,void**) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char const*,int,int,int **) ;
 TYPE_5__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(int VAR_2, char** VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2, VAR_3, (void**) &VAR_0);
    if (VAR_4 != 0) {
        FUNC_1(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    const char * VAR_5 = VAR_0.service->sval[0];
    const char * VAR_6 = VAR_0.proto->sval[0];
    int VAR_7 = VAR_0.timeout->ival[0];
    int VAR_8 = VAR_0.max_results->ival[0];

    if (VAR_7 <= 0) {
        VAR_7 = 5000;
    }

    if (VAR_8 <= 0 || VAR_8 > 255) {
        VAR_8 = 255;
    }

    FUNC_5("Query PTR: %s.%s.local, Timeout: %d, Max Results: %d\n", VAR_5, VAR_6, VAR_7, VAR_8);

    mdns_result_t * VAR_9 = ((void*)0);
    esp_err_t VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9);
    if (VAR_10) {
        FUNC_5("ERROR: Query Failed\n");
        return 1;
    }
    if (!VAR_9) {
        FUNC_5("No results found!\n");
        return 0;
    }

    FUNC_2(VAR_9);
    FUNC_4(VAR_9);
    return 0;
}
