
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char ** VAR_0, char * VAR_1)
{
    int VAR_2;

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    {
        return -1;
    }
    for (VAR_2 = 0; VAR_0[VAR_2] != ((void*)0); VAR_2++)
    {
        if (!FUNC_0(VAR_1, VAR_0[VAR_2]))
        {
            return VAR_2;
        }
    }
    return -1;
}
