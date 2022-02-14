
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tm ;
struct tm {int dummy; } ;
struct TYPE_2__ {char* shortopts; char* longopts; char* datatype; } ;
struct arg_date {int format; TYPE_1__ hdr; } ;
typedef int buff ;
typedef int FILE ;





 int FUNC_0 (int *,char const*,char const*,char const*,char*) ;
 int FUNC_1 (char*,char*,struct tm*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (struct tm*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,int ,struct tm*) ;

__attribute__((used)) static void FUNC_7(
    struct arg_date *VAR_0,
    FILE *VAR_1,
    int VAR_2,
    const char *VAR_3,
    const char *VAR_4)
{
    const char *VAR_5 = VAR_0->hdr.shortopts;
    const char *VAR_6 = VAR_0->hdr.longopts;
    const char *VAR_7 = VAR_0->hdr.datatype;


    VAR_3 = VAR_3 ? VAR_3 : "";

    FUNC_2(VAR_1, "%s: ", VAR_4);
    switch(VAR_2)
    {
    case 128:
        FUNC_3("missing option ", VAR_1);
        FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7, "\n");
        break;

    case 129:
        FUNC_3("excess option ", VAR_1);
        FUNC_0(VAR_1, VAR_5, VAR_6, VAR_3, "\n");
        break;

    case 130:
    {
        struct tm VAR_8;
        char VAR_9[200];

        FUNC_2(VAR_1, "illegal timestamp format \"%s\"\n", VAR_3);
        FUNC_4(&VAR_8, 0, sizeof(VAR_8));
        FUNC_1("1999-12-31 23:59:59", "%F %H:%M:%S", &VAR_8);
        FUNC_6(VAR_9, sizeof(VAR_9), VAR_0->format, &VAR_8);
        FUNC_5("correct format is \"%s\"\n", VAR_9);
        break;
    }
    }
}
