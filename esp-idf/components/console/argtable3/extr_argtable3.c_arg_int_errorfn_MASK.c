
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* shortopts; char* longopts; char* datatype; } ;
struct arg_int {TYPE_1__ hdr; } ;
typedef int FILE ;






 int FUNC_0 (int *,char const*,char const*,char const*,char*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void FUNC_3(
    struct arg_int *VAR_0,
    FILE *VAR_1,
    int VAR_2,
    const char *VAR_3,
    const char *VAR_4)
{
    const char *VAR_5 = VAR_0->hdr.shortopts;
    const char *VAR_6 = VAR_0->hdr.longopts;
    const char *VAR_7 = VAR_0->hdr.datatype;


    VAR_3 = VAR_3 ? VAR_3 : "";

    FUNC_1(VAR_1, "%s: ", VAR_4);
    switch(VAR_2)
    {
    case 129:
        FUNC_2("missing option ", VAR_1);
        FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7, "\n");
        break;

    case 130:
        FUNC_2("excess option ", VAR_1);
        FUNC_0(VAR_1, VAR_5, VAR_6, VAR_3, "\n");
        break;

    case 131:
        FUNC_1(VAR_1, "invalid argument \"%s\" to option ", VAR_3);
        FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7, "\n");
        break;

    case 128:
        FUNC_2("integer overflow at option ", VAR_1);
        FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7, " ");
        FUNC_1(VAR_1, "(%s is too large)\n", VAR_3);
        break;
    }
}
