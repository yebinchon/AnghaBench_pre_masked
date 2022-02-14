
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int size; int pts; int data; } ;
struct TYPE_8__ {int softpos; int hwpos; int bps; int channels; int sample_rate; int hdl; int buffer_size; } ;
typedef TYPE_1__ SndioData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    SndioData *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4, VAR_5;
    int VAR_6;

    if ((VAR_6 = FUNC_1(VAR_2, VAR_3->buffer_size)) < 0)
        return VAR_6;

    VAR_6 = FUNC_4(VAR_3->hdl, VAR_2->data, VAR_2->size);
    if (VAR_6 == 0 || FUNC_3(VAR_3->hdl)) {
        FUNC_2(VAR_2);
        return VAR_0;
    }

    VAR_2->size = VAR_6;
    VAR_3->softpos += VAR_6;


    VAR_5 = FUNC_0();

    VAR_4 = VAR_6 + VAR_3->hwpos - VAR_3->softpos;


    VAR_2->pts = VAR_5 - ((VAR_4 * 1000000) /
        (VAR_3->bps * VAR_3->channels * VAR_3->sample_rate));

    return 0;
}
