
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,char const*,int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static uint8_t *FUNC_8(const char *VAR_2)
{
    AVIOContext *VAR_3 = ((void*)0);
    AVIOContext *VAR_4 = ((void*)0);
    int VAR_5 = FUNC_3(&VAR_3, VAR_2, VAR_0);
    uint8_t VAR_6[1024], *VAR_7;

    if (VAR_5 < 0) {
        FUNC_0(((void*)0), VAR_1, "Error opening file %s.\n", VAR_2);
        return ((void*)0);
    }

    VAR_5 = FUNC_4(&VAR_4);
    if (VAR_5 < 0) {
        FUNC_2(&VAR_3);
        return ((void*)0);
    }
    while ((VAR_5 = FUNC_5(VAR_3, VAR_6, sizeof(VAR_6))) > 0)
        FUNC_7(VAR_4, VAR_6, VAR_5);
    FUNC_6(VAR_4, 0);
    FUNC_2(&VAR_3);

    VAR_5 = FUNC_1(VAR_4, &VAR_7);
    if (VAR_5 < 0)
        return ((void*)0);
    return VAR_7;
}
