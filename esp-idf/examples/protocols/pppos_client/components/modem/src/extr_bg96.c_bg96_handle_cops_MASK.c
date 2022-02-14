
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {int oper; } ;
typedef TYPE_1__ modem_dce_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ,char*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,int) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*,size_t) ;
 scalar_t__ FUNC_8 (char const*,int ) ;
 char* FUNC_9 (char*,char*,char**) ;

__attribute__((used)) static esp_err_t FUNC_10(modem_dce_t *VAR_7, const char *VAR_8)
{
    esp_err_t VAR_9 = VAR_0;
    if (FUNC_8(VAR_8, VAR_4)) {
        VAR_9 = FUNC_0(VAR_7, VAR_6);
    } else if (FUNC_8(VAR_8, VAR_3)) {
        VAR_9 = FUNC_0(VAR_7, VAR_5);
    } else if (!FUNC_7(VAR_8, "+COPS", FUNC_6("+COPS"))) {


        size_t VAR_10 = FUNC_6(VAR_8);
        char *VAR_11 = FUNC_2(VAR_10 + 1);
        FUNC_4(VAR_11, VAR_8);

        char *VAR_12 = ((void*)0);
        char *VAR_13[3];
        uint8_t VAR_14 = 0;

        VAR_13[VAR_14] = FUNC_9(VAR_11, ",", &VAR_12);
        while (VAR_13[VAR_14]) {
            VAR_13[++VAR_14] = FUNC_9(((void*)0), ",", &VAR_12);
        }
        if (VAR_14 >= 3) {
            int VAR_15 = FUNC_3(VAR_7->oper, VAR_2, "%s", VAR_13[2]);
            if (VAR_15 > 2) {

                FUNC_5(VAR_7->oper, VAR_15);
                VAR_9 = VAR_1;
            }
        }
        FUNC_1(VAR_11);
    }
    return VAR_9;
}
