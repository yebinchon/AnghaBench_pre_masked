
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char const*) ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static long int FUNC_3(const char *VAR_5)
{
    long int VAR_6;
    char *VAR_7 = ((void*)0);
    VAR_6 = FUNC_2(VAR_5, &VAR_7, 10);
    if ((FUNC_1(VAR_5) != VAR_7 - VAR_5) || (VAR_6 < 0)) {
        FUNC_0(((void*)0), VAR_0, "Incorrect input ranges of seeking\n");
        return -1;
    }
    else if ((VAR_6 == VAR_2) || (VAR_6 == VAR_3)) {
        if (VAR_4 == VAR_1) {
            FUNC_0(((void*)0), VAR_0, "Incorrect input ranges of seeking\n");
            return -1;
        }
    }
    return VAR_6;
}
