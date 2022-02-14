
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mdns_result_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_12__ {TYPE_5__* max_results; TYPE_4__* timeout; TYPE_3__* proto; TYPE_2__* service; TYPE_1__* instance; int end; } ;
struct TYPE_11__ {int* ival; } ;
struct TYPE_10__ {int* ival; } ;
struct TYPE_9__ {char** sval; } ;
struct TYPE_8__ {char** sval; } ;
struct TYPE_7__ {char** sval; } ;


 int VAR_0 ;
 int FUNC_0 (int,char**,void**) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char const*,char const*,int ,int,int,int **) ;
 int FUNC_4 (int *) ;
 TYPE_6__ VAR_1 ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(int VAR_3, char** VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3, VAR_4, (void**) &VAR_1);
    if (VAR_5 != 0) {
        FUNC_1(VAR_2, VAR_1.end, VAR_4[0]);
        return 1;
    }

    const char * VAR_6 = VAR_1.instance->sval[0];
    const char * VAR_7 = VAR_1.service->sval[0];
    const char * VAR_8 = VAR_1.proto->sval[0];
    int VAR_9 = VAR_1.timeout->ival[0];
    int VAR_10 = VAR_1.max_results->ival[0];

    if (VAR_9 <= 0) {
        VAR_9 = 5000;
    }

    if (VAR_10 < 0 || VAR_10 > 255) {
        VAR_10 = 255;
    }

    FUNC_5("Query SVC: %s.%s.%s.local, Timeout: %d, Max Results: %d\n", VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    mdns_result_t * VAR_11 = ((void*)0);
    esp_err_t VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_0, VAR_9, VAR_10, &VAR_11);
    if (VAR_12) {
        FUNC_5("ERROR: Query Failed\n");
        return 1;
    }
    if (!VAR_11) {
        FUNC_5("No results found!\n");
        return 0;
    }

    FUNC_2(VAR_11);
    FUNC_4(VAR_11);
    return 0;
}
