
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_6__ {int packet_seq; int packet_entry; int slices; } ;
struct TYPE_9__ {int vos_len; scalar_t__ start_dts; TYPE_3__* st; int const* vos_data; TYPE_1__ vc1_info; } ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_8__ {TYPE_2__ avg_frame_rate; } ;
typedef int PutBitContext ;
typedef TYPE_4__ MOVTrack ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int ,char*) ;
 int const* FUNC_4 (int) ;
 int const* FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int const*,int,int const*) ;

__attribute__((used)) static int FUNC_16(MOVTrack *VAR_7, uint8_t *VAR_8)
{
    uint8_t *VAR_9;
    const uint8_t *VAR_10, *VAR_11, *VAR_12 = VAR_7->vos_data + VAR_7->vos_len;
    int VAR_13, VAR_14 = 0;
    int VAR_15 = 0, VAR_16 = 0;
    int VAR_17 = VAR_7->vc1_info.packet_seq;
    int VAR_18 = VAR_7->vc1_info.packet_entry;
    int VAR_19 = VAR_7->vc1_info.slices;
    PutBitContext VAR_20;

    if (VAR_7->start_dts == VAR_2) {


        VAR_17 = VAR_18 = 1;
        FUNC_3(((void*)0), VAR_1,
               "moov atom written before any packets, unable to write correct "
               "dvc1 atom. Set the delay_moov flag to fix this.\n");
    }

    VAR_9 = FUNC_4(VAR_7->vos_len + VAR_0);
    if (!VAR_9)
        return FUNC_0(VAR_3);
    VAR_10 = FUNC_5(VAR_7->vos_data, VAR_12);
    for (VAR_11 = VAR_10; VAR_11 < VAR_12; VAR_10 = VAR_11) {
        GetBitContext VAR_21;
        int VAR_22;
        VAR_11 = FUNC_5(VAR_10 + 4, VAR_12);
        VAR_22 = VAR_11 - VAR_10 - 4;
        if (VAR_22 <= 0)
            continue;
        VAR_13 = FUNC_15(VAR_10 + 4, VAR_22, VAR_9);
        FUNC_9(&VAR_21, VAR_9, 8 * VAR_13);
        if (FUNC_1(VAR_10) == VAR_6) {
            int VAR_23 = FUNC_7(&VAR_21, 2);
            if (VAR_23 != VAR_5) {
                FUNC_2(VAR_9);
                return FUNC_0(VAR_4);
            }
            VAR_14 = 1;
            VAR_15 = FUNC_7(&VAR_21, 3);


            FUNC_14(&VAR_21, 2 + 3 + 5 + 1 + 2*12);
            FUNC_13(&VAR_21, 1);
            VAR_16 = FUNC_8(&VAR_21);
            FUNC_13(&VAR_21, 4);
        }
    }
    if (!VAR_14) {
        FUNC_2(VAR_9);
        return FUNC_0(VAR_4);
    }

    FUNC_10(&VAR_20, VAR_8, 7);

    FUNC_11(&VAR_20, 4, 12);
    FUNC_11(&VAR_20, 3, VAR_15);
    FUNC_11(&VAR_20, 1, 0);

    FUNC_11(&VAR_20, 3, VAR_15);
    FUNC_11(&VAR_20, 1, 0);
    FUNC_11(&VAR_20, 6, 0);
    FUNC_11(&VAR_20, 1, !VAR_16);
    FUNC_11(&VAR_20, 1, !VAR_17);
    FUNC_11(&VAR_20, 1, !VAR_18);
    FUNC_11(&VAR_20, 1, !VAR_19);
    FUNC_11(&VAR_20, 1, 0);
    FUNC_11(&VAR_20, 1, 0);


    if (VAR_7->st->avg_frame_rate.num > 0 && VAR_7->st->avg_frame_rate.den > 0)
        FUNC_12(&VAR_20, VAR_7->st->avg_frame_rate.num / VAR_7->st->avg_frame_rate.den);
    else
        FUNC_12(&VAR_20, 0xffffffff);

    FUNC_6(&VAR_20);

    FUNC_2(VAR_9);

    return 0;
}
