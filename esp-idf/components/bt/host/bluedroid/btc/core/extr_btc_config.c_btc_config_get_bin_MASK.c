
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*,char const*,int *) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;
 size_t FUNC_4 (char const*) ;

bool FUNC_5(const char *VAR_1, const char *VAR_2, uint8_t *VAR_3, size_t *VAR_4)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(VAR_4 != ((void*)0));

    const char *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0));

    if (!VAR_5) {
        return 0;
    }

    size_t VAR_6 = FUNC_4(VAR_5);
    if ((VAR_6 % 2) != 0 || *VAR_4 < (VAR_6 / 2)) {
        return 0;
    }

    for (size_t VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
        if (!FUNC_2((unsigned char)VAR_5[VAR_7])) {
            return 0;
        }

    for (*VAR_4 = 0; *VAR_5; VAR_5 += 2, *VAR_4 += 1) {
        unsigned int VAR_8;
        FUNC_3(VAR_5, "%02x", &VAR_8);
        VAR_3[*VAR_4] = (uint8_t)(VAR_8);
    }

    return 1;
}
