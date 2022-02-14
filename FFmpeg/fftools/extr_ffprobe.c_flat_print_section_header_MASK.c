
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct section {int flags; int name; scalar_t__ id; } ;
struct TYPE_7__ {size_t level; int nb_section_packet_frame; int* nb_item; struct section** section; TYPE_3__* section_pbuf; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_9__ {int str; } ;
struct TYPE_8__ {int sep_str; scalar_t__ hierarchical; } ;
typedef TYPE_2__ FlatContext ;
typedef TYPE_3__ AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(WriterContext *VAR_3)
{
    FlatContext *VAR_4 = VAR_3->priv;
    AVBPrint *VAR_5 = &VAR_3->section_pbuf[VAR_3->level];
    const struct section *VAR_6 = VAR_3->section[VAR_3->level];
    const struct section *VAR_7 = VAR_3->level ?
        VAR_3->section[VAR_3->level-1] : ((void*)0);


    FUNC_0(VAR_5);
    if (!VAR_7)
        return;
    FUNC_1(VAR_5, "%s", VAR_3->section_pbuf[VAR_3->level-1].str);

    if (VAR_4->hierarchical ||
        !(VAR_6->flags & (VAR_0|VAR_1))) {
        FUNC_1(VAR_5, "%s%s", VAR_3->section[VAR_3->level]->name, VAR_4->sep_str);

        if (VAR_7->flags & VAR_0) {
            int VAR_8 = VAR_7->id == VAR_2 ?
                VAR_3->nb_section_packet_frame : VAR_3->nb_item[VAR_3->level-1];
            FUNC_1(VAR_5, "%d%s", VAR_8, VAR_4->sep_str);
        }
    }
}
