
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {int h; int w; TYPE_2__* dst; } ;
struct TYPE_16__ {size_t** data; int * linesize; int pts; } ;
struct TYPE_15__ {size_t* rgba_map; size_t* codeword; int* codebook; int codebook_length; size_t* codeword_closest_codebook_idxs; TYPE_1__* pix_desc; scalar_t__ pal8; int lfg; int max_steps_nb; int codeword_length; } ;
struct TYPE_14__ {TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_13__ {int nb_components; } ;
typedef TYPE_3__ ELBGContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 (size_t*,int,int ,int*,int,int ,size_t*,int *) ;
 int FUNC_3 (size_t*,int,int ,int*,int,int ,size_t*,int *) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int,int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_5, AVFrame *VAR_6)
{
    ELBGContext *VAR_7 = VAR_5->dst->priv;
    int VAR_8, VAR_9, VAR_10;
    uint8_t *VAR_11, *VAR_12;

    const uint8_t VAR_13 = VAR_7->rgba_map[VAR_4];
    const uint8_t VAR_14 = VAR_7->rgba_map[VAR_2];
    const uint8_t VAR_15 = VAR_7->rgba_map[VAR_0];


    VAR_12 = VAR_6->data[0];
    VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_5->h; VAR_8++) {
        VAR_11 = VAR_12;
        for (VAR_9 = 0; VAR_9 < VAR_5->w; VAR_9++) {
            VAR_7->codeword[VAR_10++] = VAR_11[VAR_13];
            VAR_7->codeword[VAR_10++] = VAR_11[VAR_14];
            VAR_7->codeword[VAR_10++] = VAR_11[VAR_15];
            VAR_11 += VAR_7->pix_desc->nb_components;
        }
        VAR_12 += VAR_6->linesize[0];
    }


    FUNC_3(VAR_7->codeword, VAR_3, VAR_7->codeword_length,
                     VAR_7->codebook, VAR_7->codebook_length, VAR_7->max_steps_nb,
                     VAR_7->codeword_closest_codebook_idxs, &VAR_7->lfg);
    FUNC_2(VAR_7->codeword, VAR_3, VAR_7->codeword_length,
                   VAR_7->codebook, VAR_7->codebook_length, VAR_7->max_steps_nb,
                   VAR_7->codeword_closest_codebook_idxs, &VAR_7->lfg);

    if (VAR_7->pal8) {
        AVFilterLink *VAR_16 = VAR_5->dst->outputs[0];
        AVFrame *VAR_17 = FUNC_5(VAR_16, VAR_16->w, VAR_16->h);
        uint32_t *VAR_18;

        if (!VAR_17) {
            FUNC_1(&VAR_6);
            return FUNC_0(VAR_1);
        }
        VAR_17->pts = VAR_6->pts;
        FUNC_1(&VAR_6);
        VAR_18 = (uint32_t *)VAR_17->data[1];
        VAR_12 = (uint8_t *)VAR_17->data[0];

        for (VAR_8 = 0; VAR_8 < VAR_7->codebook_length; VAR_8++) {
            VAR_18[VAR_8] = 0xFFU << 24 |
                     (VAR_7->codebook[VAR_8*3 ] << 16) |
                     (VAR_7->codebook[VAR_8*3+1] << 8) |
                      VAR_7->codebook[VAR_8*3+2];
        }

        VAR_10 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_5->h; VAR_8++) {
            VAR_11 = VAR_12;
            for (VAR_9 = 0; VAR_9 < VAR_5->w; VAR_9++, VAR_11++) {
                VAR_11[0] = VAR_7->codeword_closest_codebook_idxs[VAR_10++];
            }
            VAR_12 += VAR_17->linesize[0];
        }

        return FUNC_4(VAR_16, VAR_17);
    }


    VAR_12 = VAR_6->data[0];

    VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_5->h; VAR_8++) {
        VAR_11 = VAR_12;
        for (VAR_9 = 0; VAR_9 < VAR_5->w; VAR_9++) {
            int VAR_19 = VAR_3 * VAR_7->codeword_closest_codebook_idxs[VAR_10++];
            VAR_11[VAR_13] = VAR_7->codebook[VAR_19];
            VAR_11[VAR_14] = VAR_7->codebook[VAR_19+1];
            VAR_11[VAR_15] = VAR_7->codebook[VAR_19+2];
            VAR_11 += VAR_7->pix_desc->nb_components;
        }
        VAR_12 += VAR_6->linesize[0];
    }

    return FUNC_4(VAR_5->dst->outputs[0], VAR_6);
}
