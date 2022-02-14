
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long CodedBitstreamUnitType ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (long**) ;
 long* FUNC_2 (int,int) ;
 long FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2,
                                       CodedBitstreamUnitType **VAR_3,
                                       int *VAR_4)
{
    CodedBitstreamUnitType *VAR_5 = ((void*)0);
    int VAR_6, VAR_7;

    for (VAR_6 = 1; VAR_6 <= 2; VAR_6++) {
        long VAR_8, VAR_9, VAR_10;
        const char *VAR_11;
        char *VAR_12;

        VAR_7 = 0;
        for (VAR_11 = VAR_2; *VAR_11;) {
            VAR_8 = FUNC_3(VAR_11, &VAR_12, 0);
            if (VAR_11 == VAR_12)
                goto invalid;
            VAR_11 = (const char *)VAR_12;
            if (*VAR_11 == '-') {
                ++VAR_11;
                VAR_9 = VAR_8;
                VAR_10 = FUNC_3(VAR_11, &VAR_12, 0);
                if (VAR_11 == VAR_12)
                    goto invalid;

                for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8++) {
                    if (VAR_6 == 2)
                        VAR_5[VAR_7] = VAR_8;
                    ++VAR_7;
                }
            } else {
                if (VAR_6 == 2)
                    VAR_5[VAR_7] = VAR_8;
                ++VAR_7;
            }
            if (*VAR_11 == '|')
                ++VAR_11;
        }
        if (VAR_6 == 1) {
            VAR_5 = FUNC_2(VAR_7, sizeof(*VAR_5));
            if (!VAR_5)
                return FUNC_0(VAR_1);
        }
    }

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_7;
    return 0;

invalid:
    FUNC_1(&VAR_5);
    return FUNC_0(VAR_0);
}
