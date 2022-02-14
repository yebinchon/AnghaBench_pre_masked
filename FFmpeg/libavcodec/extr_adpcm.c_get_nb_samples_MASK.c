
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* status; } ;
struct TYPE_8__ {int channels; TYPE_2__* codec; int extradata; int block_align; int bits_per_coded_sample; TYPE_4__* priv_data; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int step_index; } ;
typedef int GetByteContext ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ ADPCMDecodeContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, GetByteContext *VAR_4,
                          int VAR_5, int *VAR_6, int *VAR_7)
{
    ADPCMDecodeContext *VAR_8 = VAR_3->priv_data;
    int VAR_9 = 0;
    int VAR_10 = VAR_3->channels;
    int VAR_11 = 0;
    int VAR_12;

    *VAR_6 = 0;
    *VAR_7 = 0;

    if(VAR_10 <= 0)
        return 0;

    switch (VAR_3->codec->id) {

    case 153:
        if (VAR_5 < 76 * VAR_10)
            return 0;
        VAR_9 = 128;
        break;
    case 143:
        if (VAR_5 < 34 * VAR_10)
            return 0;
        VAR_9 = 64;
        break;

    case 160:
    case 151:
    case 146:
    case 144:
    case 139:
    case 128:
    case 161:
        VAR_9 = VAR_5 * 2 / VAR_10;
        break;
    }
    if (VAR_9)
        return VAR_9;


    VAR_12 = 0;
    switch (VAR_3->codec->id) {
        case 164:
        case 162:
        case 150:
        case 145: VAR_12 = 4 * VAR_10; break;
        case 152: VAR_12 = 8; break;
        case 141: VAR_12 = 4 * VAR_10; break;
    }
    if (VAR_12 > 0)
        return (VAR_5 - VAR_12) * 2 / VAR_10;


    switch (VAR_3->codec->id) {
    case 158:
        VAR_11 = 1;
        *VAR_6 = FUNC_3(VAR_4);
        *VAR_6 -= *VAR_6 % 28;
        VAR_9 = (VAR_5 - 12) / 30 * 28;
        break;
    case 147:
        VAR_11 = 1;
        *VAR_6 = FUNC_3(VAR_4);
        VAR_9 = (VAR_5 - (4 + 8 * VAR_10)) * 2 / VAR_10;
        break;
    case 157:
        VAR_9 = (VAR_5 - VAR_10) / VAR_10 * 2;
        break;
    case 156:
    case 155:
    case 154:


        VAR_11 = 1;
        switch (VAR_3->codec->id) {
        case 156:
            VAR_12 = 4 + 9 * VAR_10;
            *VAR_6 = FUNC_3(VAR_4);
            break;
        case 155:
            VAR_12 = 4 + 5 * VAR_10;
            *VAR_6 = FUNC_3(VAR_4);
            break;
        case 154:
            VAR_12 = 4 + 5 * VAR_10;
            *VAR_6 = FUNC_1(VAR_4);
            break;
        }
        *VAR_6 -= *VAR_6 % 28;
        VAR_9 = (VAR_5 - VAR_12) * 2 / VAR_10;
        VAR_9 -= VAR_9 % 28;
        *VAR_7 = 1;
        break;
    case 149:
        if (VAR_3->block_align > 0)
            VAR_5 = FUNC_0(VAR_5, VAR_3->block_align);
        VAR_9 = ((VAR_5 - 16) * 2 / 3 * 4) / VAR_10;
        break;
    case 148:
        if (VAR_3->block_align > 0)
            VAR_5 = FUNC_0(VAR_5, VAR_3->block_align);
        if (VAR_5 < 4 * VAR_10)
            return VAR_0;
        VAR_9 = 1 + (VAR_5 - 4 * VAR_10) * 2 / VAR_10;
        break;
    case 142:
        if (VAR_3->block_align > 0)
            VAR_5 = FUNC_0(VAR_5, VAR_3->block_align);
        VAR_9 = (VAR_5 - 4 * VAR_10) * 2 / VAR_10;
        break;
    case 140:
    {
        int VAR_13 = VAR_2[VAR_3->bits_per_coded_sample - 2];
        int VAR_14 = VAR_1[VAR_3->bits_per_coded_sample - 2];
        if (VAR_3->block_align > 0)
            VAR_5 = FUNC_0(VAR_5, VAR_3->block_align);
        if (VAR_5 < 4 * VAR_10)
            return VAR_0;
        VAR_9 = 1 + (VAR_5 - 4 * VAR_10) / (VAR_13 * VAR_10) * VAR_14;
        break;
    }
    case 138:
        if (VAR_3->block_align > 0)
            VAR_5 = FUNC_0(VAR_5, VAR_3->block_align);
        VAR_9 = (VAR_5 - 6 * VAR_10) * 2 / VAR_10;
        break;
    case 137:
        if (VAR_3->block_align > 0)
            VAR_5 = FUNC_0(VAR_5, VAR_3->block_align);
        VAR_9 = (VAR_5 - 16 * (VAR_10 / 2)) * 2 / VAR_10;
        break;
    case 135:
    case 134:
    case 133:
    {
        int VAR_15;
        switch (VAR_3->codec->id) {
        case 135: VAR_15 = 4; break;
        case 134: VAR_15 = 3; break;
        case 133: VAR_15 = 2; break;
        }
        if (!VAR_8->status[0].step_index) {
            if (VAR_5 < VAR_10)
                return VAR_0;
            VAR_9++;
            VAR_5 -= VAR_10;
        }
        VAR_9 += VAR_5 * VAR_15 / VAR_10;
        break;
    }
    case 132:
    {
        int VAR_16 = VAR_5 * 8 - 2;
        int VAR_17 = (FUNC_2(VAR_4) >> 6) + 2;
        int VAR_18 = 22 * VAR_10;
        int VAR_19 = VAR_18 + VAR_17 * VAR_10 * 4095;
        int VAR_20 = VAR_16 / VAR_19;
        int VAR_21 = VAR_16 - VAR_20 * VAR_19;
        VAR_9 = VAR_20 * 4096;
        if (VAR_21 >= VAR_18)
            VAR_9 += 1 + (VAR_21 - VAR_18) / (VAR_17 * VAR_10);
        break;
    }
    case 131:
    case 130:
        if (VAR_3->extradata) {
            VAR_9 = VAR_5 * 14 / (8 * VAR_10);
            break;
        }
        VAR_11 = 1;
        FUNC_4(VAR_4, 4);
        *VAR_6 = (VAR_3->codec->id == 130) ?
                          FUNC_3(VAR_4) :
                          FUNC_1(VAR_4);
        VAR_5 -= 8 + 36 * VAR_10;
        VAR_5 /= VAR_10;
        VAR_9 = VAR_5 / 8 * 14;
        if (VAR_5 % 8 > 1)
            VAR_9 += (VAR_5 % 8 - 1) * 2;
        *VAR_7 = 1;
        break;
    case 163:
        VAR_9 = VAR_5 / (9 * VAR_10) * 16;
        break;
    case 129:
        VAR_9 = (VAR_5 / 128) * 224 / VAR_10;
        break;
    case 159:
    case 136:
        VAR_9 = VAR_5 / (16 * VAR_10) * 28;
        break;
    }


    if (VAR_11 && (*VAR_6 <= 0 || *VAR_6 > VAR_9))
        return VAR_0;

    return VAR_9;
}
