
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nb_units; TYPE_2__* units; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__* content; } ;
struct TYPE_7__ {int payload_count; int * payload; } ;
typedef TYPE_1__ H264RawSEI ;
typedef TYPE_2__ CodedBitstreamUnit ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(CodedBitstreamContext *VAR_1,
                                    CodedBitstreamFragment *VAR_2,
                                    CodedBitstreamUnit *VAR_3,
                                    int VAR_4)
{
    H264RawSEI *VAR_5 = VAR_3->content;

    FUNC_0(VAR_3->type == VAR_0);
    FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_5->payload_count);

    if (VAR_4 == 0 && VAR_5->payload_count == 1) {

        int VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_2->nb_units; VAR_6++) {
            if (&VAR_2->units[VAR_6] == VAR_3)
                break;
        }

        FUNC_2(VAR_1, VAR_2, VAR_6);
    } else {
        FUNC_1(&VAR_5->payload[VAR_4]);

        --VAR_5->payload_count;
        FUNC_3(VAR_5->payload + VAR_4,
                VAR_5->payload + VAR_4 + 1,
                (VAR_5->payload_count - VAR_4) * sizeof(*VAR_5->payload));
    }
}
