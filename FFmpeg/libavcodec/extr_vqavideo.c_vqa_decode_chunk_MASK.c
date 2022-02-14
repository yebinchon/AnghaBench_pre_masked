
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int decode_buffer_size; int* palette; int* codebook; int codebook_size; int* decode_buffer; int vector_height; int height; int width; int vqa_version; unsigned int next_codebook_buffer_index; int* next_codebook_buffer; scalar_t__ partial_countdown; scalar_t__ partial_count; int gb; int avctx; } ;
typedef TYPE_1__ VqaContext ;
struct TYPE_7__ {int* linesize; int** data; } ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;






 unsigned int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,unsigned int) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*,unsigned int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,unsigned int) ;
 unsigned int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,unsigned int,int*,int,int) ;
 int FUNC_13 (int*,int*,unsigned int) ;

__attribute__((used)) static int FUNC_14(VqaContext *VAR_4, AVFrame *VAR_5)
{
    unsigned int VAR_6;
    unsigned int VAR_7;
    int VAR_8;
    unsigned int VAR_9 = 0;
    int VAR_10;
    unsigned char VAR_11, VAR_12, VAR_13;
    int VAR_14;
    int VAR_15;

    int VAR_16 = -1;
    int VAR_17 = -1;
    int VAR_18 = -1;
    int VAR_19 = -1;
    int VAR_20 = -1;
    int VAR_21 = -1;
    int VAR_22 = -1;

    int VAR_23, VAR_24;
    int VAR_25 = 0;
    int VAR_26;
    int VAR_27 = 0;
    int VAR_28 = 0;
    int VAR_29 = 0;
    int VAR_30 = 0;
    int VAR_31 = VAR_4->decode_buffer_size / 2;


    while (FUNC_6(&VAR_4->gb) >= 8) {

        VAR_6 = FUNC_4(&VAR_4->gb);
        VAR_9 = FUNC_11(&VAR_4->gb);
        VAR_7 = FUNC_4(&VAR_4->gb);

        switch (VAR_6) {

        case 134:
            VAR_16 = VAR_9;
            break;

        case 133:
            VAR_17 = VAR_9;
            break;

        case 132:
            VAR_18 = VAR_9;
            break;

        case 131:
            VAR_19 = VAR_9;
            break;

        case 130:
            VAR_20 = VAR_9;
            break;

        case 129:
            VAR_21 = VAR_9;
            break;

        case 128:
            VAR_22 = VAR_9;
            break;

        default:
            FUNC_2(VAR_4->avctx, VAR_1, "Found unknown chunk type: %s (%08X)\n",
                   FUNC_1(FUNC_0(VAR_6)), VAR_6);
            break;
        }

        VAR_8 = VAR_7 & 0x01;
        FUNC_10(&VAR_4->gb, VAR_7 + VAR_8);
    }


    if ((VAR_20 != -1) && (VAR_21 != -1)) {


        FUNC_2(VAR_4->avctx, VAR_1, "problem: found both CPL0 and CPLZ chunks\n");
        return VAR_0;
    }


    if (VAR_21 != -1) {



    }


    if (VAR_20 != -1) {

        FUNC_9(&VAR_4->gb, VAR_20, VAR_3);
        VAR_7 = FUNC_3(&VAR_4->gb);

        if (VAR_7 / 3 > 256 || VAR_7 > FUNC_6(&VAR_4->gb)) {
            FUNC_2(VAR_4->avctx, VAR_1, "problem: found a palette chunk with %d colors\n",
                VAR_7 / 3);
            return VAR_0;
        }
        for (VAR_10 = 0; VAR_10 < VAR_7 / 3; VAR_10++) {

            VAR_11 = FUNC_7(&VAR_4->gb) * 4;
            VAR_12 = FUNC_7(&VAR_4->gb) * 4;
            VAR_13 = FUNC_7(&VAR_4->gb) * 4;
            VAR_4->palette[VAR_10] = 0xFFU << 24 | VAR_11 << 16 | VAR_12 << 8 | VAR_13;
            VAR_4->palette[VAR_10] |= VAR_4->palette[VAR_10] >> 6 & 0x30303;
        }
    }


    if ((VAR_16 != -1) && (VAR_17 != -1)) {


        FUNC_2(VAR_4->avctx, VAR_1, "problem: found both CBF0 and CBFZ chunks\n");
        return VAR_0;
    }


    if (VAR_17 != -1) {

        FUNC_9(&VAR_4->gb, VAR_17, VAR_3);
        VAR_7 = FUNC_3(&VAR_4->gb);
        if ((VAR_15 = FUNC_12(VAR_4, VAR_7, VAR_4->codebook,
                                   VAR_4->codebook_size, 0)) < 0)
            return VAR_15;
    }


    if (VAR_16 != -1) {

        FUNC_9(&VAR_4->gb, VAR_16, VAR_3);
        VAR_7 = FUNC_3(&VAR_4->gb);

        if (VAR_7 > VAR_2) {
            FUNC_2(VAR_4->avctx, VAR_1, "problem: CBF0 chunk too large (0x%X bytes)\n",
                VAR_7);
            return VAR_0;
        }

        FUNC_5(&VAR_4->gb, VAR_4->codebook, VAR_7);
    }


    if (VAR_22 == -1) {


        FUNC_2(VAR_4->avctx, VAR_1, "problem: no VPTZ chunk found\n");
        return VAR_0;
    }

    FUNC_9(&VAR_4->gb, VAR_22, VAR_3);
    VAR_7 = FUNC_3(&VAR_4->gb);
    if ((VAR_15 = FUNC_12(VAR_4, VAR_7,
                               VAR_4->decode_buffer, VAR_4->decode_buffer_size, 1)) < 0)
        return VAR_15;


    if (VAR_4->vector_height == 4)
        VAR_14 = 4;
    else
        VAR_14 = 3;
    for (VAR_24 = 0; VAR_24 < VAR_4->height; VAR_24 += VAR_4->vector_height) {
        for (VAR_23 = 0; VAR_23 < VAR_4->width; VAR_23 += 4, VAR_30++, VAR_31++) {
            VAR_26 = VAR_24 * VAR_5->linesize[0] + VAR_23;



            switch (VAR_4->vqa_version) {

            case 1:
                VAR_28 = VAR_4->decode_buffer[VAR_30 * 2];
                VAR_29 = VAR_4->decode_buffer[(VAR_30 * 2) + 1];
                VAR_27 = ((VAR_29 << 8) | VAR_28) >> 3;
                VAR_27 <<= VAR_14;
                VAR_25 = VAR_4->vector_height;

                if (VAR_29 == 0xFF) {
                    while (VAR_25--) {
                        VAR_5->data[0][VAR_26 + 0] = 255 - VAR_28;
                        VAR_5->data[0][VAR_26 + 1] = 255 - VAR_28;
                        VAR_5->data[0][VAR_26 + 2] = 255 - VAR_28;
                        VAR_5->data[0][VAR_26 + 3] = 255 - VAR_28;
                        VAR_26 += VAR_5->linesize[0];
                    }
                    VAR_25=0;
                }
                break;

            case 2:
                VAR_28 = VAR_4->decode_buffer[VAR_30];
                VAR_29 = VAR_4->decode_buffer[VAR_31];
                VAR_27 = (VAR_29 << 8) | VAR_28;
                VAR_27 <<= VAR_14;
                VAR_25 = VAR_4->vector_height;
                break;

            case 3:

                VAR_25 = 0;
                break;
            }

            while (VAR_25--) {
                VAR_5->data[0][VAR_26 + 0] = VAR_4->codebook[VAR_27++];
                VAR_5->data[0][VAR_26 + 1] = VAR_4->codebook[VAR_27++];
                VAR_5->data[0][VAR_26 + 2] = VAR_4->codebook[VAR_27++];
                VAR_5->data[0][VAR_26 + 3] = VAR_4->codebook[VAR_27++];
                VAR_26 += VAR_5->linesize[0];
            }
        }
    }


    if ((VAR_18 != -1) && (VAR_19 != -1)) {

        FUNC_2(VAR_4->avctx, VAR_1, "problem: found both CBP0 and CBPZ chunks\n");
        return VAR_0;
    }

    if (VAR_18 != -1) {

        FUNC_9(&VAR_4->gb, VAR_18, VAR_3);
        VAR_7 = FUNC_3(&VAR_4->gb);

        if (VAR_7 > VAR_2 - VAR_4->next_codebook_buffer_index) {
            FUNC_2(VAR_4->avctx, VAR_1, "cbp0 chunk too large (%u bytes)\n",
                   VAR_7);
            return VAR_0;
        }


        FUNC_5(&VAR_4->gb, &VAR_4->next_codebook_buffer[VAR_4->next_codebook_buffer_index],
                               VAR_7);
        VAR_4->next_codebook_buffer_index += VAR_7;

        VAR_4->partial_countdown--;
        if (VAR_4->partial_countdown <= 0) {


            FUNC_13(VAR_4->codebook, VAR_4->next_codebook_buffer,
                VAR_4->next_codebook_buffer_index);


            VAR_4->next_codebook_buffer_index = 0;
            VAR_4->partial_countdown = VAR_4->partial_count;
        }
    }

    if (VAR_19 != -1) {

        FUNC_9(&VAR_4->gb, VAR_19, VAR_3);
        VAR_7 = FUNC_3(&VAR_4->gb);

        if (VAR_7 > VAR_2 - VAR_4->next_codebook_buffer_index) {
            FUNC_2(VAR_4->avctx, VAR_1, "cbpz chunk too large (%u bytes)\n",
                   VAR_7);
            return VAR_0;
        }


        FUNC_5(&VAR_4->gb, &VAR_4->next_codebook_buffer[VAR_4->next_codebook_buffer_index],
                               VAR_7);
        VAR_4->next_codebook_buffer_index += VAR_7;

        VAR_4->partial_countdown--;
        if (VAR_4->partial_countdown <= 0) {
            FUNC_8(&VAR_4->gb, VAR_4->next_codebook_buffer, VAR_4->next_codebook_buffer_index);

            if ((VAR_15 = FUNC_12(VAR_4, VAR_4->next_codebook_buffer_index,
                                       VAR_4->codebook, VAR_4->codebook_size, 0)) < 0)
                return VAR_15;


            VAR_4->next_codebook_buffer_index = 0;
            VAR_4->partial_countdown = VAR_4->partial_count;
        }
    }

    return 0;
}
