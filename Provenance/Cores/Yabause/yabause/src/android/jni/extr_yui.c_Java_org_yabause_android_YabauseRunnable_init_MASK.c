
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sh2coretype; scalar_t__ skip_load; scalar_t__ frameskip; int videoformattype; int cartpath; int mpegpath; int buppath; int cdpath; int biospath; scalar_t__ regionid; int carttype; int cdcoretype; int sndcoretype; int vidcoretype; int percoretype; int m68kcoretype; } ;
typedef TYPE_1__ yabauseinit_struct ;
typedef int jobject ;
typedef int jint ;
struct TYPE_8__ {int (* NewGlobalRef ) (TYPE_2__**,int ) ;} ;
typedef TYPE_2__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,void*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int VAR_21 ;
 int FUNC_13 (TYPE_2__**,int ) ;
 int VAR_22 ;

jint
FUNC_14( JNIEnv* VAR_23, jobject VAR_24, jobject VAR_25 )
{
    yabauseinit_struct VAR_26;
    int VAR_27;
    void * VAR_28;

    if( FUNC_11() == -1 ) return -1;

    VAR_22 = (*VAR_23)->NewGlobalRef(VAR_23, VAR_25);

    FUNC_12(&VAR_26, 0, sizeof(yabauseinit_struct));

    VAR_26.m68kcoretype = VAR_1;
    VAR_26.percoretype = VAR_3;



    VAR_26.sh2coretype = VAR_16;

    VAR_26.vidcoretype = VAR_19;



    VAR_26.sndcoretype = VAR_17;

    VAR_26.cdcoretype = VAR_0;
    VAR_26.carttype = FUNC_2();
    VAR_26.regionid = 0;
    VAR_26.biospath = FUNC_0();
    VAR_26.cdpath = FUNC_3();
    VAR_26.buppath = FUNC_4();
    VAR_26.mpegpath = VAR_21;
    VAR_26.cartpath = FUNC_1();
    VAR_26.videoformattype = VAR_20;
    VAR_26.frameskip = 0;
    VAR_26.skip_load = 0;

    VAR_27 = FUNC_10(&VAR_26);

    FUNC_5(VAR_2);

    FUNC_7();
    VAR_28 = FUNC_6(&VAR_15);
    FUNC_8(VAR_11, VAR_11, VAR_28);
    FUNC_8(VAR_9, VAR_9, VAR_28);
    FUNC_8(VAR_7, VAR_7, VAR_28);
    FUNC_8(VAR_8, VAR_8, VAR_28);
    FUNC_8(VAR_10, VAR_10, VAR_28);
    FUNC_8(VAR_4, VAR_4, VAR_28);
    FUNC_8(VAR_5, VAR_5, VAR_28);
    FUNC_8(VAR_6, VAR_6, VAR_28);
    FUNC_8(VAR_12, VAR_12, VAR_28);
    FUNC_8(VAR_13, VAR_13, VAR_28);
    FUNC_8(VAR_14, VAR_14, VAR_28);

    FUNC_9(1);

    return VAR_27;
}
