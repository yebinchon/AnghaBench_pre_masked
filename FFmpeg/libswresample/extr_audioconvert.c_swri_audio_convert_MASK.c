
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int channels; unsigned int in_simd_align_mask; unsigned int out_simd_align_mask; int* ch_map; int (* conv_f ) (int *,int const*,int const,int const,int *) ;int * silence; int (* simd_f ) (int **,int const**,int) ;} ;
struct TYPE_6__ {scalar_t__ planar; int ch_count; int bps; int ** ch; } ;
typedef TYPE_1__ AudioData ;
typedef TYPE_2__ AudioConvert ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **,int const**,int) ;
 int FUNC_4 (int **,int const**,int) ;
 int FUNC_5 (int *,int const*,int const,int const,int *) ;

int FUNC_6(AudioConvert *VAR_1, AudioData *VAR_2, AudioData *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6=0;
    const int VAR_7= (VAR_2->planar ? 1 :VAR_2->ch_count) *VAR_2->bps;
    unsigned VAR_8 = 0;

    FUNC_0(VAR_1->channels == VAR_2->ch_count);

    if (VAR_1->in_simd_align_mask) {
        int VAR_9 = VAR_3->planar ? VAR_3->ch_count : 1;
        unsigned VAR_10 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++)
            VAR_10 |= (intptr_t)VAR_3->ch[VAR_5];
        VAR_8 |= VAR_10 & VAR_1->in_simd_align_mask;
    }
    if (VAR_1->out_simd_align_mask) {
        int VAR_11 = VAR_2->planar ? VAR_2->ch_count : 1;
        unsigned VAR_12 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_11; VAR_5++)
            VAR_12 |= (intptr_t)VAR_2->ch[VAR_5];
        VAR_8 |= VAR_12 & VAR_1->out_simd_align_mask;
    }



    if(VAR_1->simd_f && !VAR_1->ch_map && !VAR_8){
        VAR_6 = VAR_4&~15;
        FUNC_1(VAR_6>=0);
        FUNC_1(VAR_6<=VAR_4);
        FUNC_2(VAR_1->channels == VAR_0 || !VAR_3->ch[VAR_1->channels]);
        if(VAR_6>0){
            if(VAR_2->planar == VAR_3->planar){
                int VAR_13 = VAR_2->planar ? VAR_2->ch_count : 1;
                for(VAR_5=0; VAR_5<VAR_13; VAR_5++){
                    VAR_1->simd_f(VAR_2->ch+VAR_5, (const uint8_t **)VAR_3->ch+VAR_5, VAR_6 * (VAR_2->planar ? 1 :VAR_2->ch_count));
                }
            }else{
                VAR_1->simd_f(VAR_2->ch, (const uint8_t **)VAR_3->ch, VAR_6);
            }
        }
        if(VAR_6 == VAR_4)
            return 0;
    }

    for(VAR_5=0; VAR_5<VAR_1->channels; VAR_5++){
        const int VAR_14= VAR_1->ch_map ? VAR_1->ch_map[VAR_5] : VAR_5;
        const int VAR_15= VAR_14 < 0 ? 0 : (VAR_3->planar ? 1 : VAR_3->ch_count) * VAR_3->bps;
        const uint8_t *VAR_16= VAR_14 < 0 ? VAR_1->silence : VAR_3->ch[VAR_14];
        uint8_t *VAR_17= VAR_2->ch[VAR_5];
        uint8_t *VAR_18= VAR_17 + VAR_7*VAR_4;
        if(!VAR_17)
            continue;
        VAR_1->conv_f(VAR_17+VAR_6*VAR_7, VAR_16+VAR_6*VAR_15, VAR_15, VAR_7, VAR_18);
    }
    return 0;
}
