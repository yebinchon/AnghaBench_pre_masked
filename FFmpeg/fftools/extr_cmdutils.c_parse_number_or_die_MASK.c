
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char const*,char const*,char const*,double,double) ;
 double FUNC_1 (char const*,char**) ;
 int FUNC_2 (int) ;

double FUNC_3(const char *VAR_3, const char *VAR_4, int VAR_5,
                           double VAR_6, double VAR_7)
{
    char *VAR_8;
    const char *VAR_9;
    double VAR_10 = FUNC_1(VAR_4, &VAR_8);
    if (*VAR_8)
        VAR_9 = "Expected number for %s but found: %s\n";
    else if (VAR_10 < VAR_6 || VAR_10 > VAR_7)
        VAR_9 = "The value for %s was %s which is not within %f - %f\n";
    else if (VAR_5 == VAR_2 && (int64_t)VAR_10 != VAR_10)
        VAR_9 = "Expected int64 for %s but found %s\n";
    else if (VAR_5 == VAR_1 && (int)VAR_10 != VAR_10)
        VAR_9 = "Expected int for %s but found %s\n";
    else
        return VAR_10;
    FUNC_0(((void*)0), VAR_0, VAR_9, VAR_3, VAR_4, VAR_6, VAR_7);
    FUNC_2(1);
    return 0;
}
