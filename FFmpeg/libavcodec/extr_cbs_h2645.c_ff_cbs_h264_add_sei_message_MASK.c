
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int nb_units; TYPE_2__* units; } ;
struct TYPE_10__ {scalar_t__ nal_ref_idc; scalar_t__ nal_unit_type; } ;
struct TYPE_12__ {size_t payload_count; int * payload; TYPE_1__ nal_unit_header; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__* content; } ;
typedef int H264RawSEIPayload ;
typedef TYPE_3__ H264RawSEI ;
typedef TYPE_4__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (int *,int,int *,int *,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_3__* FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*,int,scalar_t__,TYPE_3__*,int *) ;
 int FUNC_7 (int *,int *,int) ;

int FUNC_8(CodedBitstreamContext *VAR_6,
                                CodedBitstreamFragment *VAR_7,
                                H264RawSEIPayload *VAR_8)
{
    H264RawSEI *VAR_9 = ((void*)0);
    int VAR_10, VAR_11;


    for (VAR_11 = 0; VAR_11 < VAR_7->nb_units; VAR_11++) {
        if (VAR_7->units[VAR_11].type == VAR_3) {
            VAR_9 = VAR_7->units[VAR_11].content;
            if (VAR_9->payload_count < VAR_1)
                break;

            VAR_9 = ((void*)0);
        }
    }

    if (!VAR_9) {


        AVBufferRef *VAR_12;

        VAR_9 = FUNC_4(sizeof(*VAR_9));
        if (!VAR_9) {
            VAR_10 = FUNC_0(VAR_0);
            goto fail;
        }

        VAR_9->nal_unit_header.nal_unit_type = VAR_3;
        VAR_9->nal_unit_header.nal_ref_idc = 0;

        VAR_12 = FUNC_1((uint8_t*)VAR_9, sizeof(*VAR_9),
                                   &VAR_5, ((void*)0), 0);
        if (!VAR_12) {
            FUNC_3(&VAR_9);
            VAR_10 = FUNC_0(VAR_0);
            goto fail;
        }

        for (VAR_11 = 0; VAR_11 < VAR_7->nb_units; VAR_11++) {
            if (VAR_7->units[VAR_11].type == VAR_4 ||
                VAR_7->units[VAR_11].type == VAR_2)
                break;
        }

        VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_11, VAR_3,
                                         VAR_9, VAR_12);
        FUNC_2(&VAR_12);
        if (VAR_10 < 0)
            goto fail;
    }

    FUNC_7(&VAR_9->payload[VAR_9->payload_count], VAR_8, sizeof(*VAR_8));
    ++VAR_9->payload_count;

    return 0;
fail:
    FUNC_5(VAR_8);
    return VAR_10;
}
