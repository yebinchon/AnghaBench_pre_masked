
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * FFBigNum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(FFBigNum VAR_2, FFBigNum VAR_3, FFBigNum VAR_4)
{
    FFBigNum VAR_5 = ((void*)0);
    int VAR_6 = FUNC_0(VAR_0);

    FUNC_6(VAR_5);
    if (!VAR_5)
        return FUNC_0(VAR_1);


    FUNC_7(VAR_5, 1);
    if (!FUNC_1(VAR_2, VAR_5))
        goto fail;


    FUNC_3(VAR_5, VAR_3);
    FUNC_8(VAR_5, 1);
    if (!FUNC_1(VAR_2, VAR_5))
        goto fail;
    if ((VAR_6 = FUNC_5(VAR_5, VAR_2, VAR_4, VAR_3)) < 0)
        goto fail;

    VAR_6 = FUNC_0(VAR_0);
    if (FUNC_2(VAR_5))
        goto fail;

    VAR_6 = 0;
fail:
    FUNC_4(VAR_5);

    return VAR_6;
}
