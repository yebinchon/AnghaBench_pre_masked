
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;
typedef int LINK_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int ,int) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 () ;

bt_status_t FUNC_7(bt_bdaddr_t *VAR_5,
        LINK_KEY VAR_6,
        uint8_t VAR_7,
        uint8_t VAR_8)
{
    bdstr_t VAR_9;

    FUNC_1(VAR_5, VAR_9, sizeof(VAR_9));
    FUNC_0("add to storage: Remote device:%s\n", VAR_9);

    FUNC_3();
    int VAR_10 = FUNC_5(VAR_9, VAR_1, (int)VAR_7);
    VAR_10 &= FUNC_5(VAR_9, VAR_2, (int)VAR_8);
    VAR_10 &= FUNC_4(VAR_9, VAR_0, VAR_6, sizeof(LINK_KEY));

    FUNC_2();
    FUNC_6();

    FUNC_0("Storage add rslt %d\n", VAR_10);
    return VAR_10 ? VAR_4 : VAR_3;
}
