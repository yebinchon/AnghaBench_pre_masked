
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_2__* children; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,char*,char const*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_8(xmlNodePtr *VAR_1,
                             int VAR_2,
                             int VAR_3,
                             char *VAR_4,
                             char *VAR_5,
                             char *VAR_6)
{
    int VAR_7;
    char *VAR_8;
    char *VAR_9 = ((void*)0);
    char *VAR_10 = FUNC_1(VAR_3);
    char *VAR_11 = FUNC_1(VAR_3);

    if (!VAR_10 || !VAR_11) {
        return ((void*)0);
    }

    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        if (VAR_1[VAR_7] &&
            VAR_1[VAR_7]->children &&
            VAR_1[VAR_7]->children->type == VAR_0) {
            VAR_8 = FUNC_7(VAR_1[VAR_7]->children);
            if (VAR_8) {
                FUNC_5(VAR_10, 0, VAR_3);
                FUNC_5(VAR_11, 0, VAR_3);
                FUNC_4(VAR_11, VAR_3, VAR_10, VAR_8);
                FUNC_3(VAR_10, VAR_11, VAR_3);
                FUNC_6(VAR_8);
            }
        }
    }

    if (VAR_6)
        FUNC_4(VAR_10, VAR_3, VAR_10, VAR_6);

    if (VAR_4) {
        VAR_9 = FUNC_2(VAR_10, "$RepresentationID$", (const char*)VAR_4);
        if (!VAR_9) {
            goto end;
        }
        FUNC_3(VAR_10, VAR_9, VAR_3);
    }
    if (VAR_5 && VAR_10[0] != '\0') {

        FUNC_0(VAR_9);
        VAR_9 = FUNC_2(VAR_10, "$Bandwidth$", (const char*)VAR_5);
        if (!VAR_9) {
            goto end;
        }
    }
end:
    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    return VAR_9;
}
