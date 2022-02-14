
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 >= VAR_2) {
        FUNC_2(VAR_0, VAR_3);
        return -1;
    }

    FUNC_1(VAR_0, VAR_1, VAR_3);

    VAR_1[VAR_3] = '\0';

    return VAR_3;
}
