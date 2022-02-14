
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; int sample_rate; int bits_per_coded_sample; int block_align; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int,int ,int,int) ;
 int FUNC_6 (char*,char*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5)
{
    char VAR_6[32];
    AVStream *VAR_7;
    int VAR_8, VAR_9, VAR_10;

    FUNC_2(VAR_5->pb, 5);
    FUNC_4(VAR_5->pb, VAR_6, sizeof(VAR_6));
    if (FUNC_6(VAR_6, "%d %d %d",
               &VAR_9,
               &VAR_10,
               &VAR_8) != 3)
        return VAR_0;

    if (VAR_9 <= 0 || VAR_9 > VAR_3 ||
        VAR_8 <= 0 || VAR_8 > VAR_4 / VAR_3 || VAR_10 <= 0)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_5, ((void*)0));
    if (!VAR_7)
        return FUNC_0(VAR_2);

    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->channels = VAR_9;
    VAR_7->codecpar->sample_rate = VAR_10;
    VAR_7->codecpar->codec_id = FUNC_5(VAR_8, 0, 1, 0xFFFF);
    VAR_7->codecpar->bits_per_coded_sample = VAR_8;
    VAR_7->codecpar->block_align = VAR_8 * VAR_7->codecpar->channels / 8;

    FUNC_3(VAR_7, 64, 1, VAR_7->codecpar->sample_rate);

    return 0;
}
