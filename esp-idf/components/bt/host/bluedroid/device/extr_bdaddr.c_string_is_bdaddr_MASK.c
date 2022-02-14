
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 size_t FUNC_2 (char const*) ;

bool FUNC_3(const char *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));

    size_t VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 != 17) {
        return 0;
    }

    for (size_t VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {

        if (((VAR_2 + 1) % 3) == 0 && VAR_0[VAR_2] != ':') {
            return 0;
        }


        if (((VAR_2 + 1) % 3) != 0 && !FUNC_1(VAR_0[VAR_2])) {
            return 0;
        }
    }
    return 1;
}
