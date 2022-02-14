
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mdns_result_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_3__* max_results; TYPE_2__* timeout; TYPE_1__* hostname; int end; } ;
struct TYPE_7__ {int* ival; } ;
struct TYPE_6__ {int* ival; } ;
struct TYPE_5__ {char** sval; } ;


 int VAR_0 ;
 int FUNC_0 (int,char**,void**) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int *,int *,int ,int,int,int **) ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(int VAR_3, char** VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3, VAR_4, (void**) &VAR_1);
    if (VAR_5 != 0) {
        FUNC_1(VAR_2, VAR_1.end, VAR_4[0]);
        return 1;
    }

    const char * VAR_6 = VAR_1.hostname->sval[0];
    int VAR_7 = VAR_1.timeout->ival[0];
    int VAR_8 = VAR_1.max_results->ival[0];

    if (!VAR_6 || !VAR_6[0]) {
        FUNC_5("ERROR: Hostname not supplied\n");
        return 1;
    }

    if (VAR_7 <= 0) {
        VAR_7 = 1000;
    }

    if (VAR_8 < 0 || VAR_8 > 255) {
        VAR_8 = 255;
    }

    FUNC_5("Query IP: %s.local, Timeout: %d, Max Results: %d\n", VAR_6, VAR_7, VAR_8);

    mdns_result_t * VAR_9 = ((void*)0);
    esp_err_t VAR_10 = FUNC_3(VAR_6, ((void*)0), ((void*)0), VAR_0, VAR_7, VAR_8, &VAR_9);
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
