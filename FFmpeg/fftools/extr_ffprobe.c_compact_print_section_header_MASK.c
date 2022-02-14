
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct section {int flags; char* name; int element_name; } ;
struct TYPE_6__ {size_t level; int * nb_item; TYPE_4__* section_pbuf; struct section** section; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_8__ {int str; } ;
struct TYPE_7__ {int* terminate_line; int* has_nested_elems; int* nested_section; int item_sep; scalar_t__ print_section; } ;
typedef TYPE_2__ CompactContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,char*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(WriterContext *VAR_2)
{
    CompactContext *VAR_3 = VAR_2->priv;
    const struct section *VAR_4 = VAR_2->section[VAR_2->level];
    const struct section *VAR_5 = VAR_2->level ?
        VAR_2->section[VAR_2->level-1] : ((void*)0);
    VAR_3->terminate_line[VAR_2->level] = 1;
    VAR_3->has_nested_elems[VAR_2->level] = 0;

    FUNC_0(&VAR_2->section_pbuf[VAR_2->level]);
    if (!(VAR_4->flags & VAR_0) && VAR_5 &&
        !(VAR_5->flags & (VAR_1|VAR_0))) {
        VAR_3->nested_section[VAR_2->level] = 1;
        VAR_3->has_nested_elems[VAR_2->level-1] = 1;
        FUNC_1(&VAR_2->section_pbuf[VAR_2->level], "%s%s:",
                   VAR_2->section_pbuf[VAR_2->level-1].str,
                   (char *)FUNC_2(VAR_4->element_name, VAR_4->name));
        VAR_2->nb_item[VAR_2->level] = VAR_2->nb_item[VAR_2->level-1];
    } else {
        if (VAR_5 && VAR_3->has_nested_elems[VAR_2->level-1] &&
            (VAR_4->flags & VAR_0)) {
            VAR_3->terminate_line[VAR_2->level-1] = 0;
            FUNC_3("\n");
        }
        if (VAR_3->print_section &&
            !(VAR_4->flags & (VAR_1|VAR_0)))
            FUNC_3("%s%c", VAR_4->name, VAR_3->item_sep);
    }
}
