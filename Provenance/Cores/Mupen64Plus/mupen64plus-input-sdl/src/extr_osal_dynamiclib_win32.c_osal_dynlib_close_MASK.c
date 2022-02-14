
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m64p_error ;
typedef int m64p_dynlib_handle ;
typedef int LPTSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_6 ;

m64p_error FUNC_6(m64p_dynlib_handle VAR_7)
{
    int VAR_8 = FUNC_1(VAR_7);

    if (VAR_8 == 0)
    {
        char *VAR_9;
        DWORD VAR_10 = FUNC_2();
        FUNC_0(VAR_0 | VAR_1, ((void*)0), VAR_10,
                      FUNC_4(VAR_2, VAR_5), (LPTSTR) &VAR_9, 0, ((void*)0));
        FUNC_5(VAR_6, "FreeLibrary() error: %s\n", VAR_9);
        FUNC_3(VAR_9);
        return VAR_3;
    }

    return VAR_4;
}
