
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t level; TYPE_1__* writer; int nb_section_frame; int nb_section_packet; int * nb_item; TYPE_2__** section; } ;
typedef TYPE_3__ WriterContext ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int (* print_section_footer ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_1(WriterContext *VAR_3)
{
    int VAR_4 = VAR_3->section[VAR_3->level]->id;
    int VAR_5 = VAR_3->level ?
        VAR_3->section[VAR_3->level-1]->id : VAR_0;

    if (VAR_5 != VAR_0)
        VAR_3->nb_item[VAR_3->level-1]++;
    if (VAR_5 == VAR_2) {
        if (VAR_4 == VAR_1) VAR_3->nb_section_packet++;
        else VAR_3->nb_section_frame++;
    }
    if (VAR_3->writer->print_section_footer)
        VAR_3->writer->print_section_footer(VAR_3);
    VAR_3->level--;
}
