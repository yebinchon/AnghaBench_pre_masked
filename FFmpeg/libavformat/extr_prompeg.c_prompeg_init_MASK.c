
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {void* bitstring; } ;
struct TYPE_8__ {int packet_idx_max; int l; int d; int packet_size; int length_recovery; int rtp_buf_size; int bitstring_size; int fec_arr_len; int rtp_col_sn; int rtp_row_sn; int first; scalar_t__ init; int * rtp_buf; TYPE_4__** fec_arr; TYPE_4__** fec_col_tmp; TYPE_4__** fec_col; TYPE_4__* fec_row; scalar_t__ packet_idx; } ;
typedef int PrompegFec ;
typedef TYPE_2__ PrompegContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 TYPE_4__* FUNC_4 (int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_5, const uint8_t *VAR_6, int VAR_7) {
    PrompegContext *VAR_8 = VAR_5->priv_data;
    uint32_t VAR_9;
    int VAR_10;

    VAR_8->fec_arr = ((void*)0);
    VAR_8->rtp_buf = ((void*)0);

    if (VAR_7 < 12 || VAR_7 > VAR_4 + 12) {
        FUNC_3(VAR_5, VAR_2, "Invalid RTP packet size\n");
        return VAR_0;
    }

    VAR_8->packet_idx = 0;
    VAR_8->packet_idx_max = VAR_8->l * VAR_8->d;
    VAR_8->packet_size = VAR_7;
    VAR_8->length_recovery = VAR_7 - 12;
    VAR_8->rtp_buf_size = 28 + VAR_8->length_recovery;
    VAR_8->bitstring_size = 8 + VAR_8->length_recovery;
    VAR_8->fec_arr_len = 1 + 2 * VAR_8->l;

    if (VAR_5->flags & VAR_1) {
        VAR_8->rtp_col_sn = 0;
        VAR_8->rtp_row_sn = 0;
    } else {
        VAR_9 = FUNC_2();
        VAR_8->rtp_col_sn = VAR_9 & 0x0fff;
        VAR_8->rtp_row_sn = (VAR_9 >> 16) & 0x0fff;
    }

    VAR_8->fec_arr = FUNC_5(VAR_8->fec_arr_len, sizeof (PrompegFec*));
    if (!VAR_8->fec_arr) {
        goto fail;
    }
    for (VAR_10 = 0; VAR_10 < VAR_8->fec_arr_len; VAR_10++) {
        VAR_8->fec_arr[VAR_10] = FUNC_4(sizeof (PrompegFec));
        if (!VAR_8->fec_arr[VAR_10]) {
            goto fail;
        }
        VAR_8->fec_arr[VAR_10]->bitstring = FUNC_5(VAR_8->bitstring_size, sizeof (uint8_t));
        if (!VAR_8->fec_arr[VAR_10]->bitstring) {
            FUNC_1(&VAR_8->fec_arr[VAR_10]);
            goto fail;
        }
    }
    VAR_8->fec_row = *VAR_8->fec_arr;
    VAR_8->fec_col = VAR_8->fec_arr + 1;
    VAR_8->fec_col_tmp = VAR_8->fec_arr + 1 + VAR_8->l;

    VAR_8->rtp_buf = FUNC_5(VAR_8->rtp_buf_size, sizeof (uint8_t));
    if (!VAR_8->rtp_buf) {
        goto fail;
    }
    FUNC_6(VAR_8->rtp_buf, 0, VAR_8->rtp_buf_size);

    VAR_8->init = 0;
    VAR_8->first = 1;

    return 0;

fail:
    FUNC_3(VAR_5, VAR_2, "Failed to allocate the FEC buffer\n");
    return FUNC_0(VAR_3);
}
