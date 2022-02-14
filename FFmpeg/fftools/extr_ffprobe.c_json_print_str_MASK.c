
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


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(WriterContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    JSONContext *VAR_4 = VAR_1->priv;
    const struct section *VAR_5 = VAR_1->level ?
        VAR_1->section[VAR_1->level-1] : ((void*)0);

    if (VAR_1->nb_item[VAR_1->level] || (VAR_5 && VAR_5->id == VAR_0))
        FUNC_2("%s", VAR_4->item_sep);
    if (!VAR_4->compact)
        FUNC_0();
    FUNC_1(VAR_1, VAR_2, VAR_3);
}
