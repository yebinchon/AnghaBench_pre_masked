
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bt_status_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char const*,int*,size_t*) ;

__attribute__((used)) static bt_status_t FUNC_1(uint8_t VAR_7,
                                          char *VAR_8,
                                          int VAR_9)
{
    const char* VAR_10;
    switch (VAR_7) {
    case 129:
        VAR_10 = VAR_3;
        break;
    case 128:
        VAR_10 = VAR_2;
        break;
    case 131:
        VAR_10 = VAR_0;
        break;
    case 130:
        VAR_10 = VAR_1;
        break;
    default:
        return VAR_5;
    }
    size_t VAR_11 = VAR_9;

    int VAR_12 = FUNC_0(VAR_4, VAR_10, (uint8_t *)VAR_8, &VAR_11);

    return VAR_12 ? VAR_6 : VAR_5;
}
