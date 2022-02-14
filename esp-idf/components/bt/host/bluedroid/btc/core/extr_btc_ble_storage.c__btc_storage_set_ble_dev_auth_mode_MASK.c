
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bt_status_t FUNC_3(bt_bdaddr_t *VAR_3, uint8_t VAR_4, bool VAR_5)
{
    int VAR_6;
    bdstr_t VAR_7;

    FUNC_1(VAR_3, VAR_7, sizeof(bdstr_t));
    VAR_6 = FUNC_2(VAR_7, VAR_0, (int)VAR_4);
    if (VAR_6 == 0) {
        return VAR_1;
    }

    if (VAR_5) {
        FUNC_0();
    }

    return VAR_2;
}
