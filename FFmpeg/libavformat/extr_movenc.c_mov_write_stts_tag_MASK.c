
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_11__ {int count; int duration; } ;
struct TYPE_10__ {int sample_count; int entry; int audio_vbr; TYPE_1__* par; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVStts ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (int,int) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_2, MOVTrack *VAR_3)
{
    MOVStts *VAR_4 = ((void*)0);
    uint32_t VAR_5 = -1;
    uint32_t VAR_6;
    int VAR_7;

    if (VAR_3->par->codec_type == VAR_0 && !VAR_3->audio_vbr) {
        VAR_4 = FUNC_2(sizeof(*VAR_4));
        if (!VAR_4)
            return FUNC_0(VAR_1);
        VAR_4[0].count = VAR_3->sample_count;
        VAR_4[0].duration = 1;
        VAR_5 = 1;
    } else {
        if (VAR_3->entry) {
            VAR_4 = FUNC_3(VAR_3->entry, sizeof(*VAR_4));
            if (!VAR_4)
                return FUNC_0(VAR_1);
        }
        for (VAR_7 = 0; VAR_7 < VAR_3->entry; VAR_7++) {
            int VAR_8 = FUNC_6(VAR_3, VAR_7);
            if (VAR_7 && VAR_8 == VAR_4[VAR_5].duration) {
                VAR_4[VAR_5].count++;
            } else {
                VAR_5++;
                VAR_4[VAR_5].duration = VAR_8;
                VAR_4[VAR_5].count = 1;
            }
        }
        VAR_5++;
    }
    VAR_6 = 16 + (VAR_5 * 8);
    FUNC_4(VAR_2, VAR_6);
    FUNC_5(VAR_2, "stts");
    FUNC_4(VAR_2, 0);
    FUNC_4(VAR_2, VAR_5);
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        FUNC_4(VAR_2, VAR_4[VAR_7].count);
        FUNC_4(VAR_2, VAR_4[VAR_7].duration);
    }
    FUNC_1(VAR_4);
    return VAR_6;
}
