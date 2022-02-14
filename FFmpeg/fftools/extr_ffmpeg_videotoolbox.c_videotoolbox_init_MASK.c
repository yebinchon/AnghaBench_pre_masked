
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int tmp_frame; } ;
typedef TYPE_1__ VTContext ;
struct TYPE_16__ {TYPE_2__* opaque; } ;
struct TYPE_15__ {int cv_pix_fmt_type; } ;
struct TYPE_14__ {scalar_t__ hwaccel_id; int hwaccel_retrieve_data; int (* hwaccel_uninit ) (TYPE_4__*) ;TYPE_1__* hwaccel_ctx; } ;
typedef TYPE_2__ InputStream ;
typedef int CFStringRef ;
typedef TYPE_3__ AVVideotoolboxContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int,char*,...) ;
 TYPE_1__* FUNC_6 (int) ;
 TYPE_3__* FUNC_7 () ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_4__*) ;

int FUNC_11(AVCodecContext *VAR_8)
{
    InputStream *VAR_9 = VAR_8->opaque;
    int VAR_10 = (VAR_9->hwaccel_id == VAR_3) ? VAR_1 : VAR_0;
    int VAR_11 = 0;
    VTContext *VAR_12;

    VAR_12 = FUNC_6(sizeof(*VAR_12));
    if (!VAR_12)
        return FUNC_0(VAR_2);

    VAR_9->hwaccel_ctx = VAR_12;
    VAR_9->hwaccel_uninit = FUNC_10;
    VAR_9->hwaccel_retrieve_data = VAR_7;

    VAR_12->tmp_frame = FUNC_4();
    if (!VAR_12->tmp_frame) {
        VAR_11 = FUNC_0(VAR_2);
        goto fail;
    }


        if (!VAR_6) {
            VAR_11 = FUNC_8(VAR_8);
        } else {
            AVVideotoolboxContext *VAR_13 = FUNC_7();
            CFStringRef VAR_14 = FUNC_2(VAR_4,
                                                               VAR_6,
                                                               VAR_5);



            FUNC_5(VAR_8, VAR_10, "UTGetOSTypeFromString() is not available "
                   "on this platform, %s pixel format can not be honored from "
                   "the command line\n", VAR_6);

            VAR_11 = FUNC_9(VAR_8, VAR_13);
            FUNC_1(VAR_14);
        }
    if (VAR_11 < 0) {
        FUNC_5(((void*)0), VAR_10, "Error creating Videotoolbox decoder.\n");
        goto fail;
    }

    return 0;
fail:
    FUNC_10(VAR_8);
    return VAR_11;
}
