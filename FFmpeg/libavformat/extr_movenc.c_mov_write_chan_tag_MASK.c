
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_5__ {scalar_t__ multichannel_as_mono; TYPE_1__* par; } ;
struct TYPE_4__ {int channel_layout; int codec_id; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_1, AVIOContext *VAR_2, MOVTrack *VAR_3)
{
    uint32_t VAR_4, VAR_5;
    int64_t VAR_6 = FUNC_1(VAR_2);

    VAR_4 = FUNC_5(VAR_3->par->codec_id,
                                               VAR_3->par->channel_layout,
                                               &VAR_5);
    if (!VAR_4) {
        FUNC_0(VAR_1, VAR_0, "not writing 'chan' tag due to "
               "lack of channel information\n");
        return 0;
    }

    if (VAR_3->multichannel_as_mono)
        return 0;

    FUNC_4(VAR_2, 0);
    FUNC_6(VAR_2, "chan");
    FUNC_2(VAR_2, 0);
    FUNC_3(VAR_2, 0);
    FUNC_4(VAR_2, VAR_4);
    FUNC_4(VAR_2, VAR_5);
    FUNC_4(VAR_2, 0);

    return FUNC_7(VAR_2, VAR_6);
}
