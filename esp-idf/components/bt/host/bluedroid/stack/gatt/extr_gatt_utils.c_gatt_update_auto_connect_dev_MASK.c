
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tGATT_TCB ;
typedef int tGATT_REG ;
typedef int tGATT_IF ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int ,int *,int ,int ) ;

BOOLEAN FUNC_7 (tGATT_IF VAR_3, BOOLEAN VAR_4, BD_ADDR VAR_5, BOOLEAN VAR_6)
{
    BOOLEAN VAR_7 = VAR_1;
    tGATT_REG *VAR_8;
    tGATT_TCB *VAR_9 = FUNC_3(VAR_5, VAR_0);

    FUNC_0 ("gatt_update_auto_connect_dev ");

    if ((VAR_8 = FUNC_4(VAR_3)) == ((void*)0)) {
        FUNC_1("gatt_update_auto_connect_dev - gatt_if %d is not registered", VAR_3);
        return (VAR_1);
    }

    if (VAR_4) {
        VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_6);

        if (VAR_7 && VAR_9 != ((void*)0)) {

            FUNC_6(VAR_3, VAR_9, VAR_2, VAR_2);
        }
    } else {
        VAR_7 = FUNC_5(VAR_8, VAR_5, VAR_6);
    }
    return VAR_7;
}
