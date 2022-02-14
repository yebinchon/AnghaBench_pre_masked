
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int * const,char*,...) ;
 char** FUNC_1 (int) ;
 int FUNC_2 (char**) ;

__attribute__((used)) static void FUNC_3(FILE* const VAR_0, int VAR_1)
{
    char ** VAR_2 = FUNC_1(VAR_1);
    int VAR_3, VAR_4 = 0;


    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
    {






        VAR_4++;
    }


    if (VAR_4 == 0)
    {
        return;
    }
    FUNC_0(VAR_0, "                           Tunes:\n");
    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
    {






        FUNC_0(VAR_0, "                               %s\n", VAR_2[VAR_3]);
    }

    FUNC_2(VAR_2);
}
