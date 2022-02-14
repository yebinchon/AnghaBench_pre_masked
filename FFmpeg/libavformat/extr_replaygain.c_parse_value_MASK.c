
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int32_t FUNC_4(const char *VAR_1, int32_t VAR_2)
{
    char *VAR_3;
    int VAR_4 = 10000;
    int32_t VAR_5 = 0;
    int VAR_6 = 1;
    int VAR_7;

    if (!VAR_1)
        return VAR_2;

    VAR_1 += FUNC_2(VAR_1, " \t");

    if (*VAR_1 == '-')
        VAR_6 = -1;

    VAR_7 = FUNC_3(VAR_1, &VAR_3, 0);
    if (*VAR_3++ == '.') {
        while (FUNC_1(*VAR_3) && VAR_4) {
            VAR_5 += VAR_4 * (*VAR_3 - '0');
            VAR_4 /= 10;
            VAR_3++;
        }
    }

    if (FUNC_0(VAR_7) > (VAR_0 - VAR_5) / 100000)
        return VAR_2;

    return VAR_7 * 100000 + VAR_6 * VAR_5;
}
