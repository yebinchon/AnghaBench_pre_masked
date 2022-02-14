
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef int buf_padded ;
struct TYPE_6__ {int st; scalar_t__ pts; scalar_t__ dts; } ;
struct TYPE_5__ {scalar_t__ timestamp_res; int timestamp_len; int inst_bitrate_len; int au_len; scalar_t__ use_timestamps; int au_seq_num_len; scalar_t__ use_rand_acc_pt; int ocr_len; int degr_prior_len; int packet_seq_num_len; scalar_t__ use_padding; scalar_t__ use_idle; scalar_t__ use_au_end; scalar_t__ use_au_start; } ;
typedef TYPE_1__ SLConfigDescr ;
typedef TYPE_2__ PESContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(PESContext *VAR_2, SLConfigDescr *VAR_3,
                          const uint8_t *VAR_4, int VAR_5)
{
    GetBitContext VAR_6;
    int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
    int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
    int VAR_14 = -1, VAR_15 = -1;
    int64_t VAR_16 = VAR_1, VAR_17 = VAR_1;
    uint8_t VAR_18[128 + VAR_0];
    int VAR_19 = FUNC_0(VAR_5, sizeof(VAR_18) - VAR_0);

    FUNC_7(VAR_18, VAR_4, VAR_19);

    FUNC_6(&VAR_6, VAR_18, VAR_19 * 8);

    if (VAR_3->use_au_start)
        VAR_7 = FUNC_3(&VAR_6);
    if (VAR_3->use_au_end)
        VAR_8 = FUNC_3(&VAR_6);
    if (!VAR_3->use_au_start && !VAR_3->use_au_end)
        VAR_7 = VAR_8 = 1;
    if (VAR_3->ocr_len > 0)
        VAR_9 = FUNC_3(&VAR_6);
    if (VAR_3->use_idle)
        VAR_10 = FUNC_3(&VAR_6);
    if (VAR_3->use_padding)
        VAR_11 = FUNC_3(&VAR_6);
    if (VAR_11)
        VAR_12 = FUNC_2(&VAR_6, 3);

    if (!VAR_10 && (!VAR_11 || VAR_12 != 0)) {
        if (VAR_3->packet_seq_num_len)
            FUNC_9(&VAR_6, VAR_3->packet_seq_num_len);
        if (VAR_3->degr_prior_len)
            if (FUNC_3(&VAR_6))
                FUNC_8(&VAR_6, VAR_3->degr_prior_len);
        if (VAR_9)
            FUNC_9(&VAR_6, VAR_3->ocr_len);
        if (VAR_7) {
            if (VAR_3->use_rand_acc_pt)
                FUNC_3(&VAR_6);
            if (VAR_3->au_seq_num_len > 0)
                FUNC_9(&VAR_6, VAR_3->au_seq_num_len);
            if (VAR_3->use_timestamps) {
                VAR_14 = FUNC_3(&VAR_6);
                VAR_15 = FUNC_3(&VAR_6);
            }
        }
        if (VAR_3->inst_bitrate_len)
            VAR_13 = FUNC_3(&VAR_6);
        if (VAR_14 == 1)
            VAR_16 = FUNC_5(&VAR_6, VAR_3->timestamp_len);
        if (VAR_15 == 1)
            VAR_17 = FUNC_5(&VAR_6, VAR_3->timestamp_len);
        if (VAR_3->au_len > 0)
            FUNC_9(&VAR_6, VAR_3->au_len);
        if (VAR_13)
            FUNC_9(&VAR_6, VAR_3->inst_bitrate_len);
    }

    if (VAR_16 != VAR_1)
        VAR_2->dts = VAR_16;
    if (VAR_17 != VAR_1)
        VAR_2->pts = VAR_17;

    if (VAR_3->timestamp_len && VAR_3->timestamp_res)
        FUNC_1(VAR_2->st, VAR_3->timestamp_len, 1, VAR_3->timestamp_res);

    return (FUNC_4(&VAR_6) + 7) >> 3;
}
