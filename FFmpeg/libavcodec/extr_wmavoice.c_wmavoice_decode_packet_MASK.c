
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int spillover_nbits; int nb_superframes; int sframe_cache_size; int skip_bits_next; int pb; int sframe_cache; int gb; } ;
typedef TYPE_1__ WMAVoiceContext ;
struct TYPE_10__ {int block_align; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int size; int data; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_3__*,void*,int*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_1, void *VAR_2,
                                  int *VAR_3, AVPacket *VAR_4)
{
    WMAVoiceContext *VAR_5 = VAR_1->priv_data;
    GetBitContext *VAR_6 = &VAR_5->gb;
    int VAR_7, VAR_8, VAR_9;






    for (VAR_7 = VAR_4->size; VAR_7 > VAR_1->block_align; VAR_7 -= VAR_1->block_align);
    FUNC_4(&VAR_5->gb, VAR_4->data, VAR_7);




    if (!(VAR_7 % VAR_1->block_align)) {
        if (!VAR_7) {
            VAR_5->spillover_nbits = 0;
            VAR_5->nb_superframes = 0;
        } else {
            if ((VAR_8 = FUNC_6(VAR_5)) < 0)
                return VAR_8;
            VAR_5->nb_superframes = VAR_8;
        }




        if (VAR_5->sframe_cache_size > 0) {
            int VAR_10 = FUNC_2(VAR_6);
            if (VAR_10 + VAR_5->spillover_nbits > VAR_4->size * 8) {
                VAR_5->spillover_nbits = VAR_4->size * 8 - VAR_10;
            }
            FUNC_0(&VAR_5->pb, VAR_4->data, VAR_7, VAR_6, VAR_5->spillover_nbits);
            FUNC_1(&VAR_5->pb);
            VAR_5->sframe_cache_size += VAR_5->spillover_nbits;
            if ((VAR_8 = FUNC_9(VAR_1, VAR_2, VAR_3)) == 0 &&
                *VAR_3) {
                VAR_10 += VAR_5->spillover_nbits;
                VAR_5->skip_bits_next = VAR_10 & 7;
                VAR_8 = VAR_10 >> 3;
                return VAR_8;
            } else
                FUNC_8 (VAR_6, VAR_5->spillover_nbits - VAR_10 +
                                FUNC_2(VAR_6));
        } else if (VAR_5->spillover_nbits) {
            FUNC_8(VAR_6, VAR_5->spillover_nbits);
        }
    } else if (VAR_5->skip_bits_next)
        FUNC_7(VAR_6, VAR_5->skip_bits_next);


    VAR_5->sframe_cache_size = 0;
    VAR_5->skip_bits_next = 0;
    VAR_9 = FUNC_3(VAR_6);
    if (VAR_5->nb_superframes-- == 0) {
        *VAR_3 = 0;
        return VAR_7;
    } else if (VAR_5->nb_superframes > 0) {
        if ((VAR_8 = FUNC_9(VAR_1, VAR_2, VAR_3)) < 0) {
            return VAR_8;
        } else if (*VAR_3) {
            int VAR_11 = FUNC_2(VAR_6);
            VAR_5->skip_bits_next = VAR_11 & 7;
            VAR_8 = VAR_11 >> 3;
            return VAR_8;
        }
    } else if ((VAR_5->sframe_cache_size = VAR_9) > 0) {

        FUNC_5(&VAR_5->pb, VAR_5->sframe_cache, VAR_0);
        FUNC_0(&VAR_5->pb, VAR_4->data, VAR_7, VAR_6, VAR_5->sframe_cache_size);


    }

    return VAR_7;
}
