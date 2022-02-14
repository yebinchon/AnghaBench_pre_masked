
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;







 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void FUNC_3(
    void *VAR_0,
    FILE *VAR_1,
    int VAR_2,
    const char *VAR_3,
    const char *VAR_4)
{

    (void)VAR_0;

    VAR_4 = VAR_4 ? VAR_4 : "";
    VAR_3 = VAR_3 ? VAR_3 : "";

    FUNC_0(VAR_1, "%s: ", VAR_4);
    switch(VAR_2)
    {
    case 132:
        FUNC_2("too many errors to display", VAR_1);
        break;
    case 130:
        FUNC_2("insufficent memory", VAR_1);
        break;
    case 128:
        FUNC_0(VAR_1, "unexpected argument \"%s\"", VAR_3);
        break;
    case 129:
        FUNC_0(VAR_1, "option \"%s\" requires an argument", VAR_3);
        break;
    case 131:
        FUNC_0(VAR_1, "invalid option \"%s\"", VAR_3);
        break;
    default:
        FUNC_0(VAR_1, "invalid option \"-%c\"", VAR_2);
        break;
    }

    FUNC_1('\n', VAR_1);
}
