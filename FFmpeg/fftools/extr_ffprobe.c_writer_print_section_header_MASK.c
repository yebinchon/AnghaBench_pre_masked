
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int level; TYPE_2__* writer; scalar_t__ nb_section_frame; scalar_t__ nb_section_packet; scalar_t__ nb_section_packet_frame; TYPE_1__* sections; TYPE_1__** section; scalar_t__* nb_item; } ;
typedef TYPE_3__ WriterContext ;
struct TYPE_7__ {int (* print_section_header ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_2(WriterContext *VAR_4,
                                               int VAR_5)
{
    int VAR_6;
    VAR_4->level++;
    FUNC_0(VAR_4->level < VAR_3);
    VAR_6 = VAR_4->level ?
        (VAR_4->section[VAR_4->level-1])->id : VAR_0;

    VAR_4->nb_item[VAR_4->level] = 0;
    VAR_4->section[VAR_4->level] = &VAR_4->sections[VAR_5];

    if (VAR_5 == VAR_2) {
        VAR_4->nb_section_packet = VAR_4->nb_section_frame =
        VAR_4->nb_section_packet_frame = 0;
    } else if (VAR_6 == VAR_2) {
        VAR_4->nb_section_packet_frame = VAR_5 == VAR_1 ?
            VAR_4->nb_section_packet : VAR_4->nb_section_frame;
    }

    if (VAR_4->writer->print_section_header)
        VAR_4->writer->print_section_header(VAR_4);
}
