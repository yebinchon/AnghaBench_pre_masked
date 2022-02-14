
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct dirent {char const* d_name; } ;
struct TYPE_12__ {int count; TYPE_1__** namelist; } ;
struct TYPE_11__ {char** strings; int num_strings; } ;
struct TYPE_10__ {char const* d_name; } ;
typedef TYPE_2__ STRING_VEC_T ;
typedef TYPE_3__ STATE_T ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 struct dirent* FUNC_5 (int *) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 char* FUNC_8 (TYPE_2__*,char const*,int) ;
 int FUNC_9 (TYPE_2__*,char const*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(STATE_T *VAR_1)
{
    int VAR_2;
    DIR *VAR_3;
    struct dirent *VAR_4;
    STRING_VEC_T VAR_5;

    FUNC_10(&VAR_5);


    VAR_3 = FUNC_3(VAR_0);
    while ((VAR_4 = FUNC_5(VAR_3)) != ((void*)0))
    {
 int VAR_6 = FUNC_13(VAR_4->d_name) - 5;
 if ((VAR_6 >= 0) && FUNC_7(VAR_4->d_name + VAR_6, ".dtbo") == 0)
        {
     char *VAR_7 = FUNC_8(&VAR_5, VAR_4->d_name, VAR_6 + 2);
            VAR_7[VAR_6] = '\0';
            VAR_7[VAR_6 + 1] = ' ';
        }
    }
    FUNC_0(VAR_3);


    for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
    {
 const char *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = FUNC_6(VAR_1->namelist[VAR_2]->d_name, '_');
 if (!VAR_8)
     return FUNC_1("Internal error");
 VAR_8++;
 VAR_9 = FUNC_6(VAR_8, '.');
 if (!VAR_9)
     return FUNC_1("Internal error");

        VAR_11 = VAR_9 - VAR_8;
        if ((VAR_11 == 7) && (FUNC_2(VAR_8, "dtparam", 7) == 0))
            continue;
 VAR_12 = FUNC_9(&VAR_5, VAR_8, VAR_11);
 if (VAR_12 >= 0)
 {
     VAR_10 = VAR_5.strings[VAR_12];
            VAR_11 = FUNC_13(VAR_10);
 }
 else
        {
     VAR_10 = FUNC_8(&VAR_5, VAR_8, VAR_11 + 2);
            VAR_10[VAR_11] = '\0';
        }
 VAR_10[VAR_11 + 1] = '*';
    }

    if (VAR_5.num_strings == 0)
    {
 FUNC_4("No overlays found\n");
    }
    else
    {

 FUNC_11(&VAR_5);


 FUNC_4("All overlays (* = loaded):\n");

 for (VAR_2 = 0; VAR_2 < VAR_5.num_strings; VAR_2++)
 {
            const char *VAR_13 = VAR_5.strings[VAR_2];
     FUNC_4("%c %s\n", VAR_13[FUNC_13(VAR_13)+1], VAR_13);
 }
    }

    FUNC_12(&VAR_5);

    return 0;
}
