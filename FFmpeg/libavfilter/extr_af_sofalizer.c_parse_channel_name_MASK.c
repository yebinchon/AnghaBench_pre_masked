
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long long FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,char*,int*) ;

__attribute__((used)) static int FUNC_3(char **VAR_1, int *VAR_2, char *VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = 0;
    int64_t VAR_7, VAR_8;


    if (FUNC_2(*VAR_1, "%7[A-Z]%n", VAR_3, &VAR_4)) {
        VAR_8 = VAR_7 = FUNC_1(VAR_3);

        for (VAR_5 = 32; VAR_5 > 0; VAR_5 >>= 1) {
            if (VAR_7 >= 1LL << VAR_5) {
                VAR_6 += VAR_5;
                VAR_7 >>= VAR_5;
            }
        }

        if (VAR_6 >= 64 || VAR_8 != 1LL << VAR_6)
            return FUNC_0(VAR_0);
        *VAR_2 = VAR_6;
        *VAR_1 += VAR_4;
        return 0;
    }
    return FUNC_0(VAR_0);
}
