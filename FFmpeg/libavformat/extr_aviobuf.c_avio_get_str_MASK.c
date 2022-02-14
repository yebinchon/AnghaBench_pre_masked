
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 char FUNC_2 (int *) ;

int FUNC_3(AVIOContext *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_4 <= 0)
        return FUNC_0(VAR_0);

    VAR_4 = FUNC_1(VAR_4 - 1, VAR_2);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        if (!(VAR_3[VAR_5] = FUNC_2(VAR_1)))
            return VAR_5 + 1;
    VAR_3[VAR_5] = 0;
    for (; VAR_5 < VAR_2; VAR_5++)
        if (!FUNC_2(VAR_1))
            return VAR_5 + 1;
    return VAR_2;
}
