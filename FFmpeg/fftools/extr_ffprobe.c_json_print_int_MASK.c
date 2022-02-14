
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct section {scalar_t__ id; } ;
struct TYPE_5__ {int level; scalar_t__* nb_item; struct section** section; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_6__ {char* item_sep; int compact; } ;
typedef TYPE_2__ JSONContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int ) ;
 char* FUNC_3 (int *,char const*,TYPE_1__*) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static void FUNC_5(WriterContext *VAR_2, const char *VAR_3, long long int VAR_4)
{
    JSONContext *VAR_5 = VAR_2->priv;
    const struct section *VAR_6 = VAR_2->level ?
        VAR_2->section[VAR_2->level-1] : ((void*)0);
    AVBPrint VAR_7;

    if (VAR_2->nb_item[VAR_2->level] || (VAR_6 && VAR_6->id == VAR_1))
        FUNC_4("%s", VAR_5->item_sep);
    if (!VAR_5->compact)
        FUNC_0();

    FUNC_2(&VAR_7, 1, VAR_0);
    FUNC_4("\"%s\": %lld", FUNC_3(&VAR_7, VAR_3, VAR_2), VAR_4);
    FUNC_1(&VAR_7, ((void*)0));
}
