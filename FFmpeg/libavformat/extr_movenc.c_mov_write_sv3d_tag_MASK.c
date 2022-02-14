
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int projection; int yaw; int pitch; int roll; int bound_top; int bound_bottom; int bound_left; int bound_right; int padding; } ;
typedef TYPE_1__ AVSphericalMapping ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;



 char* VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, AVIOContext *VAR_4, AVSphericalMapping *VAR_5)
{
    int64_t VAR_6, VAR_7, VAR_8;
    const char* VAR_9 = VAR_3->flags & VAR_0 ? "Lavf" : VAR_2;

    if (VAR_5->projection != 129 &&
        VAR_5->projection != 128 &&
        VAR_5->projection != 130) {
        FUNC_0(VAR_3, VAR_1, "Unsupported projection %d. sv3d not written.\n", VAR_5->projection);
        return 0;
    }

    VAR_6 = FUNC_2(VAR_4);
    FUNC_3(VAR_4, 0);
    FUNC_4(VAR_4, "sv3d");

    VAR_7 = FUNC_2(VAR_4);
    FUNC_3(VAR_4, 0);
    FUNC_4(VAR_4, "svhd");
    FUNC_3(VAR_4, 0);
    FUNC_1(VAR_4, VAR_9);
    FUNC_5(VAR_4, VAR_7);

    VAR_8 = FUNC_2(VAR_4);
    FUNC_3(VAR_4, 0);
    FUNC_4(VAR_4, "proj");

    FUNC_3(VAR_4, 24);
    FUNC_4(VAR_4, "prhd");
    FUNC_3(VAR_4, 0);
    FUNC_3(VAR_4, VAR_5->yaw);
    FUNC_3(VAR_4, VAR_5->pitch);
    FUNC_3(VAR_4, VAR_5->roll);

    switch (VAR_5->projection) {
    case 129:
    case 128:
        FUNC_3(VAR_4, 28);
        FUNC_4(VAR_4, "equi");
        FUNC_3(VAR_4, 0);
        FUNC_3(VAR_4, VAR_5->bound_top);
        FUNC_3(VAR_4, VAR_5->bound_bottom);
        FUNC_3(VAR_4, VAR_5->bound_left);
        FUNC_3(VAR_4, VAR_5->bound_right);
        break;
    case 130:
        FUNC_3(VAR_4, 20);
        FUNC_4(VAR_4, "cbmp");
        FUNC_3(VAR_4, 0);
        FUNC_3(VAR_4, 0);
        FUNC_3(VAR_4, VAR_5->padding);
        break;
    }
    FUNC_5(VAR_4, VAR_8);

    return FUNC_5(VAR_4, VAR_6);
}
