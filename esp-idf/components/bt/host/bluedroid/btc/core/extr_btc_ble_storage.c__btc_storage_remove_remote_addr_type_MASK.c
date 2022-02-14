
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bt_status_t FUNC_4(bt_bdaddr_t *VAR_3, bool VAR_4)
{
    bool VAR_5 = 1;
    bdstr_t VAR_6;
    uint32_t VAR_7 = 0;

    FUNC_1(VAR_3, VAR_6, sizeof(VAR_6));

    VAR_5 = FUNC_2(VAR_6, VAR_0, (int *)&VAR_7);
    if (VAR_5 == 0) {

        return VAR_2;
    }

    VAR_5 = FUNC_3(VAR_6, VAR_0);
    if (VAR_5 == 0) {
        return VAR_1;
    }

    if (VAR_4) {
        FUNC_0();
    }

    return VAR_2;
}
