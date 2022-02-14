
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char const*,int const*,int) ;

__attribute__((used)) static bt_status_t FUNC_3(bt_bdaddr_t *VAR_8,
                                            char *VAR_9,
                                            uint8_t VAR_10,
                                            uint8_t VAR_11)
{
    bdstr_t VAR_12;
    FUNC_1(VAR_8, VAR_12, sizeof(VAR_12));
    const char* VAR_13;

    switch (VAR_10) {
    case 129:
        VAR_13 = VAR_4;
        break;
    case 128:
        VAR_13 = VAR_5;
        break;
    case 130:
        VAR_13 = VAR_3;
        break;
    case 132:
        VAR_13 = VAR_1;
        break;
    case 133:
        VAR_13 = VAR_0;
        break;
    case 131:
        VAR_13 = VAR_2;
        break;
    default:
        return VAR_6;
    }

    int VAR_14 = FUNC_2(VAR_12, VAR_13, (const uint8_t *)VAR_9, VAR_11);
    FUNC_0();
    return VAR_14 ? VAR_7 : VAR_6;
}
