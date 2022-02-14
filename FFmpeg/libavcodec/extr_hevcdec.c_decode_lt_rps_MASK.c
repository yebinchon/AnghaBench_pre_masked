
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_9__ {int pic_order_cnt_lsb; } ;
struct TYPE_8__ {TYPE_4__* sps; } ;
struct TYPE_12__ {int poc; TYPE_2__ sh; TYPE_1__ ps; } ;
struct TYPE_11__ {int log2_max_poc_lsb; unsigned int num_long_term_ref_pics_sps; int* lt_ref_pic_poc_lsb_sps; void** used_by_curr_pic_lt_sps_flag; int long_term_ref_pics_present_flag; } ;
struct TYPE_10__ {unsigned int nb_refs; int* poc; void** used; } ;
typedef TYPE_3__ LongTermRPS ;
typedef TYPE_4__ HEVCSPS ;
typedef TYPE_5__ HEVCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(HEVCContext *VAR_1, LongTermRPS *VAR_2, GetBitContext *VAR_3)
{
    const HEVCSPS *VAR_4 = VAR_1->ps.sps;
    int VAR_5 = 1 << VAR_4->log2_max_poc_lsb;
    int VAR_6 = 0;
    unsigned int VAR_7 = 0, VAR_8;
    int VAR_9;

    VAR_2->nb_refs = 0;
    if (!VAR_4->long_term_ref_pics_present_flag)
        return 0;

    if (VAR_4->num_long_term_ref_pics_sps > 0)
        VAR_7 = FUNC_4(VAR_3);
    VAR_8 = FUNC_4(VAR_3);

    if (VAR_7 > VAR_4->num_long_term_ref_pics_sps)
        return VAR_0;
    if (VAR_8 + (uint64_t)VAR_7 > FUNC_0(VAR_2->poc))
        return VAR_0;

    VAR_2->nb_refs = VAR_8 + VAR_7;

    for (VAR_9 = 0; VAR_9 < VAR_2->nb_refs; VAR_9++) {
        uint8_t VAR_10;

        if (VAR_9 < VAR_7) {
            uint8_t VAR_11 = 0;

            if (VAR_4->num_long_term_ref_pics_sps > 1)
                VAR_11 = FUNC_2(VAR_3, FUNC_1(VAR_4->num_long_term_ref_pics_sps));

            VAR_2->poc[VAR_9] = VAR_4->lt_ref_pic_poc_lsb_sps[VAR_11];
            VAR_2->used[VAR_9] = VAR_4->used_by_curr_pic_lt_sps_flag[VAR_11];
        } else {
            VAR_2->poc[VAR_9] = FUNC_2(VAR_3, VAR_4->log2_max_poc_lsb);
            VAR_2->used[VAR_9] = FUNC_3(VAR_3);
        }

        VAR_10 = FUNC_3(VAR_3);
        if (VAR_10) {
            int64_t VAR_12 = FUNC_4(VAR_3);
            int64_t VAR_13;

            if (VAR_9 && VAR_9 != VAR_7)
                VAR_12 += VAR_6;

            VAR_13 = VAR_2->poc[VAR_9] + VAR_1->poc - VAR_12 * VAR_5 - VAR_1->sh.pic_order_cnt_lsb;
            if (VAR_13 != (int32_t)VAR_13)
                return VAR_0;
            VAR_2->poc[VAR_9] = VAR_13;
            VAR_6 = VAR_12;
        }
    }

    return 0;
}
