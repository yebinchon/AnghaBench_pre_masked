
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uuid ;
typedef int uint8_t ;
struct TYPE_8__ {int ism_lookahead; } ;
struct TYPE_7__ {int nb_frag_info; TYPE_1__* frag_info; } ;
struct TYPE_6__ {int duration; int time; int tfrf_offset; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_1, MOVMuxContext *VAR_2,
                              MOVTrack *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_3->nb_frag_info - 1 - VAR_4, VAR_6;
    int VAR_7 = 8 + 16 + 4 + 1 + 16*VAR_5;
    static const uint8_t VAR_8[] = {
        0xd4, 0x80, 0x7e, 0xf2, 0xca, 0x39, 0x46, 0x95,
        0x8e, 0x54, 0x26, 0xcb, 0x9e, 0x46, 0xa7, 0x9f
    };

    if (VAR_4 < 0)
        return 0;

    FUNC_0(VAR_1, VAR_3->frag_info[VAR_4].tfrf_offset, VAR_0);
    FUNC_3(VAR_1, VAR_7);
    FUNC_7(VAR_1, "uuid");
    FUNC_5(VAR_1, VAR_8, sizeof(VAR_8));
    FUNC_1(VAR_1, 1);
    FUNC_2(VAR_1, 0);
    FUNC_1(VAR_1, VAR_5);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        int VAR_9 = VAR_4 + 1 + VAR_6;
        FUNC_4(VAR_1, VAR_3->frag_info[VAR_9].time);
        FUNC_4(VAR_1, VAR_3->frag_info[VAR_9].duration);
    }
    if (VAR_5 < VAR_2->ism_lookahead) {
        int VAR_10 = 16 * (VAR_2->ism_lookahead - VAR_5);
        FUNC_3(VAR_1, VAR_10);
        FUNC_7(VAR_1, "free");
        FUNC_6(VAR_1, 0, VAR_10 - 8);
    }

    return 0;
}
