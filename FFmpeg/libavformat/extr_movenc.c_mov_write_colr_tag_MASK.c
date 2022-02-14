
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int height; scalar_t__ mode; TYPE_1__* par; } ;
struct TYPE_4__ {int color_primaries; int color_trc; int color_space; int width; int height; scalar_t__ color_range; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_7, MOVTrack *VAR_8)
{
    int64_t VAR_9 = FUNC_2(VAR_7);




    if (VAR_8->par->color_primaries == VAR_0 &&
        VAR_8->par->color_trc == VAR_3 &&
        VAR_8->par->color_space == VAR_2) {
        if ((VAR_8->par->width >= 1920 && VAR_8->par->height >= 1080)
          || (VAR_8->par->width == 1280 && VAR_8->par->height == 720)) {
            FUNC_1(((void*)0), VAR_4, "color primaries unspecified, assuming bt709\n");
            VAR_8->par->color_primaries = 143;
        } else if (VAR_8->par->width == 720 && VAR_8->height == 576) {
            FUNC_1(((void*)0), VAR_4, "color primaries unspecified, assuming bt470bg\n");
            VAR_8->par->color_primaries = 144;
        } else if (VAR_8->par->width == 720 &&
                   (VAR_8->height == 486 || VAR_8->height == 480)) {
            FUNC_1(((void*)0), VAR_4, "color primaries unspecified, assuming smpte170\n");
            VAR_8->par->color_primaries = 142;
        } else {
            FUNC_1(((void*)0), VAR_4, "color primaries unspecified, unable to assume anything\n");
        }
        switch (VAR_8->par->color_primaries) {
        case 143:
            VAR_8->par->color_trc = 132;
            VAR_8->par->color_space = 136;
            break;
        case 142:
        case 144:
            VAR_8->par->color_trc = 132;
            VAR_8->par->color_space = 135;
            break;
        }
    }


    FUNC_0(VAR_8->mode == VAR_5 || VAR_8->mode == VAR_6);

    FUNC_5(VAR_7, 0);
    FUNC_6(VAR_7, "colr");
    if (VAR_8->mode == VAR_6)
        FUNC_6(VAR_7, "nclx");
    else
        FUNC_6(VAR_7, "nclc");
    switch (VAR_8->par->color_primaries) {
    case 143: FUNC_4(VAR_7, 1); break;
    case 144: FUNC_4(VAR_7, 5); break;
    case 142:
    case 141: FUNC_4(VAR_7, 6); break;
    case 145: FUNC_4(VAR_7, 9); break;
    case 140: FUNC_4(VAR_7, 11); break;
    case 139: FUNC_4(VAR_7, 12); break;
    default: FUNC_4(VAR_7, 2);
    }
    switch (VAR_8->par->color_trc) {
    case 132: FUNC_4(VAR_7, 1); break;
    case 131: FUNC_4(VAR_7, 1); break;
    case 130: FUNC_4(VAR_7, 7); break;
    case 128: FUNC_4(VAR_7, 16); break;
    case 129: FUNC_4(VAR_7, 17); break;
    case 133: FUNC_4(VAR_7, 18); break;
    default: FUNC_4(VAR_7, 2);
    }
    switch (VAR_8->par->color_space) {
    case 136: FUNC_4(VAR_7, 1); break;
    case 137:
    case 135: FUNC_4(VAR_7, 6); break;
    case 134: FUNC_4(VAR_7, 7); break;
    case 138: FUNC_4(VAR_7, 9); break;
    default: FUNC_4(VAR_7, 2);
    }

    if (VAR_8->mode == VAR_6) {
        int VAR_10 = VAR_8->par->color_range == VAR_1;
        FUNC_3(VAR_7, VAR_10 << 7);
    }

    return FUNC_7(VAR_7, VAR_9);
}
