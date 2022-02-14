
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_bda; int transport; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;

void FUNC_7(UINT16 VAR_2, BOOLEAN VAR_3)
{
    tGATT_TCB *VAR_4;
    UINT16 VAR_5;


    if ((VAR_4 = FUNC_5(VAR_2)) != ((void*)0)) {
        if (VAR_3) {

            FUNC_0(VAR_2);
        }
        if (FUNC_6(VAR_4->peer_bda) == ((void*)0)) {
            if (FUNC_2(VAR_4->peer_bda)) {
                FUNC_3(VAR_4->peer_bda);
            }
        }

        if ((VAR_5 = FUNC_1(VAR_4->peer_bda, VAR_4->transport)) == 0) {
            VAR_5 = VAR_0;
        }


        FUNC_4(VAR_4->peer_bda, VAR_5, VAR_1);
    }
}
