
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static bt_status_t FUNC_4(bt_bdaddr_t *VAR_4, bool VAR_5)
{
    bool VAR_6 = 1;
    bdstr_t VAR_7;
    uint32_t VAR_8 = 0;

    FUNC_1(VAR_4, VAR_7, sizeof(VAR_7));

    FUNC_2(VAR_7, VAR_0, (int *)&VAR_8);
    VAR_6 = FUNC_3(VAR_7, VAR_0, VAR_1|VAR_8);
    if (VAR_6 == 0) {
        return VAR_2;
    }

    if (VAR_5) {
        FUNC_0();
    }

    return VAR_3;
}
