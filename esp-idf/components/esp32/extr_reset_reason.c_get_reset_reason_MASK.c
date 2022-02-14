
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_reset_reason_t ;
typedef int RESET_REASON ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
__attribute__((used)) static esp_reset_reason_t FUNC_0(RESET_REASON VAR_10, esp_reset_reason_t VAR_11)
{
    switch (VAR_10) {
        case 138:
            return VAR_4;




        case 132:
        case 131:
        case 141:
            if (VAR_11 == VAR_3 ||
                VAR_11 == VAR_0 ||
                VAR_11 == VAR_7 ||
                VAR_11 == VAR_2) {
                return VAR_11;
            }
            return VAR_6;

        case 142:
            return VAR_1;

        case 130:
            return VAR_7;

        case 129:
            return VAR_2;

        case 139:
        case 134:
        case 135:
        case 136:
        case 128:
            return VAR_9;

        case 137:
            return VAR_0;

        case 133:
            return VAR_5;

        case 140:
        default:
            return VAR_8;
    }
}
