
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object_type; int chan_config; int crc_absent; int num_aac_frames; int sampling_index; int sample_rate; int samples; int bit_rate; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AACADTSHeaderInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(GetBitContext *VAR_5, AACADTSHeaderInfo *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;

    if (FUNC_0(VAR_5, 12) != 0xfff)
        return VAR_2;

    FUNC_3(VAR_5);
    FUNC_2(VAR_5, 2);
    VAR_12 = FUNC_1(VAR_5);
    VAR_11 = FUNC_0(VAR_5, 2);
    VAR_10 = FUNC_0(VAR_5, 4);
    if (!VAR_4[VAR_10])
        return VAR_1;
    FUNC_3(VAR_5);
    VAR_9 = FUNC_0(VAR_5, 3);

    FUNC_3(VAR_5);
    FUNC_3(VAR_5);


    FUNC_3(VAR_5);
    FUNC_3(VAR_5);
    VAR_7 = FUNC_0(VAR_5, 13);
    if (VAR_7 < VAR_3)
        return VAR_0;

    FUNC_2(VAR_5, 11);
    VAR_8 = FUNC_0(VAR_5, 2);

    VAR_6->object_type = VAR_11 + 1;
    VAR_6->chan_config = VAR_9;
    VAR_6->crc_absent = VAR_12;
    VAR_6->num_aac_frames = VAR_8 + 1;
    VAR_6->sampling_index = VAR_10;
    VAR_6->sample_rate = VAR_4[VAR_10];
    VAR_6->samples = (VAR_8 + 1) * 1024;
    VAR_6->bit_rate = VAR_7 * 8 * VAR_6->sample_rate / VAR_6->samples;

    return VAR_7;
}
