
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int packet_idx; int l; int d; int packet_idx_max; scalar_t__ first; TYPE_2__** fec_col; int bitstring_size; TYPE_2__** fec_col_tmp; TYPE_2__* fec_row; scalar_t__ init; } ;
struct TYPE_10__ {int bitstring; void* ts; void* sn; } ;
typedef TYPE_2__ PrompegFec ;
typedef TYPE_3__ PrompegContext ;


 void* FUNC_0 (int const*) ;
 void* FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int const*,int,int **) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_7 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(URLContext *VAR_2, const uint8_t *VAR_3, int VAR_4) {
    PrompegContext *VAR_5 = VAR_2->priv_data;
    PrompegFec *VAR_6;
    uint8_t *VAR_7 = ((void*)0);
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12 = 0;

    if (VAR_5->init && ((VAR_11 = FUNC_5(VAR_2, VAR_3, VAR_4)) < 0))
        goto end;

    if ((VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_7)) < 0)
        goto end;

    VAR_8 = VAR_5->packet_idx % VAR_5->l;
    VAR_10 = VAR_5->packet_idx / VAR_5->l % VAR_5->d;


    if (VAR_8 == 0) {
        if (!VAR_5->first || VAR_5->packet_idx > 0) {
            if ((VAR_11 = FUNC_6(VAR_2, VAR_5->fec_row, VAR_1)) < 0)
                goto end;
            VAR_12 += VAR_11;
        }
        FUNC_3(VAR_5->fec_row->bitstring, VAR_7, VAR_5->bitstring_size);
        VAR_5->fec_row->sn = FUNC_0(VAR_3 + 2);
        VAR_5->fec_row->ts = FUNC_1(VAR_3 + 4);
    } else {
        FUNC_7(VAR_5->fec_row->bitstring, VAR_7, VAR_5->fec_row->bitstring,
                VAR_5->bitstring_size);
    }


    if (VAR_10 == 0) {
        if (!VAR_5->first) {

            VAR_6 = VAR_5->fec_col[VAR_8];
            VAR_5->fec_col[VAR_8] = VAR_5->fec_col_tmp[VAR_8];
            VAR_5->fec_col_tmp[VAR_8] = VAR_6;
        }
        FUNC_3(VAR_5->fec_col_tmp[VAR_8]->bitstring, VAR_7, VAR_5->bitstring_size);
        VAR_5->fec_col_tmp[VAR_8]->sn = FUNC_0(VAR_3 + 2);
        VAR_5->fec_col_tmp[VAR_8]->ts = FUNC_1(VAR_3 + 4);
    } else {
        FUNC_7(VAR_5->fec_col_tmp[VAR_8]->bitstring, VAR_7,
                VAR_5->fec_col_tmp[VAR_8]->bitstring, VAR_5->bitstring_size);
    }


    if (!VAR_5->first && VAR_5->packet_idx % VAR_5->d == 0) {
        VAR_9 = VAR_5->packet_idx / VAR_5->d;
        if ((VAR_11 = FUNC_6(VAR_2, VAR_5->fec_col[VAR_9], VAR_0)) < 0)
            goto end;
        VAR_12 += VAR_11;
    }

    if (++VAR_5->packet_idx >= VAR_5->packet_idx_max) {
        VAR_5->packet_idx = 0;
        if (VAR_5->first)
            VAR_5->first = 0;
    }

    VAR_11 = VAR_12;

end:
    FUNC_2(VAR_7);
    return VAR_11;
}
