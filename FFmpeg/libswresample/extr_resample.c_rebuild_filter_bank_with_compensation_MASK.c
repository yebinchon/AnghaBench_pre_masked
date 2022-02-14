
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_4__ {int phase_count_compensation; int phase_count; int dst_incr_mod; int filter_alloc; int felem_size; int filter_shift; int src_incr; int dst_incr; int ideal_dst_incr; int dst_incr_div; int index; int * filter_bank; int kaiser_beta; int filter_type; int filter_length; int factor; int frac; } ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int*,int*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int,int,int,int ,int ) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(ResampleContext *VAR_3)
{
    uint8_t *VAR_4;
    int VAR_5, VAR_6;
    int VAR_7 = VAR_3->phase_count_compensation;
    int VAR_8;

    if (VAR_7 == VAR_3->phase_count)
        return 0;

    FUNC_1(!VAR_3->frac && !VAR_3->dst_incr_mod);

    VAR_4 = FUNC_2(VAR_3->filter_alloc, (VAR_7 + 1) * VAR_3->felem_size);
    if (!VAR_4)
        return FUNC_0(VAR_1);

    VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_3->factor, VAR_3->filter_length, VAR_3->filter_alloc,
                       VAR_7, 1 << VAR_3->filter_shift, VAR_3->filter_type, VAR_3->kaiser_beta);
    if (VAR_8 < 0) {
        FUNC_3(&VAR_4);
        return VAR_8;
    }
    FUNC_6(VAR_4 + (VAR_3->filter_alloc*VAR_7+1)*VAR_3->felem_size, VAR_4, (VAR_3->filter_alloc-1)*VAR_3->felem_size);
    FUNC_6(VAR_4 + (VAR_3->filter_alloc*VAR_7 )*VAR_3->felem_size, VAR_4 + (VAR_3->filter_alloc - 1)*VAR_3->felem_size, VAR_3->felem_size);

    if (!FUNC_4(&VAR_5, &VAR_6, VAR_3->src_incr,
                   VAR_3->dst_incr * (int64_t)(VAR_7/VAR_3->phase_count), VAR_2/2))
    {
        FUNC_3(&VAR_4);
        return FUNC_0(VAR_0);
    }

    VAR_3->src_incr = VAR_5;
    VAR_3->dst_incr = VAR_6;
    while (VAR_3->dst_incr < (1<<20) && VAR_3->src_incr < (1<<20)) {
        VAR_3->dst_incr *= 2;
        VAR_3->src_incr *= 2;
    }
    VAR_3->ideal_dst_incr = VAR_3->dst_incr;
    VAR_3->dst_incr_div = VAR_3->dst_incr / VAR_3->src_incr;
    VAR_3->dst_incr_mod = VAR_3->dst_incr % VAR_3->src_incr;
    VAR_3->index *= VAR_7 / VAR_3->phase_count;
    VAR_3->phase_count = VAR_7;
    FUNC_3(&VAR_3->filter_bank);
    VAR_3->filter_bank = VAR_4;
    return 0;
}
