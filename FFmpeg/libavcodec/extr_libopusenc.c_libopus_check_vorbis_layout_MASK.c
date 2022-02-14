
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
struct TYPE_4__ {int channels; scalar_t__ channel_layout; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,char*,...) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_4, int VAR_5) {
    FUNC_2(VAR_4->channels < FUNC_1(VAR_3));

    if (!VAR_4->channel_layout) {
        FUNC_4(VAR_4, VAR_1,
               "No channel layout specified. Opus encoder will use Vorbis "
               "channel layout for %d channels.\n", VAR_4->channels);
    } else if (VAR_4->channel_layout != VAR_3[VAR_4->channels - 1]) {
        char VAR_6[32];
        FUNC_3(VAR_6, sizeof(VAR_6), VAR_4->channels,
                                     VAR_4->channel_layout);
        FUNC_4(VAR_4, VAR_0,
               "Invalid channel layout %s for specified mapping family %d.\n",
               VAR_6, VAR_5);

        return FUNC_0(VAR_2);
    }

    return 0;
}
