
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int duration; TYPE_1__* codecpar; } ;
struct TYPE_10__ {int bit_depth; int size; int read_block; } ;
struct TYPE_9__ {int channels; int sample_rate; int codec_type; int codec_id; } ;
typedef TYPE_2__ SDSContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_3__*,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_7)
{
    SDSContext *VAR_8 = VAR_7->priv_data;
    unsigned VAR_9;
    AVIOContext *VAR_10 = VAR_7->pb;
    AVStream *VAR_11;

    VAR_11 = FUNC_2(VAR_7, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_3);

    FUNC_6(VAR_10, 4);
    FUNC_6(VAR_10, 2);

    VAR_8->bit_depth = FUNC_3(VAR_10);
    if (VAR_8->bit_depth < 8 || VAR_8->bit_depth > 28)
        return VAR_0;

    if (VAR_8->bit_depth < 14) {
        VAR_8->read_block = VAR_4;
        VAR_8->size = 60 * 4;
    } else if (VAR_8->bit_depth < 21) {
        VAR_8->read_block = VAR_5;
        VAR_8->size = 40 * 4;
    } else {
        VAR_8->read_block = VAR_6;
        VAR_8->size = 30 * 4;
    }
    VAR_11->codecpar->codec_id = VAR_2;

    VAR_9 = FUNC_4(VAR_10);
    VAR_9 = FUNC_1(VAR_9);
    FUNC_6(VAR_10, 11);

    VAR_11->codecpar->codec_type = VAR_1;
    VAR_11->codecpar->channels = 1;
    VAR_11->codecpar->sample_rate = VAR_9 ? 1000000000 / VAR_9 : 16000;
    VAR_11->duration = (FUNC_5(VAR_10) - 21) / (127) * VAR_8->size / 4;

    FUNC_7(VAR_11, 64, 1, VAR_11->codecpar->sample_rate);

    return 0;
}
