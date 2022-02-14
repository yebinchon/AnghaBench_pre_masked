
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ebml_master ;
struct TYPE_2__ {int projection; scalar_t__ roll; scalar_t__ pitch; scalar_t__ yaw; int padding; int bound_right; int bound_left; int bound_bottom; int bound_top; } ;
typedef int AVStream ;
typedef TYPE_1__ AVSphericalMapping ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int,int,int *,int *,int *,int *) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 int FUNC_11 (int *,int ,double) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int ,int) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_10, AVIOContext *VAR_11,
                                      AVStream *VAR_12)
{
    AVIOContext VAR_13;
    AVIOContext *VAR_14;
    int VAR_15 = 0;
    int VAR_16, VAR_17;
    uint8_t *VAR_18;
    uint8_t VAR_19[20];

    const AVSphericalMapping *VAR_20 =
        (const AVSphericalMapping *)FUNC_2(VAR_12, VAR_1,
                                                            &VAR_15);

    if (!VAR_15)
        return 0;

    VAR_16 = FUNC_4(&VAR_14);
    if (VAR_16 < 0)
        return VAR_16;

    switch (VAR_20->projection) {
    case 129:
        FUNC_12(VAR_14, VAR_7,
                      VAR_9);
        break;
    case 128:
        FUNC_9(&VAR_13, VAR_19, 20, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        FUNC_12(VAR_14, VAR_7,
                      VAR_9);
        FUNC_6(&VAR_13, 0);
        FUNC_6(&VAR_13, VAR_20->bound_top);
        FUNC_6(&VAR_13, VAR_20->bound_bottom);
        FUNC_6(&VAR_13, VAR_20->bound_left);
        FUNC_6(&VAR_13, VAR_20->bound_right);
        FUNC_10(VAR_14, VAR_6,
                        VAR_19, FUNC_5(&VAR_13));
        break;
    case 130:
        FUNC_9(&VAR_13, VAR_19, 12, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        FUNC_12(VAR_14, VAR_7,
                      VAR_8);
        FUNC_6(&VAR_13, 0);
        FUNC_6(&VAR_13, 0);
        FUNC_6(&VAR_13, VAR_20->padding);
        FUNC_10(VAR_14, VAR_6,
                        VAR_19, FUNC_5(&VAR_13));
        break;
    default:
        FUNC_1(VAR_10, VAR_0, "Unknown projection type\n");
        goto end;
    }

    if (VAR_20->yaw)
        FUNC_11(VAR_14, VAR_5,
                       (double) VAR_20->yaw / (1 << 16));
    if (VAR_20->pitch)
        FUNC_11(VAR_14, VAR_3,
                       (double) VAR_20->pitch / (1 << 16));
    if (VAR_20->roll)
        FUNC_11(VAR_14, VAR_4,
                       (double) VAR_20->roll / (1 << 16));

end:
    VAR_17 = FUNC_3(VAR_14, &VAR_18);
    if (VAR_17) {
        ebml_master VAR_21 = FUNC_13(VAR_11,
                                                   VAR_2,
                                                   VAR_17);
        FUNC_7(VAR_11, VAR_18, VAR_17);
        FUNC_8(VAR_11, VAR_21);
    }
    FUNC_0(&VAR_18);

    return 0;
}
