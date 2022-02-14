
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int channels; scalar_t__ sample_rate; int frame_samples; int ch_layout; scalar_t__ bps; void* data_type; int samples; void* codec; } ;
typedef TYPE_1__ TAKStreamInfo ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int * VAR_13 ;
 int FUNC_5 (scalar_t__,int) ;

void FUNC_6(TAKStreamInfo *VAR_14, GetBitContext *VAR_15)
{
    uint64_t VAR_16 = 0;
    int VAR_17, VAR_18;

    VAR_14->codec = FUNC_1(VAR_15, VAR_2);
    FUNC_4(VAR_15, VAR_3);

    VAR_17 = FUNC_1(VAR_15, VAR_11);
    VAR_14->samples = FUNC_3(VAR_15, VAR_12);

    VAR_14->data_type = FUNC_1(VAR_15, VAR_7);
    VAR_14->sample_rate = FUNC_1(VAR_15, VAR_8) +
                     VAR_10;
    VAR_14->bps = FUNC_1(VAR_15, VAR_4) +
                     VAR_0;
    VAR_14->channels = FUNC_1(VAR_15, VAR_5) +
                     VAR_1;

    if (FUNC_2(VAR_15)) {
        FUNC_4(VAR_15, VAR_9);
        if (FUNC_2(VAR_15)) {
            for (VAR_18 = 0; VAR_18 < VAR_14->channels; VAR_18++) {
                int VAR_19 = FUNC_1(VAR_15, VAR_6);

                if (VAR_19 < FUNC_0(VAR_13))
                    VAR_16 |= VAR_13[VAR_19];
            }
        }
    }

    VAR_14->ch_layout = VAR_16;
    VAR_14->frame_samples = FUNC_5(VAR_14->sample_rate, VAR_17);
}
