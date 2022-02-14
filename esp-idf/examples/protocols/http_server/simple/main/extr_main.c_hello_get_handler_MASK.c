
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int param ;
struct TYPE_9__ {scalar_t__ user_ctx; } ;
typedef TYPE_1__ httpd_req_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,char*,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*,size_t) ;
 int FUNC_7 (TYPE_1__*,char const*,int ) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;
 char* FUNC_9 (size_t) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_11(httpd_req_t *VAR_2)
{
    char* VAR_3;
    size_t VAR_4;



    VAR_4 = FUNC_3(VAR_2, "Host") + 1;
    if (VAR_4 > 1) {
        VAR_3 = FUNC_9(VAR_4);

        if (FUNC_4(VAR_2, "Host", VAR_3, VAR_4) == VAR_0) {
            FUNC_0(VAR_1, "Found header => Host: %s", VAR_3);
        }
        FUNC_1(VAR_3);
    }

    VAR_4 = FUNC_3(VAR_2, "Test-Header-2") + 1;
    if (VAR_4 > 1) {
        VAR_3 = FUNC_9(VAR_4);
        if (FUNC_4(VAR_2, "Test-Header-2", VAR_3, VAR_4) == VAR_0) {
            FUNC_0(VAR_1, "Found header => Test-Header-2: %s", VAR_3);
        }
        FUNC_1(VAR_3);
    }

    VAR_4 = FUNC_3(VAR_2, "Test-Header-1") + 1;
    if (VAR_4 > 1) {
        VAR_3 = FUNC_9(VAR_4);
        if (FUNC_4(VAR_2, "Test-Header-1", VAR_3, VAR_4) == VAR_0) {
            FUNC_0(VAR_1, "Found header => Test-Header-1: %s", VAR_3);
        }
        FUNC_1(VAR_3);
    }



    VAR_4 = FUNC_5(VAR_2) + 1;
    if (VAR_4 > 1) {
        VAR_3 = FUNC_9(VAR_4);
        if (FUNC_6(VAR_2, VAR_3, VAR_4) == VAR_0) {
            FUNC_0(VAR_1, "Found URL query => %s", VAR_3);
            char VAR_5[32];

            if (FUNC_2(VAR_3, "query1", VAR_5, sizeof(VAR_5)) == VAR_0) {
                FUNC_0(VAR_1, "Found URL query parameter => query1=%s", VAR_5);
            }
            if (FUNC_2(VAR_3, "query3", VAR_5, sizeof(VAR_5)) == VAR_0) {
                FUNC_0(VAR_1, "Found URL query parameter => query3=%s", VAR_5);
            }
            if (FUNC_2(VAR_3, "query2", VAR_5, sizeof(VAR_5)) == VAR_0) {
                FUNC_0(VAR_1, "Found URL query parameter => query2=%s", VAR_5);
            }
        }
        FUNC_1(VAR_3);
    }


    FUNC_8(VAR_2, "Custom-Header-1", "Custom-Value-1");
    FUNC_8(VAR_2, "Custom-Header-2", "Custom-Value-2");



    const char* VAR_6 = (const char*) VAR_2->user_ctx;
    FUNC_7(VAR_2, VAR_6, FUNC_10(VAR_6));



    if (FUNC_3(VAR_2, "Host") == 0) {
        FUNC_0(VAR_1, "Request headers lost");
    }
    return VAR_0;
}
