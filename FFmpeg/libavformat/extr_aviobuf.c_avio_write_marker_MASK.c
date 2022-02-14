
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVIODataMarkerType { ____Placeholder_AVIODataMarkerType } AVIODataMarkerType ;
struct TYPE_4__ {scalar_t__ buf_ptr; scalar_t__ buffer; scalar_t__ min_packet_size; int current_type; int last_time; scalar_t__ ignore_boundary_point; int write_data_type; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(AVIOContext *VAR_3, int64_t VAR_4, enum AVIODataMarkerType VAR_5)
{
    if (VAR_5 == VAR_1) {
        if (VAR_3->buf_ptr - VAR_3->buffer >= VAR_3->min_packet_size)
            FUNC_0(VAR_3);
        return;
    }
    if (!VAR_3->write_data_type)
        return;

    if (VAR_5 == VAR_0 && VAR_3->ignore_boundary_point)
        VAR_5 = VAR_2;


    if (VAR_5 == VAR_2 &&
        (VAR_3->current_type != 129 &&
         VAR_3->current_type != 128))
        return;

    switch (VAR_5) {
    case 129:
    case 128:


        if (VAR_5 == VAR_3->current_type)
            return;
        break;
    }



    FUNC_0(VAR_3);
    VAR_3->current_type = VAR_5;
    VAR_3->last_time = VAR_4;
}
