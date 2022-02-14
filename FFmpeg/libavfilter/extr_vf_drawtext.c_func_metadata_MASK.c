
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* value; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char*,char*) ;
 TYPE_3__* FUNC_1 (int ,char*,int *,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, AVBPrint *VAR_1,
                         char *VAR_2, unsigned VAR_3, char **VAR_4, int VAR_5)
{
    DrawTextContext *VAR_6 = VAR_0->priv;
    AVDictionaryEntry *VAR_7 = FUNC_1(VAR_6->metadata, VAR_4[0], ((void*)0), 0);

    if (VAR_7 && VAR_7->value)
        FUNC_0(VAR_1, "%s", VAR_7->value);
    else if (VAR_3 >= 2)
        FUNC_0(VAR_1, "%s", VAR_4[1]);
    return 0;
}
