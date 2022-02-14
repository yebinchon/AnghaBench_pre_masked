
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {TYPE_1__* priv; TYPE_2__** inputs; } ;
struct TYPE_7__ {int format; int h; int w; TYPE_3__* src; } ;
struct TYPE_6__ {int hwframes_ref; } ;
typedef TYPE_1__ HWDownloadContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int**,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    AVFilterLink *VAR_6 = VAR_5->inputs[0];
    HWDownloadContext *VAR_7 = VAR_5->priv;
    enum AVPixelFormat *VAR_8;
    int VAR_9, VAR_10, VAR_11;

    if (!VAR_7->hwframes_ref)
        return FUNC_0(VAR_3);

    VAR_9 = FUNC_3(VAR_7->hwframes_ref,
                                          VAR_0,
                                          &VAR_8, 0);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_11 = 0;
    for (VAR_10 = 0; VAR_8[VAR_10] != VAR_2; VAR_10++) {
        if (VAR_8[VAR_10] == VAR_4->format) {
            VAR_11 = 1;
            break;
        }
    }
    FUNC_1(&VAR_8);

    if (!VAR_11) {
        FUNC_4(VAR_7, VAR_1, "Invalid output format %s for hwframe "
               "download.\n", FUNC_2(VAR_4->format));
        return FUNC_0(VAR_3);
    }

    VAR_4->w = VAR_6->w;
    VAR_4->h = VAR_6->h;

    return 0;
}
