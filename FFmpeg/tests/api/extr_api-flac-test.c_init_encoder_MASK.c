
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int sample_rate; int channel_layout; int sample_fmt; } ;
typedef TYPE_1__ AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_5(AVCodec *VAR_5, AVCodecContext **VAR_6,
                        int64_t VAR_7, int VAR_8)
{
    AVCodecContext *VAR_9;
    int VAR_10;
    char VAR_11[VAR_4];

    FUNC_1(VAR_11, VAR_4, 0, VAR_7);
    FUNC_2(((void*)0), VAR_1, "channel layout: %s, sample rate: %i\n", VAR_11, VAR_8);

    VAR_9 = FUNC_3(VAR_5);
    if (!VAR_9) {
        FUNC_2(((void*)0), VAR_0, "Can't allocate encoder context\n");
        return FUNC_0(VAR_3);
    }

    VAR_9->sample_fmt = VAR_2;
    VAR_9->sample_rate = VAR_8;
    VAR_9->channel_layout = VAR_7;

    VAR_10 = FUNC_4(VAR_9, VAR_5, ((void*)0));
    if (VAR_10 < 0) {
        FUNC_2(VAR_9, VAR_0, "Can't open encoder\n");
        return VAR_10;
    }

    *VAR_6 = VAR_9;
    return 0;
}
