
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {TYPE_1__* codecpar; } ;
struct TYPE_12__ {int nports; int sample_rate; } ;
struct TYPE_11__ {int channels; int sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ JackData ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4)
{
    JackData *VAR_5 = VAR_4->priv_data;
    AVStream *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_3(VAR_4)))
        return VAR_7;

    VAR_6 = FUNC_1(VAR_4, ((void*)0));
    if (!VAR_6) {
        FUNC_4(VAR_5);
        return FUNC_0(VAR_3);
    }

    VAR_6->codecpar->codec_type = VAR_0;



    VAR_6->codecpar->codec_id = VAR_2;

    VAR_6->codecpar->sample_rate = VAR_5->sample_rate;
    VAR_6->codecpar->channels = VAR_5->nports;

    FUNC_2(VAR_6, 64, 1, 1000000);
    return 0;
}
