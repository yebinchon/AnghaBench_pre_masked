
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int64_t FUNC_1(char **VAR_1, int *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11 = 0;

    if (FUNC_0(*VAR_1, "%2d:%2d:%2d:%2d , %2d:%2d:%2d:%2d , %n",
                &VAR_3, &VAR_4, &VAR_5, &VAR_6,
                &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11) >= 8 && VAR_11 > 0) {
        int64_t VAR_12 = (VAR_3*3600LL + VAR_4*60LL + VAR_5) * 100LL + VAR_6;
        int64_t VAR_13 = (VAR_7*3600LL + VAR_8*60LL + VAR_9) * 100LL + VAR_10;
        *VAR_2 = VAR_13 - VAR_12;
        *VAR_1 += VAR_11;
        return VAR_12;
    }
    return VAR_0;
}
