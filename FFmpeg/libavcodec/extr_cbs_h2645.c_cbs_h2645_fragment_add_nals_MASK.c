
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int * data_ref; } ;
struct TYPE_10__ {size_t size; scalar_t__* data; scalar_t__* raw_data; int type; } ;
struct TYPE_8__ {int * rbsp_buffer_ref; } ;
struct TYPE_9__ {int nb_nals; TYPE_1__ rbsp; TYPE_3__* nals; } ;
typedef TYPE_2__ H2645Packet ;
typedef TYPE_3__ H2645NAL ;
typedef TYPE_4__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*,int,int ,int *,size_t,int *) ;

__attribute__((used)) static int FUNC_2(CodedBitstreamContext *VAR_0,
                                       CodedBitstreamFragment *VAR_1,
                                       const H2645Packet *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->nb_nals; VAR_4++) {
        const H2645NAL *VAR_5 = &VAR_2->nals[VAR_4];
        AVBufferRef *VAR_6;
        size_t VAR_7 = VAR_5->size;


        while (VAR_7 > 0 && VAR_5->data[VAR_7 - 1] == 0)
            --VAR_7;
        FUNC_0(VAR_7 > 0);

        VAR_6 = (VAR_5->data == VAR_5->raw_data) ? VAR_1->data_ref
                                           : VAR_2->rbsp.rbsp_buffer_ref;

        VAR_3 = FUNC_1(VAR_0, VAR_1, -1, VAR_5->type,
                            (uint8_t*)VAR_5->data, VAR_7, VAR_6);
        if (VAR_3 < 0)
            return VAR_3;
    }

    return 0;
}
