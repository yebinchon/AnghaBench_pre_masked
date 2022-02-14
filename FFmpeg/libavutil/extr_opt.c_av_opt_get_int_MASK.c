
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int64_t ;


 int FUNC_0 (void*,char const*,int *,double*,int*,double*,int) ;

int FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2, int64_t *VAR_3)
{
    int64_t VAR_4 = 1;
    double VAR_5 = 1;
    int VAR_6, VAR_7 = 1;

    if ((VAR_6 = FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_5, &VAR_7, &VAR_4, VAR_2)) < 0)
        return VAR_6;
    *VAR_3 = VAR_5 * VAR_4 / VAR_7;
    return 0;
}
