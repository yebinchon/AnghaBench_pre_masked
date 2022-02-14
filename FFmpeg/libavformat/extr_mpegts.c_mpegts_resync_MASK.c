
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_7__ {TYPE_1__* priv_data; int * pb; } ;
struct TYPE_6__ {int resync_size; } ;
typedef TYPE_1__ MpegTSContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, int VAR_5, const uint8_t *VAR_6)
{
    MpegTSContext *VAR_7 = VAR_4->priv_data;
    AVIOContext *VAR_8 = VAR_4->pb;
    int VAR_9, VAR_10;
    uint64_t VAR_11 = FUNC_5(VAR_8);

    FUNC_4(VAR_8, -FUNC_0(VAR_5, VAR_11), VAR_3);


    if (VAR_6[0] == 0x80 && VAR_6[12] == 0x47) {
        FUNC_4(VAR_8, 12, VAR_3);
        return 0;
    }

    for (VAR_10 = 0; VAR_10 < VAR_7->resync_size; VAR_10++) {
        VAR_9 = FUNC_3(VAR_8);
        if (FUNC_2(VAR_8))
            return VAR_0;
        if (VAR_9 == 0x47) {
            FUNC_4(VAR_8, -1, VAR_3);
            FUNC_6(VAR_4->priv_data);
            return 0;
        }
    }
    FUNC_1(VAR_4, VAR_2,
           "max resync size reached, could not find sync byte\n");

    return VAR_1;
}
