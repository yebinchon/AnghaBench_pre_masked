
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section {int flags; } ;
struct TYPE_4__ {size_t level; struct section** section; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_5__ {char* item_start_end; int compact; int indent_level; } ;
typedef TYPE_2__ JSONContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(WriterContext *VAR_1)
{
    JSONContext *VAR_2 = VAR_1->priv;
    const struct section *VAR_3 = VAR_1->section[VAR_1->level];

    if (VAR_1->level == 0) {
        VAR_2->indent_level--;
        FUNC_1("\n}\n");
    } else if (VAR_3->flags & VAR_0) {
        FUNC_1("\n");
        VAR_2->indent_level--;
        FUNC_0();
        FUNC_1("]");
    } else {
        FUNC_1("%s", VAR_2->item_start_end);
        VAR_2->indent_level--;
        if (!VAR_2->compact)
            FUNC_0();
        FUNC_1("}");
    }
}
