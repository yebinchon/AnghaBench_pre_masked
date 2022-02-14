
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
        int VAR_5 = FUNC_1(VAR_3);
        if (VAR_5 != VAR_1[VAR_4] && VAR_5 != VAR_2[VAR_4])
            VAR_4 = -(VAR_5 != 'G');
        if (FUNC_0(VAR_3))
            return VAR_0;
    }
    return 0;
}
