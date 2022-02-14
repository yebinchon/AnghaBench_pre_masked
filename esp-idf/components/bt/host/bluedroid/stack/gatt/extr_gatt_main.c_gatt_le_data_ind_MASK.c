
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tGATT_TCB ;
typedef int UINT16 ;
typedef int BT_HDR ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (UINT16 VAR_2, BD_ADDR VAR_3, BT_HDR *VAR_4)
{
    tGATT_TCB *VAR_5;


    if ((VAR_5 = FUNC_2 (VAR_3, VAR_0)) != ((void*)0) &&
            FUNC_3(VAR_5) >= VAR_1) {
        FUNC_1(VAR_5, VAR_4);
    } else {
        FUNC_4 (VAR_4);

        if (VAR_5 != ((void*)0)) {
            FUNC_0 ("ATT - Ignored L2CAP data while in state: %d\n",
                                FUNC_3(VAR_5));
        }
    }
}
