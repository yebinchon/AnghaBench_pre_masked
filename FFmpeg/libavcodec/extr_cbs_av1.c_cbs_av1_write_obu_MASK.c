
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_23__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_17__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_34__ {size_t data_size; int data; } ;
struct TYPE_25__ {TYPE_6__ tile_data; } ;
struct TYPE_28__ {TYPE_6__ tile_data; } ;
struct TYPE_29__ {TYPE_1__ tile_group; } ;
struct TYPE_26__ {TYPE_6__ tile_data; } ;
struct TYPE_30__ {int padding; int metadata; TYPE_10__ tile_list; TYPE_23__ frame; TYPE_12__ tile_group; int frame_header; int sequence_header; } ;
struct TYPE_27__ {int obu_has_size_field; int obu_type; } ;
struct TYPE_35__ {size_t obu_size; TYPE_2__ obu; TYPE_17__ header; } ;
struct TYPE_33__ {scalar_t__ write_buffer; int * sequence_header; int sequence_header_ref; } ;
struct TYPE_32__ {TYPE_5__* priv_data; } ;
struct TYPE_31__ {int content_ref; TYPE_7__* content; } ;
typedef int PutBitContext ;
typedef TYPE_3__ CodedBitstreamUnit ;
typedef TYPE_4__ CodedBitstreamContext ;
typedef TYPE_5__ CodedBitstreamAV1Context ;
typedef TYPE_6__ AV1RawTileData ;
typedef TYPE_7__ AV1RawOBU ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int *,int *,int,int *) ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_23__*,int *) ;
 int FUNC_6 (TYPE_4__*,int *,char*,size_t) ;
 int FUNC_7 (TYPE_4__*,int *,int *) ;
 int FUNC_8 (TYPE_4__*,int *,TYPE_17__*) ;
 int FUNC_9 (TYPE_4__*,int *,int *) ;
 int FUNC_10 (TYPE_4__*,int *,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_4__*,int *,TYPE_12__*) ;
 int FUNC_13 (TYPE_4__*,int *,TYPE_10__*) ;
 int FUNC_14 (TYPE_4__*,int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__,int ,size_t) ;
 int FUNC_17 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,size_t) ;

__attribute__((used)) static int FUNC_22(CodedBitstreamContext *VAR_3,
                             CodedBitstreamUnit *VAR_4,
                             PutBitContext *VAR_5)
{
    CodedBitstreamAV1Context *VAR_6 = VAR_3->priv_data;
    AV1RawOBU *VAR_7 = VAR_4->content;
    PutBitContext VAR_8;
    AV1RawTileData *VAR_9;
    size_t VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;




    VAR_7->header.obu_has_size_field = 1;

    VAR_11 = FUNC_8(VAR_3, VAR_5, &VAR_7->header);
    if (VAR_11 < 0)
        return VAR_11;

    if (VAR_7->header.obu_has_size_field) {
        VAR_8 = *VAR_5;

        FUNC_18(VAR_5, 0);
        FUNC_18(VAR_5, 0);
    }

    VAR_9 = ((void*)0);
    VAR_12 = FUNC_19(VAR_5);

    switch (VAR_7->header.obu_type) {
    case 131:
        {
            VAR_11 = FUNC_10(VAR_3, VAR_5,
                                                    &VAR_7->obu.sequence_header);
            if (VAR_11 < 0)
                return VAR_11;

            FUNC_3(&VAR_6->sequence_header_ref);
            VAR_6->sequence_header = ((void*)0);

            VAR_6->sequence_header_ref = FUNC_2(VAR_4->content_ref);
            if (!VAR_6->sequence_header_ref)
                return FUNC_0(VAR_0);
            VAR_6->sequence_header = &VAR_7->obu.sequence_header;
        }
        break;
    case 130:
        {
            VAR_11 = FUNC_11(VAR_3, VAR_5);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;
    case 135:
    case 132:
        {
            VAR_11 = FUNC_4(VAR_3, VAR_5,
                                                 &VAR_7->obu.frame_header,
                                                 VAR_7->header.obu_type ==
                                                 132,
                                                 ((void*)0));
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;
    case 129:
        {
            VAR_11 = FUNC_12(VAR_3, VAR_5,
                                               &VAR_7->obu.tile_group);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_9 = &VAR_7->obu.tile_group.tile_data;
        }
        break;
    case 136:
        {
            VAR_11 = FUNC_5(VAR_3, VAR_5, &VAR_7->obu.frame, ((void*)0));
            if (VAR_11 < 0)
                return VAR_11;

            VAR_9 = &VAR_7->obu.frame.tile_group.tile_data;
        }
        break;
    case 128:
        {
            VAR_11 = FUNC_13(VAR_3, VAR_5, &VAR_7->obu.tile_list);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_9 = &VAR_7->obu.tile_list.tile_data;
        }
        break;
    case 134:
        {
            VAR_11 = FUNC_7(VAR_3, VAR_5, &VAR_7->obu.metadata);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;
    case 133:
        {
            VAR_11 = FUNC_9(VAR_3, VAR_5, &VAR_7->obu.padding);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;
    default:
        return FUNC_0(VAR_2);
    }

    VAR_13 = FUNC_19(VAR_5);
    VAR_10 = (VAR_13 - VAR_12 + 7) / 8;
    if (VAR_9) {
        VAR_7->obu_size = VAR_10 + VAR_9->data_size;
    } else if (VAR_10 > 0) {

        VAR_11 = FUNC_14(VAR_3, VAR_5, 8 - VAR_13 % 8);
        if (VAR_11 < 0)
            return VAR_11;
        VAR_13 = FUNC_19(VAR_5);
        VAR_7->obu_size = VAR_10 = (VAR_13 - VAR_12 + 7) / 8;
    } else {

        VAR_7->obu_size = 0;
    }

    VAR_13 = FUNC_19(VAR_5);

    FUNC_1(VAR_13 % 8 == 0);
    FUNC_15(VAR_5);
    VAR_12 /= 8;
    VAR_13 /= 8;

    *VAR_5 = VAR_8;
    VAR_11 = FUNC_6(VAR_3, VAR_5, "obu_size", VAR_7->obu_size);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_14 = FUNC_19(VAR_5) / 8;
    FUNC_15(VAR_5);
    FUNC_1(VAR_14 <= VAR_12);

    if (8 * VAR_7->obu_size > FUNC_20(VAR_5))
        return FUNC_0(VAR_1);

    if (VAR_7->obu_size > 0) {
        FUNC_17(VAR_6->write_buffer + VAR_14,
                VAR_6->write_buffer + VAR_12, VAR_10);
        FUNC_21(VAR_5, VAR_10);

        if (VAR_9) {
            FUNC_16(VAR_6->write_buffer + VAR_14 + VAR_10,
                   VAR_9->data, VAR_9->data_size);
            FUNC_21(VAR_5, VAR_9->data_size);
        }
    }

    return 0;
}
