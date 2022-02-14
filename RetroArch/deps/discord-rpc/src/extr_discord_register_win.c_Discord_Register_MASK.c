
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int openCommand ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int ,int ,char const*,int,int *,int const) ;

void FUNC_2(const char* VAR_1, const char* VAR_2)
{
    wchar_t VAR_3[1024];
    const wchar_t* VAR_4 = ((void*)0);
    wchar_t VAR_5[32];

    FUNC_1(VAR_0, 0, VAR_1, -1, VAR_5, 32);
    if (VAR_2 && VAR_2[0])
    {
        const int VAR_6 =
           sizeof(VAR_3) / sizeof(*VAR_3);
        FUNC_1(VAR_0, 0, VAR_2, -1,
              VAR_3, VAR_6);
        VAR_4 = VAR_3;
    }

    FUNC_0(VAR_5, VAR_4);
}
