
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_4__ {unsigned int index; int frac; int dst_incr; int src_incr; int compensation_distance; unsigned int phase_shift; int filter_length; int ideal_dst_incr; unsigned int phase_mask; int (* resample_one ) (TYPE_1__*,void*,int,void const*,unsigned int,int) ;int (* resample_nearest ) (void*,int,void const*,int) ;} ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (void*,int,void const*,int) ;
 int FUNC_3 (TYPE_1__*,void*,int,void const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(ResampleContext *VAR_2, void *VAR_3, const void *VAR_4,
                    int *VAR_5, int VAR_6, int VAR_7, int VAR_8,
                    int VAR_9)
{
    int VAR_10;
    unsigned int VAR_11 = VAR_2->index;
    int VAR_12 = VAR_2->frac;
    int VAR_13 = VAR_2->dst_incr % VAR_2->src_incr;
    int VAR_14 = VAR_2->dst_incr / VAR_2->src_incr;
    int VAR_15 = VAR_2->compensation_distance;

    if (!VAR_3 != !VAR_4)
        return FUNC_0(VAR_1);

    if (VAR_9) {
        uint64_t VAR_16 = ((uint64_t)VAR_11) << 32;
        int64_t VAR_17 = (1LL << 32) * VAR_2->dst_incr / VAR_2->src_incr;
        VAR_7 = FUNC_1(VAR_7,
                               (VAR_6-1-VAR_11) * (int64_t)VAR_2->src_incr /
                               VAR_2->dst_incr);

        if (VAR_3) {
            for(VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
                VAR_2->resample_nearest(VAR_3, VAR_10, VAR_4, VAR_16 >> 32);
                VAR_16 += VAR_17;
            }
        } else {
            VAR_10 = VAR_7;
        }
        VAR_11 += VAR_10 * VAR_14;
        VAR_11 += (VAR_12 + VAR_10 * (int64_t)VAR_13) / VAR_2->src_incr;
        VAR_12 = (VAR_12 + VAR_10 * (int64_t)VAR_13) % VAR_2->src_incr;
    } else {
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            int VAR_18 = VAR_11 >> VAR_2->phase_shift;

            if (VAR_18 + VAR_2->filter_length > VAR_6)
                break;

            if (VAR_3)
                VAR_2->resample_one(VAR_2, VAR_3, VAR_10, VAR_4, VAR_11, VAR_12);

            VAR_12 += VAR_13;
            VAR_11 += VAR_14;
            if (VAR_12 >= VAR_2->src_incr) {
                VAR_12 -= VAR_2->src_incr;
                VAR_11++;
            }
            if (VAR_10 + 1 == VAR_15) {
                VAR_15 = 0;
                VAR_13 = VAR_2->ideal_dst_incr % VAR_2->src_incr;
                VAR_14 = VAR_2->ideal_dst_incr / VAR_2->src_incr;
            }
        }
    }
    if (VAR_5)
        *VAR_5 = VAR_11 >> VAR_2->phase_shift;

    if (VAR_8) {
        VAR_11 &= VAR_2->phase_mask;

        if (VAR_15) {
            VAR_15 -= VAR_10;
            if (VAR_15 <= 0)
                return VAR_0;
        }
        VAR_2->frac = VAR_12;
        VAR_2->index = VAR_11;
        VAR_2->dst_incr = VAR_13 + VAR_2->src_incr*VAR_14;
        VAR_2->compensation_distance = VAR_15;
    }

    return VAR_10;
}
