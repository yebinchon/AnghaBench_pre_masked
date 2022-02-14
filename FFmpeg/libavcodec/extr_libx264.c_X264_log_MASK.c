
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
 int FUNC_0 (void*,int const,char const*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1, const char *VAR_2, va_list VAR_3)
{
    static const int VAR_4[] = {
        [130] = 134,
        [128] = 132,
        [129] = 133,
        [131] = 135
    };

    if (VAR_1 < 0 || VAR_1 > 131)
        return;

    FUNC_0(VAR_0, VAR_4[VAR_1], VAR_2, VAR_3);
}
