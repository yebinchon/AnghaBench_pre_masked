
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int URLContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int) ;

void FUNC_8(URLContext *VAR_2)
{
    AVIOContext *VAR_3;
    uint8_t *VAR_4;
    int VAR_5;


    if (FUNC_3(&VAR_3) < 0)
        return;

    FUNC_4(VAR_3, (VAR_1 << 6));
    FUNC_4(VAR_3, 0);
    FUNC_5(VAR_3, 0);
    FUNC_6(VAR_3, 0);
    FUNC_6(VAR_3, 0);

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3, &VAR_4);
    if ((VAR_5 > 0) && VAR_4)
        FUNC_7(VAR_2, VAR_4, VAR_5);
    FUNC_0(VAR_4);


    if (FUNC_3(&VAR_3) < 0)
        return;

    FUNC_4(VAR_3, (VAR_1 << 6));
    FUNC_4(VAR_3, VAR_0);
    FUNC_5(VAR_3, 1);
    FUNC_6(VAR_3, 0);

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3, &VAR_4);
    if ((VAR_5 > 0) && VAR_4)
        FUNC_7(VAR_2, VAR_4, VAR_5);
    FUNC_0(VAR_4);
}
