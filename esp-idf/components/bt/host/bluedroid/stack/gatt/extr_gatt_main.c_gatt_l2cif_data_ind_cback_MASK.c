
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tGATT_TCB ;
typedef int UINT16 ;
typedef int BT_HDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(UINT16 VAR_1, BT_HDR *VAR_2)
{
    tGATT_TCB *VAR_3;


    if ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0) &&
            FUNC_2(VAR_3) == VAR_0) {

        FUNC_0(VAR_3, VAR_2);
    } else {
        FUNC_3(VAR_2);
    }

}
