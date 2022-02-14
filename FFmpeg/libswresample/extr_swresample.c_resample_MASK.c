
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ ch_count; scalar_t__ planar; scalar_t__ fmt; int count; } ;
struct TYPE_19__ {scalar_t__ engine; int in_buffer_index; int in_buffer_count; int resample_in_constraint; TYPE_3__ in_buffer; int resample; TYPE_1__* resampler; scalar_t__ flushed; } ;
struct TYPE_18__ {int (* invert_initial_buffer ) (int ,TYPE_3__*,TYPE_3__*,int,int*,int*) ;int (* multiple_resample ) (int ,TYPE_3__*,int,TYPE_3__*,int,int*) ;} ;
typedef TYPE_2__ SwrContext ;
typedef TYPE_3__ AudioData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_4 (int ,TYPE_3__*,TYPE_3__*,int,int*,int*) ;
 int FUNC_5 (int ,TYPE_3__*,int,TYPE_3__*,int,int*) ;
 int FUNC_6 (int ,TYPE_3__*,int,TYPE_3__*,int,int*) ;
 int FUNC_7 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_8(SwrContext *VAR_3, AudioData *VAR_4, int VAR_5,
                             const AudioData * VAR_6, int VAR_7){
    AudioData VAR_8, VAR_9, VAR_10;
    int VAR_11=0;
    int VAR_12=0;
    int VAR_13 = VAR_0 && VAR_3->engine == VAR_2 ? 7 : 0;

    FUNC_1(VAR_3->in_buffer.ch_count == VAR_6->ch_count);
    FUNC_1(VAR_3->in_buffer.planar == VAR_6->planar);
    FUNC_1(VAR_3->in_buffer.fmt == VAR_6->fmt);

    VAR_10=VAR_9=*VAR_4;
    VAR_8 = *VAR_6;

    VAR_12 = VAR_3->resampler->invert_initial_buffer(VAR_3->resample, &VAR_3->in_buffer,
                 &VAR_8, VAR_7, &VAR_3->in_buffer_index, &VAR_3->in_buffer_count);
    if (VAR_12 == VAR_1) {
        return 0;
    } else if (VAR_12 < 0) {
        return VAR_12;
    } else if (VAR_12) {
        FUNC_2(&VAR_8, &VAR_8, VAR_12);
        VAR_7 -= VAR_12;
        VAR_3->resample_in_constraint = 0;
    }

    do{
        int VAR_14, VAR_15, VAR_16;
        if(!VAR_3->resample_in_constraint && VAR_3->in_buffer_count){
            FUNC_2(&VAR_10, &VAR_3->in_buffer, VAR_3->in_buffer_index);
            VAR_14= VAR_3->resampler->multiple_resample(VAR_3->resample, &VAR_9, VAR_5, &VAR_10, VAR_3->in_buffer_count, &VAR_16);
            VAR_5 -= VAR_14;
            VAR_11 += VAR_14;
            FUNC_2(&VAR_9, &VAR_9, VAR_14);
            VAR_3->in_buffer_count -= VAR_16;
            VAR_3->in_buffer_index += VAR_16;

            if(!VAR_7)
                break;
            if(VAR_3->in_buffer_count <= VAR_12){
                FUNC_2(&VAR_8, &VAR_8, -VAR_3->in_buffer_count);
                VAR_7 += VAR_3->in_buffer_count;
                VAR_3->in_buffer_count=0;
                VAR_3->in_buffer_index=0;
                VAR_12 = 0;
            }
        }

        if((VAR_3->flushed || VAR_7 > VAR_13) && !VAR_3->in_buffer_count){
            VAR_3->in_buffer_index=0;
            VAR_14= VAR_3->resampler->multiple_resample(VAR_3->resample, &VAR_9, VAR_5, &VAR_8, FUNC_0(VAR_7-VAR_13, 0), &VAR_16);
            VAR_5 -= VAR_14;
            VAR_11 += VAR_14;
            FUNC_2(&VAR_9, &VAR_9, VAR_14);
            VAR_7 -= VAR_16;
            FUNC_2(&VAR_8, &VAR_8, VAR_16);
        }


        VAR_15= VAR_3->in_buffer_index + VAR_3->in_buffer_count + VAR_7;
        if( VAR_15 > VAR_3->in_buffer.count
           && VAR_3->in_buffer_count + VAR_7 <= VAR_3->in_buffer_index){
            FUNC_2(&VAR_10, &VAR_3->in_buffer, VAR_3->in_buffer_index);
            FUNC_3(&VAR_3->in_buffer, &VAR_10, VAR_3->in_buffer_count);
            VAR_3->in_buffer_index=0;
        }else
            if((VAR_14=FUNC_7(&VAR_3->in_buffer, VAR_15)) < 0)
                return VAR_14;

        if(VAR_7){
            int VAR_17= VAR_7;
            if(VAR_3->in_buffer_count && VAR_3->in_buffer_count+2 < VAR_17 && VAR_5) VAR_17= VAR_3->in_buffer_count+2;

            FUNC_2(&VAR_10, &VAR_3->in_buffer, VAR_3->in_buffer_index + VAR_3->in_buffer_count);
            FUNC_3(&VAR_10, &VAR_8, VAR_17);
            VAR_3->in_buffer_count += VAR_17;
            VAR_7 -= VAR_17;
            VAR_12 += VAR_17;
            FUNC_2(&VAR_8, &VAR_8, VAR_17);
            VAR_3->resample_in_constraint= 0;
            if(VAR_3->in_buffer_count != VAR_17 || VAR_7)
                continue;
            if (VAR_13) {
                VAR_13 = 0;
                continue;
            }
        }
        break;
    }while(1);

    VAR_3->resample_in_constraint= !!VAR_5;

    return VAR_11;
}
