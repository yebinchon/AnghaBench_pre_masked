
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int gps_t ;
struct TYPE_4__ {char* buffer; int asterisk; size_t item_pos; int cur_statement; char crc; scalar_t__ sat_count; scalar_t__ sat_num; char* item_str; int parsed_statement; int all_statements; char parent; int event_loop_hdl; scalar_t__ item_num; } ;
typedef TYPE_1__ esp_gps_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;

 int FUNC_1 (int ,int ,int ,char*,size_t,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char*,int *,int) ;

__attribute__((used)) static esp_err_t FUNC_4(esp_gps_t *VAR_7, size_t VAR_8)
{
    const uint8_t *VAR_9 = VAR_7->buffer;
    while (*VAR_9) {

        if (*VAR_9 == '$') {

            VAR_7->asterisk = 0;
            VAR_7->item_num = 0;
            VAR_7->item_pos = 0;
            VAR_7->cur_statement = 0;
            VAR_7->crc = 0;
            VAR_7->sat_count = 0;
            VAR_7->sat_num = 0;

            VAR_7->item_str[VAR_7->item_pos++] = *VAR_9;
            VAR_7->item_str[VAR_7->item_pos] = '\0';
        }

        else if (*VAR_9 == ',') {

            FUNC_2(VAR_7);

            VAR_7->crc ^= (uint8_t)(*VAR_9);

            VAR_7->item_pos = 0;
            VAR_7->item_str[0] = '\0';
            VAR_7->item_num++;
        }

        else if (*VAR_9 == '*') {

            FUNC_2(VAR_7);

            VAR_7->asterisk = 1;

            VAR_7->item_pos = 0;
            VAR_7->item_str[0] = '\0';
            VAR_7->item_num++;
        }

        else if (*VAR_9 == '\r') {

            uint8_t VAR_10 = (uint8_t)FUNC_3(VAR_7->item_str, ((void*)0), 16);

            if (VAR_7->crc == VAR_10) {
                switch (VAR_7->cur_statement) {
                default:
                    break;
                }

                if (((VAR_7->parsed_statement) & VAR_7->all_statements) == VAR_7->all_statements) {
                    VAR_7->parsed_statement = 0;

                    FUNC_1(VAR_7->event_loop_hdl, VAR_0, VAR_4,
                                      &(VAR_7->parent), sizeof(gps_t), 100 / VAR_6);
                }
            } else {
                FUNC_0(VAR_2, "CRC Error for statement:%s", VAR_7->buffer);
            }
            if (VAR_7->cur_statement == VAR_5) {

                FUNC_1(VAR_7->event_loop_hdl, VAR_0, VAR_3,
                                  VAR_7->buffer, VAR_8, 100 / VAR_6);
            }
        }

        else {
            if (!(VAR_7->asterisk)) {

                VAR_7->crc ^= (uint8_t)(*VAR_9);
            }

            VAR_7->item_str[VAR_7->item_pos++] = *VAR_9;
            VAR_7->item_str[VAR_7->item_pos] = '\0';
        }

        VAR_9++;
    }
    return VAR_1;
}
