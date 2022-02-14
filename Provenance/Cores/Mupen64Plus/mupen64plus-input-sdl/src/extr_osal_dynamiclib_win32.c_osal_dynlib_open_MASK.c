
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m64p_error ;
typedef int * m64p_dynlib_handle ;
typedef int LPTSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,char const*,char*) ;
 int VAR_7 ;

m64p_error FUNC_6(m64p_dynlib_handle *VAR_8, const char *VAR_9)
{
    if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
        return VAR_3;

    *VAR_8 = FUNC_2(VAR_9);

    if (*VAR_8 == ((void*)0))
    {
        char *VAR_10;
        DWORD VAR_11 = FUNC_1();
        FUNC_0(VAR_0 | VAR_1, ((void*)0), VAR_11,
                      FUNC_4(VAR_2, VAR_6), (LPTSTR) &VAR_10, 0, ((void*)0));
        FUNC_5(VAR_7, "LoadLibrary('%s') error: %s\n", VAR_9, VAR_10);
        FUNC_3(VAR_10);
        return VAR_4;
    }

    return VAR_5;
}
