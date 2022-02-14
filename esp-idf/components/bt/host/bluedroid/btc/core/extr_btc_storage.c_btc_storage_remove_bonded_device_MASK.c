
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

bt_status_t FUNC_7(bt_bdaddr_t *VAR_5)
{
    bdstr_t VAR_6;
    FUNC_1(VAR_5, VAR_6, sizeof(VAR_6));
    int VAR_7 = 1;
    FUNC_0("Add to storage: Remote device:%s\n", VAR_6);

    FUNC_4();
    if (FUNC_2(VAR_6, VAR_1)) {
        VAR_7 &= FUNC_5(VAR_6, VAR_1);
    }
    if (FUNC_2(VAR_6, VAR_2)) {
        VAR_7 &= FUNC_5(VAR_6, VAR_2);
    }
    if (FUNC_2(VAR_6, VAR_0)) {
        VAR_7 &= FUNC_5(VAR_6, VAR_0);
    }

    FUNC_3();
    FUNC_6();

    return VAR_7 ? VAR_4 : VAR_3;
}
