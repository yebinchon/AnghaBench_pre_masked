
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_31__ {scalar_t__ ch_count; int count; int bps; scalar_t__* ch; int fmt; } ;
struct TYPE_28__ {int output_sample_bits; scalar_t__ method; int noise_pos; TYPE_4__ noise; TYPE_4__ temp; } ;
struct TYPE_29__ {int planar; } ;
struct TYPE_30__ {scalar_t__ ch_count; scalar_t__ planar; } ;
struct SwrContext {scalar_t__ used_ch_count; int int_sample_fmt; int in_sample_fmt; int out_sample_fmt; scalar_t__ out_convert; TYPE_1__ dither; int native_one; int (* mix_2_1_f ) (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;int native_simd_one; int (* mix_2_1_simd ) (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;scalar_t__ resample_first; scalar_t__ in_convert; TYPE_2__ in; TYPE_3__ out; int resample; int rematrix; int channel_map; TYPE_4__ preout; TYPE_4__ midbuf; TYPE_4__ postin; scalar_t__ full_convert; } ;
typedef TYPE_4__ AudioData ;






 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_4 (struct SwrContext*,TYPE_4__*,int,TYPE_4__*,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_8 (scalar_t__,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_9 (struct SwrContext*,scalar_t__,int,unsigned long long,int ) ;
 int FUNC_10 (struct SwrContext*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_11 (struct SwrContext*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_12 (struct SwrContext*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_13 (struct SwrContext*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*,int) ;
 int FUNC_15 (struct SwrContext*,TYPE_4__*,TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_16(struct SwrContext *VAR_1, AudioData *VAR_2, int VAR_3,
                                                      AudioData *VAR_4 , int VAR_5){
    AudioData *VAR_6, *VAR_7, *VAR_8;
    int VAR_9 ;
    AudioData VAR_10, VAR_11;

    if(VAR_1->full_convert){
        FUNC_2(!VAR_1->resample);
        FUNC_8(VAR_1->full_convert, VAR_2, VAR_4, VAR_5);
        return VAR_3;
    }




    if((VAR_9=FUNC_14(&VAR_1->postin, VAR_5))<0)
        return VAR_9;
    if(VAR_1->resample_first){
        FUNC_2(VAR_1->midbuf.ch_count == VAR_1->used_ch_count);
        if((VAR_9=FUNC_14(&VAR_1->midbuf, VAR_3))<0)
            return VAR_9;
    }else{
        FUNC_2(VAR_1->midbuf.ch_count == VAR_1->out.ch_count);
        if((VAR_9=FUNC_14(&VAR_1->midbuf, VAR_5))<0)
            return VAR_9;
    }
    if((VAR_9=FUNC_14(&VAR_1->preout, VAR_3))<0)
        return VAR_9;

    VAR_6= &VAR_1->postin;

    VAR_11= VAR_1->midbuf;
    VAR_7= &VAR_11;
    VAR_10= VAR_1->preout;
    VAR_8= &VAR_10;

    if(VAR_1->int_sample_fmt == VAR_1-> in_sample_fmt && VAR_1->in.planar && !VAR_1->channel_map)
        VAR_6= VAR_4;

    if(VAR_1->resample_first ? !VAR_1->resample : !VAR_1->rematrix)
        VAR_7= VAR_6;

    if(VAR_1->resample_first ? !VAR_1->rematrix : !VAR_1->resample)
        VAR_8= VAR_7;

    if(VAR_1->int_sample_fmt == VAR_1->out_sample_fmt && VAR_1->out.planar
       && !(VAR_1->out_sample_fmt==128 && (VAR_1->dither.output_sample_bits&31))){
        if(VAR_8==VAR_4){
            VAR_3= FUNC_1(VAR_3, VAR_5);
            FUNC_2(VAR_1->in.planar);
            FUNC_3(VAR_2, VAR_4, VAR_3);
            return VAR_3;
        }
        else if(VAR_8==VAR_6) VAR_8= VAR_7= VAR_6= VAR_2;
        else if(VAR_8==VAR_7) VAR_8= VAR_7= VAR_2;
        else VAR_8= VAR_2;
    }

    if(VAR_4 != VAR_6){
        FUNC_8(VAR_1->in_convert, VAR_6, VAR_4, VAR_5);
    }

    if(VAR_1->resample_first){
        if(VAR_6 != VAR_7)
            VAR_3= FUNC_4(VAR_1, VAR_7, VAR_3, VAR_6, VAR_5);
        if(VAR_7 != VAR_8)
            FUNC_15(VAR_1, VAR_8, VAR_7, VAR_3, VAR_8==VAR_2);
    }else{
        if(VAR_6 != VAR_7)
            FUNC_15(VAR_1, VAR_7, VAR_6, VAR_5, VAR_7==VAR_2);
        if(VAR_7 != VAR_8)
            VAR_3= FUNC_4(VAR_1, VAR_8, VAR_3, VAR_7, VAR_5);
    }

    if(VAR_8 != VAR_2 && VAR_3){
        AudioData *VAR_12 = VAR_8;
        if(VAR_1->dither.method){
            int VAR_13;
            int VAR_14= FUNC_0(VAR_3, 1<<16);

            if (VAR_8 == VAR_4) {
                VAR_12 = &VAR_1->dither.temp;
                if((VAR_9=FUNC_14(&VAR_1->dither.temp, VAR_14))<0)
                    return VAR_9;
            }

            if((VAR_9=FUNC_14(&VAR_1->dither.noise, VAR_14))<0)
                return VAR_9;
            if(VAR_9)
                for(VAR_13=0; VAR_13<VAR_1->dither.noise.ch_count; VAR_13++)
                    if((VAR_9=FUNC_9(VAR_1, VAR_1->dither.noise.ch[VAR_13], VAR_1->dither.noise.count, (12345678913579ULL*VAR_13 + 3141592) % 2718281828U, VAR_1->dither.noise.fmt))<0)
                        return VAR_9;
            FUNC_2(VAR_1->dither.noise.ch_count == VAR_8->ch_count);

            if(VAR_1->dither.noise_pos + VAR_3 > VAR_1->dither.noise.count)
                VAR_1->dither.noise_pos = 0;

            if (VAR_1->dither.method < VAR_0){
                if (VAR_1->mix_2_1_simd) {
                    int VAR_15= VAR_3&~15;
                    int VAR_16 = VAR_15 * VAR_8->bps;

                    if(VAR_15)
                        for(VAR_13=0; VAR_13<VAR_8->ch_count; VAR_13++)
                            VAR_1->mix_2_1_simd(VAR_12->ch[VAR_13], VAR_8->ch[VAR_13], VAR_1->dither.noise.ch[VAR_13] + VAR_1->dither.noise.bps * VAR_1->dither.noise_pos, VAR_1->native_simd_one, 0, 0, VAR_15);
                    if(VAR_3 != VAR_15)
                        for(VAR_13=0; VAR_13<VAR_8->ch_count; VAR_13++)
                            VAR_1->mix_2_1_f(VAR_12->ch[VAR_13] + VAR_16, VAR_8->ch[VAR_13] + VAR_16, VAR_1->dither.noise.ch[VAR_13] + VAR_1->dither.noise.bps * VAR_1->dither.noise_pos + VAR_16, VAR_1->native_one, 0, 0, VAR_3 - VAR_15);
                } else {
                    for(VAR_13=0; VAR_13<VAR_8->ch_count; VAR_13++)
                        VAR_1->mix_2_1_f(VAR_12->ch[VAR_13], VAR_8->ch[VAR_13], VAR_1->dither.noise.ch[VAR_13] + VAR_1->dither.noise.bps * VAR_1->dither.noise_pos, VAR_1->native_one, 0, 0, VAR_3);
                }
            } else {
                switch(VAR_1->int_sample_fmt) {
                case 129 :FUNC_12(VAR_1, VAR_12, VAR_8, &VAR_1->dither.noise, VAR_3); break;
                case 128 :FUNC_13(VAR_1, VAR_12, VAR_8, &VAR_1->dither.noise, VAR_3); break;
                case 130 :FUNC_11(VAR_1, VAR_12, VAR_8, &VAR_1->dither.noise, VAR_3); break;
                case 131 :FUNC_10(VAR_1,VAR_12, VAR_8, &VAR_1->dither.noise, VAR_3); break;
                }
            }
            VAR_1->dither.noise_pos += VAR_3;
        }

        FUNC_8(VAR_1->out_convert, VAR_2, VAR_12, VAR_3);
    }
    return VAR_3;
}
