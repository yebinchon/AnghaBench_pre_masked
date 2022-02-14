
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct section {int flags; char* name; scalar_t__ id; } ;
struct TYPE_9__ {size_t level; scalar_t__* nb_item; struct section** section; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_11__ {char* str; } ;
struct TYPE_10__ {char* item_start_end; int compact; int indent_level; } ;
typedef TYPE_2__ JSONContext ;
typedef TYPE_3__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,char*,TYPE_1__*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(WriterContext *VAR_4)
{
    JSONContext *VAR_5 = VAR_4->priv;
    AVBPrint VAR_6;
    const struct section *VAR_7 = VAR_4->section[VAR_4->level];
    const struct section *VAR_8 = VAR_4->level ?
        VAR_4->section[VAR_4->level-1] : ((void*)0);

    if (VAR_4->level && VAR_4->nb_item[VAR_4->level-1])
        FUNC_4(",\n");

    if (VAR_7->flags & VAR_2) {
        FUNC_4("{\n");
        VAR_5->indent_level++;
    } else {
        FUNC_2(&VAR_6, 1, VAR_0);
        FUNC_3(&VAR_6, VAR_7->name, VAR_4);
        FUNC_0();

        VAR_5->indent_level++;
        if (VAR_7->flags & VAR_1) {
            FUNC_4("\"%s\": [\n", VAR_6.str);
        } else if (VAR_8 && !(VAR_8->flags & VAR_1)) {
            FUNC_4("\"%s\": {%s", VAR_6.str, VAR_5->item_start_end);
        } else {
            FUNC_4("{%s", VAR_5->item_start_end);


            if (VAR_8 && VAR_8->id == VAR_3) {
                if (!VAR_5->compact)
                    FUNC_0();
                FUNC_4("\"type\": \"%s\"", VAR_7->name);
            }
        }
        FUNC_1(&VAR_6, ((void*)0));
    }
}
