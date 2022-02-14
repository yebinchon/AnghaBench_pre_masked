
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ item_num; char* item_str; scalar_t__ cur_statement; } ;
typedef TYPE_1__ esp_gps_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static esp_err_t FUNC_7(esp_gps_t *VAR_9)
{
    esp_err_t VAR_10 = VAR_1;

    if (VAR_9->item_num == 0 && VAR_9->item_str[0] == '$') {
        if (0) {
        }
        else {
            VAR_9->cur_statement = VAR_7;
        }
        goto out;
    }

    if (VAR_9->cur_statement == VAR_7) {
        goto out;
    }
    else {
        VAR_10 = VAR_0;
    }
out:
    return VAR_10;
}
