
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cJSON ;
struct TYPE_4__ {scalar_t__ no_pop; scalar_t__ no_sec; } ;
struct TYPE_5__ {TYPE_1__ capabilities; int version; } ;
struct TYPE_6__ {TYPE_2__ mgr_info; scalar_t__ app_info_json; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (scalar_t__,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static cJSON* FUNC_7(void)
{
    cJSON *VAR_1 = VAR_0->app_info_json ?
                                FUNC_6(VAR_0->app_info_json, 1) : FUNC_4();
    cJSON *VAR_2 = FUNC_4();
    cJSON *VAR_3 = FUNC_3();


    FUNC_1(VAR_1, "prov", VAR_2);


    FUNC_2(VAR_2, "ver", VAR_0->mgr_info.version);


    FUNC_1(VAR_2, "cap", VAR_3);


    if (VAR_0->mgr_info.capabilities.no_sec) {
        FUNC_0(VAR_3, FUNC_5("no_sec"));
    } else if (VAR_0->mgr_info.capabilities.no_pop) {
        FUNC_0(VAR_3, FUNC_5("no_pop"));
    }


    FUNC_0(VAR_3, FUNC_5("wifi_scan"));
    return VAR_1;
}
