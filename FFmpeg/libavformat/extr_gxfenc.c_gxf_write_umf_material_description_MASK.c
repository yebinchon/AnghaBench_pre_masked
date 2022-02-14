
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_10__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_8__ {int hh; int mm; int ss; int ff; int drop; int color; } ;
struct TYPE_7__ {int den; } ;
struct TYPE_9__ {int nb_fields; int flags; int audio_tracks; int mpeg_tracks; TYPE_2__ tc; TYPE_1__ time_base; } ;
typedef TYPE_3__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0)
{
    GXFContext *VAR_1 = VAR_0->priv_data;
    AVIOContext *VAR_2 = VAR_0->pb;
    int VAR_3 = VAR_1->time_base.den == 60000 ? 60 : 50;
    int64_t VAR_4 = 0;
    uint64_t VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7;

    FUNC_4(VAR_0, &VAR_4, 1);

    VAR_6 = FUNC_0(VAR_1->tc.color, VAR_1->tc.drop,
                               VAR_1->tc.hh, VAR_1->tc.mm,
                               VAR_1->tc.ss, VAR_1->tc.ff);

    VAR_5 = VAR_1->nb_fields +
                VAR_1->tc.hh * (VAR_3 * 3600) +
                VAR_1->tc.mm * (VAR_3 * 60) +
                VAR_1->tc.ss * VAR_3 +
                VAR_1->tc.ff;

    VAR_7 = FUNC_0(VAR_1->tc.color, VAR_1->tc.drop,
                                VAR_5 / (VAR_3 * 3600) % 24,
                                VAR_5 / (VAR_3 * 60) % 60,
                                VAR_5 / VAR_3 % 60,
                                VAR_5 % VAR_3);

    FUNC_2(VAR_2, VAR_1->flags);
    FUNC_2(VAR_2, VAR_1->nb_fields);
    FUNC_2(VAR_2, VAR_1->nb_fields);
    FUNC_2(VAR_2, 0);
    FUNC_2(VAR_2, VAR_1->nb_fields);
    FUNC_2(VAR_2, VAR_6);
    FUNC_2(VAR_2, VAR_7);
    FUNC_3(VAR_2, VAR_4);
    FUNC_3(VAR_2, VAR_4);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_2, VAR_1->audio_tracks);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_2, VAR_1->mpeg_tracks);
    return 48;
}
