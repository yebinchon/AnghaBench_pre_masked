
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_7__ {TYPE_2__* par; } ;
struct TYPE_5__ {int den; int num; } ;
struct TYPE_6__ {int width; int height; TYPE_1__ sample_aspect_ratio; } ;
typedef TYPE_3__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int32_t VAR_2 = FUNC_0(VAR_1->par->sample_aspect_ratio.num, VAR_1->par->width,
                               VAR_1->par->sample_aspect_ratio.den);

    int64_t VAR_3 = FUNC_1(VAR_0);

    FUNC_2(VAR_0, 0);
    FUNC_3(VAR_0, "tapt");

    FUNC_2(VAR_0, 20);
    FUNC_3(VAR_0, "clef");
    FUNC_2(VAR_0, 0);
    FUNC_2(VAR_0, VAR_2 << 16);
    FUNC_2(VAR_0, VAR_1->par->height << 16);

    FUNC_2(VAR_0, 20);
    FUNC_3(VAR_0, "prof");
    FUNC_2(VAR_0, 0);
    FUNC_2(VAR_0, VAR_2 << 16);
    FUNC_2(VAR_0, VAR_1->par->height << 16);

    FUNC_2(VAR_0, 20);
    FUNC_3(VAR_0, "enof");
    FUNC_2(VAR_0, 0);
    FUNC_2(VAR_0, VAR_1->par->width << 16);
    FUNC_2(VAR_0, VAR_1->par->height << 16);

    return FUNC_4(VAR_0, VAR_3);
}
