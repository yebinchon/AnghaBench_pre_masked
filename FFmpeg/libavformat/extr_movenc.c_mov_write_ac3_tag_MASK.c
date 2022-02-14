
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buf ;
struct TYPE_3__ {int vos_len; scalar_t__ vos_data; } ;
typedef int PutBitContext ;
typedef TYPE_1__ MOVTrack ;
typedef int GetBitContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_2, AVIOContext *VAR_3, MOVTrack *VAR_4)
{
    GetBitContext VAR_5;
    PutBitContext VAR_6;
    uint8_t VAR_7[3];
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    if (VAR_4->vos_len < 7) {
        FUNC_1(VAR_2, VAR_0,
               "Cannot write moov atom before AC3 packets."
               " Set the delay_moov flag to fix this.\n");
        return FUNC_0(VAR_1);
    }

    FUNC_2(VAR_3, 11);
    FUNC_4(VAR_3, "dac3");

    FUNC_8(&VAR_5, VAR_4->vos_data + 4, (VAR_4->vos_len - 4) * 8);
    VAR_8 = FUNC_6(&VAR_5, 2);
    VAR_13 = FUNC_6(&VAR_5, 6);
    VAR_9 = FUNC_6(&VAR_5, 5);
    VAR_10 = FUNC_6(&VAR_5, 3);
    VAR_11 = FUNC_6(&VAR_5, 3);
    if (VAR_11 == 2) {
        FUNC_11(&VAR_5, 2);
    } else {
        if ((VAR_11 & 1) && VAR_11 != 1)
            FUNC_11(&VAR_5, 2);
        if (VAR_11 & 4)
            FUNC_11(&VAR_5, 2);
    }
    VAR_12 = FUNC_7(&VAR_5);

    FUNC_9(&VAR_6, VAR_7, sizeof(VAR_7));
    FUNC_10(&VAR_6, 2, VAR_8);
    FUNC_10(&VAR_6, 5, VAR_9);
    FUNC_10(&VAR_6, 3, VAR_10);
    FUNC_10(&VAR_6, 3, VAR_11);
    FUNC_10(&VAR_6, 1, VAR_12);
    FUNC_10(&VAR_6, 5, VAR_13 >> 1);
    FUNC_10(&VAR_6, 5, 0);

    FUNC_5(&VAR_6);
    FUNC_3(VAR_3, VAR_7, sizeof(VAR_7));

    return 11;
}
