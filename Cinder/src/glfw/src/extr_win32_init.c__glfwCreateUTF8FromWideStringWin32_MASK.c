
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const*,int,char*,int,int *,int *) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

char* FUNC_3(const WCHAR* VAR_1)
{
    char* VAR_2;
    int VAR_3;

    VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0));
    if (!VAR_3)
        return ((void*)0);

    VAR_2 = FUNC_1(VAR_3, 1);

    if (!FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3, ((void*)0), ((void*)0)))
    {
        FUNC_2(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}
