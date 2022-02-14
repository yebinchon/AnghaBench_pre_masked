
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
 int VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

BOOLEAN FUNC_3(tGATT_IF VAR_3, BD_ADDR VAR_4)
{
    tGATT_TCB *VAR_5 = FUNC_0(VAR_4, VAR_0);
    BOOLEAN VAR_6;

    if (VAR_5) {
        FUNC_1(VAR_3, VAR_5, VAR_1, VAR_1);
    }
    VAR_6 = FUNC_2(VAR_3, VAR_1, VAR_4, VAR_2);
    return VAR_6;
}
