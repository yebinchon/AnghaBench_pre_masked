
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; int duration; } ;
struct TYPE_8__ {int channels; int sample_rate; int block_align; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5)
{
    int VAR_6;
    AVStream *VAR_7;

    VAR_7 = FUNC_1(VAR_5, ((void*)0));
    if (!VAR_7)
        return FUNC_0(VAR_3);

    FUNC_5(VAR_5->pb, 0x5c);
    VAR_7->duration = FUNC_3(VAR_5->pb);
    FUNC_5(VAR_5->pb, 1);
    VAR_6 = FUNC_2(VAR_5->pb);
    if (!VAR_6)
        return VAR_0;

    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->codec_id = VAR_2;
    VAR_7->codecpar->channels = 2 * VAR_6;
    VAR_7->codecpar->sample_rate = 48000;
    VAR_7->codecpar->block_align = 0x110 * VAR_7->codecpar->channels / 2;
    FUNC_6(VAR_7, 64, 1, VAR_7->codecpar->sample_rate);

    FUNC_4(VAR_5->pb, 0x800, VAR_4);

    return 0;
}
