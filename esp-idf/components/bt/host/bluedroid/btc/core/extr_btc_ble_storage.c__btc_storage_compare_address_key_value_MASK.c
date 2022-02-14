
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;






 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char const*,void*,int) ;

bool FUNC_2(bt_bdaddr_t *VAR_6,
                                                   uint8_t VAR_7, void *VAR_8, int VAR_9)
{
    bdstr_t VAR_10;
    FUNC_0(VAR_6, VAR_10, sizeof(VAR_10));
    const char *VAR_11;
    switch (VAR_7) {
    case 129:
        VAR_11 = VAR_4;
        break;
    case 128:
        VAR_11 = VAR_5;
        break;
    case 130:
        VAR_11 = VAR_3;
        break;
    case 132:
        VAR_11 = VAR_1;
        break;
    case 133:
        VAR_11 = VAR_0;
        break;
    case 131:
        VAR_11 = VAR_2;
    default:
        return 0;
    }

    return FUNC_1(VAR_10, VAR_11, VAR_8, VAR_9);
}
