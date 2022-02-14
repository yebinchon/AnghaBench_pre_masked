
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
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
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

__attribute__((used)) static esp_err_t FUNC_4(modem_dce_t *VAR_7, const char *VAR_8)
{
    esp_err_t VAR_9 = VAR_0;
    if (FUNC_3(VAR_8, VAR_4)) {
        VAR_9 = FUNC_0(VAR_7, VAR_6);
    } else if (FUNC_3(VAR_8, VAR_3)) {
        VAR_9 = FUNC_0(VAR_7, VAR_5);
    } else {
        int VAR_10 = FUNC_1(VAR_7->name, VAR_2, "%s", VAR_8);
        if (VAR_10 > 2) {

            FUNC_2(VAR_7->name, VAR_10);
            VAR_9 = VAR_1;
        }
    }
    return VAR_9;
}
