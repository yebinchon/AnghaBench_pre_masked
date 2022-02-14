
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tGATT_TCB ;
typedef int tGATT_IF ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ,int ) ;

BOOLEAN FUNC_6(tGATT_IF VAR_4, BD_ADDR VAR_5)
{
    tGATT_TCB *VAR_6 = ((void*)0);
    BOOLEAN VAR_7 = VAR_3;

    VAR_6 = FUNC_2(VAR_5, VAR_0);

    if (VAR_6) {
        if (FUNC_3(VAR_6) == VAR_2) {
            FUNC_0("GATT_CancelConnect - link connected Too late to cancel");
            VAR_7 = VAR_1;
        } else {
            FUNC_5(VAR_4, VAR_6, VAR_1, VAR_1);
            if (!FUNC_4(VAR_6)) {
                FUNC_1(VAR_6);
            }
        }
    }

    return VAR_7;
}
