
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int metadata; } ;
struct TYPE_9__ {scalar_t__ mode; TYPE_1__* par; TYPE_3__* st; } ;
struct TYPE_8__ {int width; int height; scalar_t__ codec_id; scalar_t__ field_order; scalar_t__ format; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVDictionaryEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(char * VAR_4, int VAR_5, MOVTrack *VAR_6)
{
    AVDictionaryEntry *VAR_7;
    int VAR_8 = (VAR_6->par->width == 1280 && VAR_6->par->height == 720)
                  || (VAR_6->par->width == 1440 && VAR_6->par->height == 1080)
                  || (VAR_6->par->width == 1920 && VAR_6->par->height == 1080);

    if (VAR_6->mode == VAR_3 &&
        (VAR_7 = FUNC_0(VAR_6->st->metadata, "encoder", ((void*)0), 0))) {
        FUNC_2(VAR_4, VAR_7->value, 32);
    } else if (VAR_6->par->codec_id == VAR_0 && VAR_8) {
        int VAR_9 = VAR_6->par->field_order > VAR_1;
        AVStream *VAR_10 = VAR_6->st;
        int VAR_11 = FUNC_3(((void*)0), VAR_10);
        FUNC_1(VAR_4, VAR_5, "XDCAM");
        if (VAR_6->par->format == VAR_2) {
            FUNC_1(VAR_4, VAR_5, " HD422");
        } else if(VAR_6->par->width == 1440) {
            FUNC_1(VAR_4, VAR_5, " HD");
        } else
            FUNC_1(VAR_4, VAR_5, " EX");

        FUNC_1(VAR_4, VAR_5, " %d%c", VAR_6->par->height, VAR_9 ? 'i' : 'p');

        FUNC_1(VAR_4, VAR_5, "%d", VAR_11 * (VAR_9 + 1));
    }
}
