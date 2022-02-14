
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int channels; int bits_per_raw_sample; int sample_rate; scalar_t__ extradata; } ;
struct TYPE_8__ {int pb; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int seek_table; } ;
struct TYPE_6__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ TTAMuxContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2)
{
    TTAMuxContext *VAR_3 = VAR_2->priv_data;
    AVCodecParameters *VAR_4 = VAR_2->streams[0]->codecpar;
    int VAR_5;

    if ((VAR_5 = FUNC_1(&VAR_3->seek_table)) < 0)
        return VAR_5;



    FUNC_5(VAR_2->pb, VAR_1, VAR_0);
    FUNC_5(VAR_3->seek_table, VAR_1, VAR_0);
    FUNC_4(VAR_2->pb, "TTA1", 4);
    FUNC_2(VAR_2->pb, VAR_4->extradata ? FUNC_0(VAR_4->extradata + 4) : 1);
    FUNC_2(VAR_2->pb, VAR_4->channels);
    FUNC_2(VAR_2->pb, VAR_4->bits_per_raw_sample);
    FUNC_3(VAR_2->pb, VAR_4->sample_rate);

    return 0;
}
