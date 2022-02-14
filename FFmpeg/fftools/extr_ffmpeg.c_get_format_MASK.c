
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_18__ {int hw_frames_ctx; int codec; TYPE_2__* opaque; } ;
struct TYPE_17__ {int methods; int const pix_fmt; scalar_t__ device_type; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {int const pix_fmt; scalar_t__ id; int (* init ) (TYPE_6__*) ;scalar_t__ name; } ;
struct TYPE_14__ {scalar_t__ hwaccel_id; scalar_t__ hwaccel_device_type; int hwaccel_pix_fmt; scalar_t__ hw_frames_ctx; TYPE_1__* st; int file_index; } ;
struct TYPE_13__ {int index; } ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ HWAccel ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVCodecHWConfig ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,char*,scalar_t__,int ,int ) ;
 TYPE_4__* FUNC_3 (int const) ;
 TYPE_5__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static enum AVPixelFormat FUNC_7(AVCodecContext *VAR_7, const enum AVPixelFormat *VAR_8)
{
    InputStream *VAR_9 = VAR_7->opaque;
    const enum AVPixelFormat *VAR_10;
    int VAR_11;

    for (VAR_10 = VAR_8; *VAR_10 != VAR_3; VAR_10++) {
        const AVPixFmtDescriptor *VAR_12 = FUNC_3(*VAR_10);
        const AVCodecHWConfig *VAR_13 = ((void*)0);
        int VAR_14;

        if (!(VAR_12->flags & VAR_2))
            break;

        if (VAR_9->hwaccel_id == VAR_5 ||
            VAR_9->hwaccel_id == VAR_4) {
            for (VAR_14 = 0;; VAR_14++) {
                VAR_13 = FUNC_4(VAR_7->codec, VAR_14);
                if (!VAR_13)
                    break;
                if (!(VAR_13->methods &
                      VAR_0))
                    continue;
                if (VAR_13->pix_fmt == *VAR_10)
                    break;
            }
        }
        if (VAR_13) {
            if (VAR_13->device_type != VAR_9->hwaccel_device_type) {

                continue;
            }

            VAR_11 = FUNC_5(VAR_7);
            if (VAR_11 < 0) {
                if (VAR_9->hwaccel_id == VAR_5) {
                    FUNC_2(((void*)0), VAR_1,
                           "%s hwaccel requested for input stream #%d:%d, "
                           "but cannot be initialized.\n",
                           FUNC_1(VAR_13->device_type),
                           VAR_9->file_index, VAR_9->st->index);
                    return VAR_3;
                }
                continue;
            }
        } else {
            const HWAccel *VAR_15 = ((void*)0);
            int VAR_16;
            for (VAR_16 = 0; VAR_6[VAR_16].name; VAR_16++) {
                if (VAR_6[VAR_16].pix_fmt == *VAR_10) {
                    VAR_15 = &VAR_6[VAR_16];
                    break;
                }
            }
            if (!VAR_15) {

                continue;
            }
            if (VAR_15->id != VAR_9->hwaccel_id) {

                continue;
            }

            VAR_11 = VAR_15->init(VAR_7);
            if (VAR_11 < 0) {
                FUNC_2(((void*)0), VAR_1,
                       "%s hwaccel requested for input stream #%d:%d, "
                       "but cannot be initialized.\n", VAR_15->name,
                       VAR_9->file_index, VAR_9->st->index);
                return VAR_3;
            }
        }

        if (VAR_9->hw_frames_ctx) {
            VAR_7->hw_frames_ctx = FUNC_0(VAR_9->hw_frames_ctx);
            if (!VAR_7->hw_frames_ctx)
                return VAR_3;
        }

        VAR_9->hwaccel_pix_fmt = *VAR_10;
        break;
    }

    return *VAR_10;
}
