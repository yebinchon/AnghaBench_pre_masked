
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
typedef enum SwrFilterType { ____Placeholder_SwrFilterType } SwrFilterType ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_9__ {int phase_count; int linear; double factor; int filter_length; int format; int filter_type; double kaiser_beta; int felem_size; int filter_shift; int filter_alloc; int phase_count_compensation; int src_incr; int dst_incr; int ideal_dst_incr; int dst_incr_div; int dst_incr_mod; int index; scalar_t__ filter_bank; scalar_t__ frac; scalar_t__ compensation_distance; } ;
typedef TYPE_1__ ResampleContext ;


 int VAR_0 ;




 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 double FUNC_2 (int,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ,char*) ;
 TYPE_1__* FUNC_9 (int) ;
 int FUNC_10 (int*,int*,int,int,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,void*,double,int,int,int,int,int,double) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (scalar_t__,scalar_t__,int) ;
 int FUNC_14 (TYPE_1__**) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static ResampleContext *FUNC_16(ResampleContext *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8,
                                    double VAR_9, enum AVSampleFormat VAR_10, enum SwrFilterType VAR_11, double VAR_12,
                                    double VAR_13, int VAR_14, int VAR_15)
{
    double VAR_16 = VAR_9? VAR_9 : 0.97;
    double VAR_17= FUNC_2(VAR_4 * VAR_16 / VAR_5, 1.0);
    int VAR_18= 1<<VAR_7;
    int VAR_19 = VAR_18;
    int VAR_20 = FUNC_1((int)FUNC_12(VAR_6/VAR_17), 1);

    if (VAR_20 > 1)
        VAR_20 = FUNC_0(VAR_20, 2);

    if (VAR_15) {
        int VAR_21, VAR_22;

        FUNC_10(&VAR_21, &VAR_22, VAR_4, VAR_5, VAR_2);
        if (VAR_21 <= VAR_18) {
            VAR_19 = VAR_21 * (VAR_18 / VAR_21);
            VAR_18 = VAR_21;
        }
    }

    if (!VAR_3 || VAR_3->phase_count != VAR_18 || VAR_3->linear!=VAR_8 || VAR_3->factor != VAR_17
           || VAR_3->filter_length != VAR_20 || VAR_3->format != VAR_10
           || VAR_3->filter_type != VAR_11 || VAR_3->kaiser_beta != VAR_12) {
        FUNC_14(&VAR_3);
        VAR_3 = FUNC_9(sizeof(*VAR_3));
        if (!VAR_3)
            return ((void*)0);

        VAR_3->format= VAR_10;

        VAR_3->felem_size= FUNC_7(VAR_3->format);

        switch(VAR_3->format){
        case 129:
            VAR_3->filter_shift = 15;
            break;
        case 128:
            VAR_3->filter_shift = 30;
            break;
        case 130:
        case 131:
            VAR_3->filter_shift = 0;
            break;
        default:
            FUNC_8(((void*)0), VAR_0, "Unsupported sample format\n");
            FUNC_3(0);
        }

        if (VAR_6/VAR_17 > VAR_1/256) {
            FUNC_8(((void*)0), VAR_0, "Filter length too large\n");
            goto error;
        }

        VAR_3->phase_count = VAR_18;
        VAR_3->linear = VAR_8;
        VAR_3->factor = VAR_17;
        VAR_3->filter_length = VAR_20;
        VAR_3->filter_alloc = FUNC_0(VAR_3->filter_length, 8);
        VAR_3->filter_bank = FUNC_4(VAR_3->filter_alloc, (VAR_18+1)*VAR_3->felem_size);
        VAR_3->filter_type = VAR_11;
        VAR_3->kaiser_beta = VAR_12;
        VAR_3->phase_count_compensation = VAR_19;
        if (!VAR_3->filter_bank)
            goto error;
        if (FUNC_11(VAR_3, (void*)VAR_3->filter_bank, VAR_17, VAR_3->filter_length, VAR_3->filter_alloc, VAR_18, 1<<VAR_3->filter_shift, VAR_11, VAR_12))
            goto error;
        FUNC_13(VAR_3->filter_bank + (VAR_3->filter_alloc*VAR_18+1)*VAR_3->felem_size, VAR_3->filter_bank, (VAR_3->filter_alloc-1)*VAR_3->felem_size);
        FUNC_13(VAR_3->filter_bank + (VAR_3->filter_alloc*VAR_18 )*VAR_3->felem_size, VAR_3->filter_bank + (VAR_3->filter_alloc - 1)*VAR_3->felem_size, VAR_3->felem_size);
    }

    VAR_3->compensation_distance= 0;
    if(!FUNC_10(&VAR_3->src_incr, &VAR_3->dst_incr, VAR_4, VAR_5 * (int64_t)VAR_18, VAR_1/2))
        goto error;
    while (VAR_3->dst_incr < (1<<20) && VAR_3->src_incr < (1<<20)) {
        VAR_3->dst_incr *= 2;
        VAR_3->src_incr *= 2;
    }
    VAR_3->ideal_dst_incr = VAR_3->dst_incr;
    VAR_3->dst_incr_div = VAR_3->dst_incr / VAR_3->src_incr;
    VAR_3->dst_incr_mod = VAR_3->dst_incr % VAR_3->src_incr;

    VAR_3->index= -VAR_18*((VAR_3->filter_length-1)/2);
    VAR_3->frac= 0;

    FUNC_15(VAR_3);

    return VAR_3;
error:
    FUNC_6(&VAR_3->filter_bank);
    FUNC_5(VAR_3);
    return ((void*)0);
}
