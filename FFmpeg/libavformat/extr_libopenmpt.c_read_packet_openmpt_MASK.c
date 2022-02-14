
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int size; scalar_t__ data; } ;
struct TYPE_8__ {int channels; int sample_rate; int module; } ;
typedef TYPE_1__ OpenMPTContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ,int,float*) ;
 int FUNC_4 (int ,int ,int,float*) ;
 int FUNC_5 (int ,int ,int,float*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    OpenMPTContext *VAR_6 = VAR_4->priv_data;
    int VAR_7 = VAR_0 / (VAR_6->channels ? VAR_6->channels*4 : 4);
    int VAR_8;

    if ((VAR_8 = FUNC_2(VAR_5, VAR_0)) < 0)
        return VAR_8;

    switch (VAR_6->channels) {
    case 1:
        VAR_8 = FUNC_3(VAR_6->module, VAR_6->sample_rate,
                                             VAR_7, (float *)VAR_5->data);
        break;
    case 2:
        VAR_8 = FUNC_5(VAR_6->module, VAR_6->sample_rate,
                                                           VAR_7, (float *)VAR_5->data);
        break;
    case 4:
        VAR_8 = FUNC_4(VAR_6->module, VAR_6->sample_rate,
                                                         VAR_7, (float *)VAR_5->data);
        break;
    default:
        FUNC_1(VAR_4, VAR_2, "Unsupported number of channels: %d", VAR_6->channels);
        return FUNC_0(VAR_3);
    }

    if (VAR_8 < 1) {
        VAR_5->size = 0;
        return VAR_1;
    }

    VAR_5->size = VAR_8 * (VAR_6->channels * 4);

    return 0;
}
