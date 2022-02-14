
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {int load_lum_quantiser_matrix; int load_chroma_quantiser_matrix; int* load_huffman_table; TYPE_3__* huffman_table; int * chroma_quantiser_matrix; int * lum_quantiser_matrix; } ;
typedef TYPE_4__ VAQMatrixBufferJPEG ;
typedef TYPE_4__ VAHuffmanTableBufferJPEGBaseline ;
typedef int VAAPIEncodePicture ;
struct TYPE_25__ {TYPE_10__* table; } ;
struct TYPE_23__ {int Ns; } ;
struct TYPE_19__ {TYPE_7__ header; } ;
struct TYPE_24__ {TYPE_1__* table; } ;
struct TYPE_16__ {size_t* Tq; int Nf; } ;
struct TYPE_22__ {TYPE_9__ huffman_tables; TYPE_2__ scan; TYPE_8__ quant_tables; TYPE_11__ frame_header; } ;
typedef TYPE_6__ VAAPIEncodeMJPEGContext ;
struct TYPE_20__ {int* num_dc_codes; int* num_ac_codes; int * ac_values; int * dc_values; } ;
struct TYPE_18__ {int * Q; } ;
struct TYPE_17__ {TYPE_6__* priv_data; } ;
struct TYPE_15__ {int* L; int * V; } ;
typedef TYPE_7__ JPEGRawScanHeader ;
typedef TYPE_8__ JPEGRawQuantisationTableSpecification ;
typedef TYPE_9__ JPEGRawHuffmanTableSpecification ;
typedef TYPE_10__ JPEGRawHuffmanTable ;
typedef TYPE_11__ JPEGRawFrameHeader ;
typedef TYPE_12__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4,
                                                 VAAPIEncodePicture *VAR_5,
                                                 int VAR_6, int *VAR_7,
                                                 char *VAR_8, size_t *VAR_9)
{
    VAAPIEncodeMJPEGContext *VAR_10 = VAR_4->priv_data;
    int VAR_11, VAR_12, VAR_13;

    if (VAR_6 == 0) {

        JPEGRawFrameHeader *VAR_14 = &VAR_10->frame_header;
        JPEGRawQuantisationTableSpecification *VAR_15 = &VAR_10->quant_tables;
        VAQMatrixBufferJPEG *VAR_16;

        if (*VAR_9 < sizeof(*VAR_16))
            return FUNC_0(VAR_1);
        *VAR_7 = VAR_3;
        *VAR_9 = sizeof(*VAR_16);

        VAR_16 = (VAQMatrixBufferJPEG*)VAR_8;
        FUNC_2(VAR_16, 0, sizeof(*VAR_16));

        VAR_16->load_lum_quantiser_matrix = 1;
        for (VAR_12 = 0; VAR_12 < 64; VAR_12++)
            VAR_16->lum_quantiser_matrix[VAR_12] = VAR_15->table[VAR_14->Tq[0]].Q[VAR_12];

        if (VAR_14->Nf > 1) {
            VAR_16->load_chroma_quantiser_matrix = 1;
            for (VAR_12 = 0; VAR_12 < 64; VAR_12++)
                VAR_16->chroma_quantiser_matrix[VAR_12] =
                    VAR_15->table[VAR_14->Tq[1]].Q[VAR_12];
        }

    } else if (VAR_6 == 1) {

        JPEGRawScanHeader *VAR_17 = &VAR_10->scan.header;
        JPEGRawHuffmanTableSpecification *VAR_18 = &VAR_10->huffman_tables;
        VAHuffmanTableBufferJPEGBaseline *VAR_19;

        if (*VAR_9 < sizeof(*VAR_19))
            return FUNC_0(VAR_1);
        *VAR_7 = VAR_2;
        *VAR_9 = sizeof(*VAR_19);

        VAR_19 = (VAHuffmanTableBufferJPEGBaseline*)VAR_8;
        FUNC_2(VAR_19, 0, sizeof(*VAR_19));

        for (VAR_11 = 0; VAR_11 < 1 + (VAR_17->Ns > 1); VAR_11++) {
            const JPEGRawHuffmanTable *VAR_20;

            VAR_19->load_huffman_table[VAR_11] = 1;

            VAR_20 = &VAR_18->table[2 * VAR_11];
            for (VAR_12 = VAR_13 = 0; VAR_12 < 16; VAR_12++)
                VAR_13 += (VAR_19->huffman_table[VAR_11].num_dc_codes[VAR_12] = VAR_20->L[VAR_12]);
            FUNC_1(VAR_13 <= sizeof(VAR_19->huffman_table[VAR_11].dc_values));
            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
                VAR_19->huffman_table[VAR_11].dc_values[VAR_12] = VAR_20->V[VAR_12];

            VAR_20 = &VAR_18->table[2 * VAR_11 + 1];
            for (VAR_12 = VAR_13 = 0; VAR_12 < 16; VAR_12++)
                VAR_13 += (VAR_19->huffman_table[VAR_11].num_ac_codes[VAR_12] = VAR_20->L[VAR_12]);
            FUNC_1(VAR_13 <= sizeof(VAR_19->huffman_table[VAR_11].ac_values));
            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
                VAR_19->huffman_table[VAR_11].ac_values[VAR_12] = VAR_20->V[VAR_12];
        }

    } else {
        return VAR_0;
    }
    return 0;
}
