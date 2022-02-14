
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long int64_t ;


 int VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 int FUNC_0 (char const*,char*,long long*,int*,long long*,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_4, int64_t *VAR_5, int64_t *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
        long long VAR_10, VAR_11;
        int VAR_12 = FUNC_0(VAR_4, "%lld%n.%lld%n", &VAR_10, &VAR_8, &VAR_11, &VAR_9);
        if (VAR_12 <= 0 || VAR_10 < VAR_2 / VAR_3 || VAR_10 > VAR_1 / VAR_3)
            return VAR_0;

        VAR_10 *= VAR_3;

        if (VAR_12 == 2) {
            if (VAR_11 < 0)
                return VAR_0;
            for (;VAR_9 - VAR_8 < 7 + 1; VAR_8--)
                VAR_11 *= 10;
            for (;VAR_9 - VAR_8 > 7 + 1; VAR_8++)
                VAR_11 /= 10;
            if (VAR_10 > 0) VAR_10 += VAR_11;
            else VAR_10 -= VAR_11;
            VAR_4 += VAR_9;
        } else
            VAR_4 += VAR_8;

        *VAR_5 = VAR_10;

        VAR_5 = VAR_6;
    }

    return 0;
}
