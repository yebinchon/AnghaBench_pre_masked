
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static void * FUNC_3(const char *VAR_1[])
{
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    void *VAR_2;
    int VAR_3 = 0;
    while (VAR_1[VAR_3] != ((void*)0))
    {
        char *VAR_4 = FUNC_2("%s%s", VAR_1[VAR_3], VAR_0);
        VAR_2 = FUNC_1(VAR_4);
        FUNC_0(VAR_4);
        if (VAR_2 != ((void*)0))
        {
            return VAR_2;
        }
        VAR_3++;
    }
    return ((void*)0);
}
