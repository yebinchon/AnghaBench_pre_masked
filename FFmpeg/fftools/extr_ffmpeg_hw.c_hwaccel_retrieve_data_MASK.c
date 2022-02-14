
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_18__ {TYPE_1__* opaque; } ;
struct TYPE_17__ {int format; } ;
struct TYPE_16__ {int hwaccel_output_format; } ;
typedef TYPE_1__ InputStream ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_2, AVFrame *VAR_3)
{
    InputStream *VAR_4 = VAR_2->opaque;
    AVFrame *VAR_5 = ((void*)0);
    enum AVPixelFormat VAR_6 = VAR_4->hwaccel_output_format;
    int VAR_7;

    if (VAR_3->format == VAR_6) {

        return 0;
    }

    VAR_5 = FUNC_1();
    if (!VAR_5)
        return FUNC_0(VAR_1);

    VAR_5->format = VAR_6;

    VAR_7 = FUNC_6(VAR_5, VAR_3, 0);
    if (VAR_7 < 0) {
        FUNC_7(VAR_2, VAR_0, "Failed to transfer data to "
               "output frame: %d.\n", VAR_7);
        goto fail;
    }

    VAR_7 = FUNC_2(VAR_5, VAR_3);
    if (VAR_7 < 0) {
        FUNC_5(VAR_5);
        goto fail;
    }

    FUNC_5(VAR_3);
    FUNC_4(VAR_3, VAR_5);
    FUNC_3(&VAR_5);

    return 0;

fail:
    FUNC_3(&VAR_5);
    return VAR_7;
}
