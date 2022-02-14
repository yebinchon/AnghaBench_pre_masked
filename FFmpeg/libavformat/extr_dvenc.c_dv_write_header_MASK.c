
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int value; } ;
struct TYPE_19__ {int nb_streams; TYPE_2__** streams; int metadata; TYPE_3__* priv_data; } ;
struct TYPE_18__ {int den; int num; } ;
struct TYPE_17__ {int tc; TYPE_1__* sys; } ;
struct TYPE_16__ {int metadata; } ;
struct TYPE_15__ {int ltc_divisor; } ;
typedef TYPE_3__ DVMuxContext ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (int *,TYPE_4__,int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__,int ,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1)
{
    AVRational VAR_2;
    DVMuxContext *VAR_3 = VAR_1->priv_data;
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_1->metadata, "timecode", ((void*)0), 0);

    if (!FUNC_4(VAR_1)) {
        FUNC_1(VAR_1, VAR_0, "Can't initialize DV format!\n"
                    "Make sure that you supply exactly two streams:\n"
                    "     video: 25fps or 29.97fps, audio: 2ch/48|44|32kHz/PCM\n"
                    "     (50Mbps allows an optional second audio stream)\n");
        return -1;
    }
    VAR_2.num = VAR_3->sys->ltc_divisor;
    VAR_2.den = 1;
    if (!VAR_4) {
        int VAR_5;
        for (VAR_5 = 0; VAR_5 < VAR_1->nb_streams; VAR_5++) {
            VAR_4 = FUNC_0(VAR_1->streams[VAR_5]->metadata, "timecode", ((void*)0), 0);
            if (VAR_4)
                break;
        }
    }
    if (VAR_4 && FUNC_3(&VAR_3->tc, VAR_2, VAR_4->value, VAR_1) >= 0)
        return 0;
    return FUNC_2(&VAR_3->tc, VAR_2, 0, 0, VAR_1);
}
