
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodec ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(void)
{
    AVCodec *VAR_4[] = {
        &VAR_0,
        &VAR_1,
        &VAR_2,
        &VAR_3,
        ((void*)0),
    };
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++)
        FUNC_1(VAR_4[VAR_5]);

    FUNC_2("testing avcodec_copy_context()\n");
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)
        for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++)
            FUNC_3(VAR_4[VAR_5], VAR_4[VAR_6]);
    return 0;
}
