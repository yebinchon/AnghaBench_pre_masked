
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char const*,char const*,char*,int) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;

bool FUNC_4(const char *VAR_1, const char *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    const char *VAR_5 = "0123456789abcdef";

    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    if (VAR_4 > 0) {
        FUNC_0(VAR_3 != ((void*)0));
    }

    char *VAR_6 = (char *)FUNC_2(VAR_4 * 2 + 1);
    if (!VAR_6) {
        return 0;
    }

    for (size_t VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
        VAR_6[(VAR_7 * 2) + 0] = VAR_5[(VAR_3[VAR_7] >> 4) & 0x0F];
        VAR_6[(VAR_7 * 2) + 1] = VAR_5[VAR_3[VAR_7] & 0x0F];
    }

    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6, 0);

    FUNC_3(VAR_6);
    return 1;
}
