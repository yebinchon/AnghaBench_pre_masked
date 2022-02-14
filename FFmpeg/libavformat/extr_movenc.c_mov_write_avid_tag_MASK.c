
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* vos_data; int vos_len; scalar_t__ tag; TYPE_2__* par; } ;
struct TYPE_5__ {int num; int den; } ;
struct TYPE_6__ {int width; scalar_t__ color_range; int height; TYPE_1__ sample_aspect_ratio; } ;
typedef TYPE_3__ MOVTrack ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_3, MOVTrack *VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8 = VAR_4->par->width;

    if (VAR_4->vos_data && VAR_4->vos_len > 0x29) {
        if (FUNC_5(VAR_4->vos_data) != 0) {

            VAR_6 = (VAR_4->vos_data[5] & 2);
            VAR_7 = FUNC_0(VAR_4->vos_data + 0x28);
        } else {
            FUNC_2(((void*)0), VAR_2, "Could not locate DNxHD bit stream in vos_data\n");
            return 0;
        }
    } else {
        FUNC_2(((void*)0), VAR_2, "Could not locate DNxHD bit stream, vos_data too small\n");
        return 0;
    }

    FUNC_3(VAR_3, 24);
    FUNC_6(VAR_3, "ACLR");
    FUNC_6(VAR_3, "ACLR");
    FUNC_6(VAR_3, "0001");
    if (VAR_4->par->color_range == VAR_0 ||
        VAR_4->par->color_range == VAR_1) {
        FUNC_3(VAR_3, 1);
    } else {
        FUNC_3(VAR_3, 2);
    }
    FUNC_3(VAR_3, 0);

    if (VAR_4->tag == FUNC_1('A','V','d','h')) {
        FUNC_3(VAR_3, 32);
        FUNC_6(VAR_3, "ADHR");
        FUNC_6(VAR_3, "0001");
        FUNC_3(VAR_3, VAR_7);
        FUNC_3(VAR_3, 0);
        FUNC_3(VAR_3, 1);
        FUNC_3(VAR_3, 0);
        FUNC_3(VAR_3, 0);
        return 0;
    }

    FUNC_3(VAR_3, 24);
    FUNC_6(VAR_3, "APRG");
    FUNC_6(VAR_3, "APRG");
    FUNC_6(VAR_3, "0001");
    FUNC_3(VAR_3, 1);
    FUNC_3(VAR_3, 0);

    FUNC_3(VAR_3, 120);
    FUNC_6(VAR_3, "ARES");
    FUNC_6(VAR_3, "ARES");
    FUNC_6(VAR_3, "0001");
    FUNC_3(VAR_3, VAR_7);
    if ( VAR_4->par->sample_aspect_ratio.num > 0
        && VAR_4->par->sample_aspect_ratio.den > 0)
        VAR_8 = VAR_8 * VAR_4->par->sample_aspect_ratio.num / VAR_4->par->sample_aspect_ratio.den;
    FUNC_3(VAR_3, VAR_8);

    if (VAR_6) {
        FUNC_3(VAR_3, VAR_4->par->height / 2);
        FUNC_3(VAR_3, 2);
        FUNC_3(VAR_3, 0);
        FUNC_3(VAR_3, 4);
    } else {
        FUNC_3(VAR_3, VAR_4->par->height);
        FUNC_3(VAR_3, 1);
        FUNC_3(VAR_3, 0);
        if (VAR_4->par->height == 1080)
            FUNC_3(VAR_3, 5);
        else
            FUNC_3(VAR_3, 6);
    }

    for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
        FUNC_4(VAR_3, 0);

    return 0;
}
