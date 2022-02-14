
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int **) ;
 char FUNC_3 (int *) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int) ;

__attribute__((used)) static uint8_t *FUNC_6(AVIOContext *VAR_1)
{
    AVIOContext *VAR_2;
    uint8_t *VAR_3;
    char VAR_4;

    if (FUNC_2(&VAR_2) < 0) {
        FUNC_0(((void*)0), VAR_0, "Could not alloc buffer for reading preset.\n");
        FUNC_5(1);
    }

    while ((VAR_4 = FUNC_3(VAR_1)) && VAR_4 != '\n')
        FUNC_4(VAR_2, VAR_4);
    FUNC_4(VAR_2, 0);
    FUNC_1(VAR_2, &VAR_3);

    return VAR_3;
}
