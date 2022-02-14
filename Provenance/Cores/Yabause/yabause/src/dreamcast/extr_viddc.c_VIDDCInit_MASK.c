
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_11__ {void* culling; } ;
struct TYPE_12__ {TYPE_1__ gen; } ;
typedef TYPE_2__ pvr_sprite_cxt_t ;
struct TYPE_13__ {int argb; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (float,float,float,float) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 int FUNC_2 (char*,int ) ;
 float* VAR_13 ;
 TYPE_3__ VAR_14 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 void* FUNC_5 (int) ;
 int VAR_15 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int,int,int,void*,int ) ;
 int FUNC_10 (void*,int,int) ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_11 (int *) ;
 TYPE_3__ VAR_18 ;
 TYPE_3__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(void) {
    pvr_sprite_cxt_t VAR_24, VAR_25;
    pvr_sprite_cxt_t VAR_26, VAR_27;

    FUNC_12(VAR_0, VAR_1);

    if(FUNC_3(&VAR_15)) {
        FUNC_1(VAR_16, "VIDDCInit() - error initializing PVR\n");
        return -1;
    }

    FUNC_6(VAR_4, VAR_20, 1024 * 256);
    FUNC_6(VAR_6, VAR_22, 1024 * 256);
    FUNC_6(VAR_5, VAR_21, 1024 * 256);

    VAR_17 = FUNC_5(1024 * 1024 * 2);
    VAR_23 = FUNC_5(512 * 256 * 4 * 2);
    VAR_9 = (uint32)VAR_17;

    FUNC_2("PVR Memory Available: %lu\n", FUNC_4());

    FUNC_10(VAR_17, 0xFF, 1024 * 1024 * 2);

    FUNC_8(&VAR_24, VAR_4);
    FUNC_8(&VAR_25, VAR_6);

    VAR_24.gen.culling = VAR_2;
    VAR_25.gen.culling = VAR_2;

    FUNC_7(&VAR_12, &VAR_24);
    FUNC_7(&VAR_18, &VAR_25);

    FUNC_9(&VAR_27, VAR_6, VAR_7 |
                       VAR_8, 1024, 1024, VAR_17,
                       VAR_3);
    FUNC_9(&VAR_26, VAR_5, VAR_7 |
                       VAR_8, 1024, 1024, VAR_17,
                       VAR_3);

    VAR_26.gen.culling = VAR_2;
    VAR_27.gen.culling = VAR_2;

    FUNC_7(&VAR_19, &VAR_27);
    FUNC_7(&VAR_14, &VAR_26);

    VAR_19.argb = FUNC_0(0.5f, 1.0f, 1.0f, 1.0f);

    VAR_13[0] = 0.0f;
    VAR_13[1] = 1.0f;
    VAR_13[2] = 2.0f;
    VAR_13[3] = 3.0f;
    VAR_13[4] = 4.0f;
    VAR_13[5] = 5.0f;
    VAR_13[6] = 6.0f;
    VAR_13[7] = 7.0f;

    VAR_10 = 0;
    VAR_11 = FUNC_11(((void*)0));

    return 0;
}
