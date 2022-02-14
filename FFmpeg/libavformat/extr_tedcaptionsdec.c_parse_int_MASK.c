
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,char) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, int *VAR_2, int64_t *VAR_3)
{
    int64_t VAR_4 = 0;

    FUNC_2(VAR_1, VAR_2);
    if ((unsigned)*VAR_2 - '0' > 9)
        return VAR_0;
    while (FUNC_0(*VAR_2, '0', '9')) {
        VAR_4 = VAR_4 * 10 + (*VAR_2 - '0');
        FUNC_1(VAR_1, VAR_2);
    }
    *VAR_3 = VAR_4;
    return 0;
}
