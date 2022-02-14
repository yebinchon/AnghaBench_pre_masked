
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_14__ {scalar_t__ sample_rate; int block_align; int width; int height; int codec_id; int codec_type; } ;
struct TYPE_13__ {int duration; scalar_t__ start_time; TYPE_1__* priv_data; int * pb; } ;
struct TYPE_12__ {TYPE_5__* codecpar; } ;
struct TYPE_11__ {scalar_t__ frames; int has_sound; scalar_t__ vidpos; int bpc; int readvid; scalar_t__ wavpos; scalar_t__ bytes_left; } ;
typedef TYPE_1__ DXAContext ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (int*,int*,int,int,unsigned long) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int,int,int) ;
 int FUNC_14 (TYPE_3__*,int *,TYPE_5__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_8)
{
    AVIOContext *VAR_9 = VAR_8->pb;
    DXAContext *VAR_10 = VAR_8->priv_data;
    AVStream *VAR_11, *VAR_12;
    uint32_t VAR_13;
    int32_t VAR_14;
    int VAR_15, VAR_16;
    int VAR_17, VAR_18;
    int VAR_19;
    int VAR_20;

    VAR_13 = FUNC_9(VAR_9);
    if (VAR_13 != FUNC_1('D', 'E', 'X', 'A'))
        return VAR_0;
    VAR_19 = FUNC_6(VAR_9);
    VAR_10->frames = FUNC_7(VAR_9);
    if(!VAR_10->frames){
        FUNC_2(VAR_8, VAR_4, "File contains no frames ???\n");
        return VAR_0;
    }

    VAR_14 = FUNC_8(VAR_9);
    if(VAR_14 > 0){
        VAR_18 = 1000;
        VAR_17 = VAR_14;
    }else if (VAR_14 < 0){
        VAR_18 = 100000;
        VAR_17 = -VAR_14;
    }else{
        VAR_18 = 10;
        VAR_17 = 1;
    }
    VAR_15 = FUNC_7(VAR_9);
    VAR_16 = FUNC_7(VAR_9);
    VAR_10->has_sound = 0;

    VAR_11 = FUNC_4(VAR_8, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_6);


    if(FUNC_9(VAR_9) == FUNC_1('W', 'A', 'V', 'E')){
        uint32_t VAR_21, VAR_22;
        VAR_10->has_sound = 1;
        VAR_21 = FUNC_8(VAR_9);
        VAR_10->vidpos = FUNC_12(VAR_9) + VAR_21;
        FUNC_11(VAR_9, 16);
        VAR_22 = FUNC_9(VAR_9);

        VAR_12 = FUNC_4(VAR_8, ((void*)0));
        if (!VAR_12)
            return FUNC_0(VAR_6);
        VAR_20 = FUNC_14(VAR_8, VAR_9, VAR_12->codecpar, VAR_22, 0);
        if (VAR_20 < 0)
            return VAR_20;
        if (VAR_12->codecpar->sample_rate > 0)
            FUNC_13(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);

        while(FUNC_12(VAR_9) < VAR_10->vidpos && !FUNC_5(VAR_9)){
            VAR_13 = FUNC_9(VAR_9);
            VAR_22 = FUNC_9(VAR_9);
            if(VAR_13 == FUNC_1('d', 'a', 't', 'a')) break;
            FUNC_11(VAR_9, VAR_22);
        }
        VAR_10->bpc = (VAR_22 + VAR_10->frames - 1) / VAR_10->frames;
        if(VAR_12->codecpar->block_align)
            VAR_10->bpc = ((VAR_10->bpc + VAR_12->codecpar->block_align - 1) / VAR_12->codecpar->block_align) * VAR_12->codecpar->block_align;
        VAR_10->bytes_left = VAR_22;
        VAR_10->wavpos = FUNC_12(VAR_9);
        FUNC_10(VAR_9, VAR_10->vidpos, VAR_7);
    }


    VAR_11->codecpar->codec_type = VAR_1;
    VAR_11->codecpar->codec_id = VAR_2;
    VAR_11->codecpar->width = VAR_15;
    VAR_11->codecpar->height = VAR_16;
    FUNC_3(&VAR_18, &VAR_17, VAR_18, VAR_17, (1UL<<31)-1);
    FUNC_13(VAR_11, 33, VAR_17, VAR_18);




    if(VAR_19 & 0xC0){
        VAR_11->codecpar->height >>= 1;
    }
    VAR_10->readvid = !VAR_10->has_sound;
    VAR_10->vidpos = FUNC_12(VAR_9);
    VAR_8->start_time = 0;
    VAR_8->duration = (int64_t)VAR_10->frames * VAR_5 * VAR_17 / VAR_18;
    FUNC_2(VAR_8, VAR_3, "%d frame(s)\n",VAR_10->frames);

    return 0;
}
