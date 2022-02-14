
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_2__ HTTPContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(URLContext *VAR_1, char *VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    char *VAR_5;
    char *VAR_6 = VAR_2;
    HTTPContext *VAR_7 = VAR_1->priv_data;

    while (*VAR_6) {
        VAR_3 = VAR_6;
        VAR_4 = FUNC_2(VAR_3, "='");
        if (!VAR_4)
            break;
        VAR_5 = FUNC_2(VAR_4, "';");
        if (!VAR_5)
            break;

        *VAR_4 = '\0';
        *VAR_5 = '\0';
        VAR_4 += 2;

        FUNC_0(&VAR_7->metadata, VAR_3, VAR_4, 0);
        FUNC_1(VAR_1, VAR_0, "Metadata update for %s: %s\n", VAR_3, VAR_4);

        VAR_6 = VAR_5 + 2;
    }
}
