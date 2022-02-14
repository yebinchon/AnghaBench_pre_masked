
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1)
{
    const char *VAR_2 = VAR_0;
    int VAR_3, VAR_4;

    for (; !(VAR_3 = *(const unsigned char*)VAR_0 - *(const unsigned char*)VAR_1) && *VAR_0; VAR_0++, VAR_1++);
    for (; FUNC_0(*VAR_0) && FUNC_0(*VAR_1); VAR_0++, VAR_1++);

    if (VAR_0 > VAR_2 && FUNC_0(VAR_0[-1]) && (VAR_4 = FUNC_0(*VAR_0) - FUNC_0(*VAR_1)))
        return VAR_4;

    return VAR_3;
}
