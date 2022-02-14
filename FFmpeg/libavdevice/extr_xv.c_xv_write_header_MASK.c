
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;


struct TYPE_25__ {int id; } ;
typedef TYPE_2__ XvImageFormatValues ;
struct TYPE_26__ {int base_id; } ;
typedef TYPE_3__ XvAdaptorInfo ;
struct TYPE_27__ {int colormap; } ;
typedef TYPE_4__ XWindowAttributes ;
struct TYPE_23__ {char* shmaddr; int shmid; int readOnly; } ;
struct TYPE_28__ {void* window_height; void* window_width; int gc; int display; scalar_t__ window; TYPE_14__ yuv_shminfo; TYPE_13__* yuv_image; void* image_height; void* image_width; int xv_port; scalar_t__ window_id; int wm_delete_message; scalar_t__ window_title; int window_y; int window_x; int display_name; int image_format; } ;
typedef TYPE_5__ XVContext ;
struct TYPE_29__ {int flags; int pixel; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
typedef TYPE_6__ XColor ;
struct TYPE_30__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_32__ {scalar_t__ codec_type; scalar_t__ codec_id; void* height; void* width; int format; TYPE_7__ sample_aspect_ratio; } ;
struct TYPE_31__ {int nb_streams; int url; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_24__ {TYPE_9__* codecpar; } ;
struct TYPE_22__ {char* data; int data_size; } ;
typedef TYPE_7__ AVRational ;
typedef TYPE_8__ AVFormatContext ;
typedef TYPE_9__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
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
 scalar_t__ VAR_15 ;
 int FUNC_2 (int ,int ,TYPE_6__*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,void*,void*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,scalar_t__,int *,int) ;
 int FUNC_12 (int ,TYPE_14__*) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_2__* FUNC_16 (int ,int ,int*) ;
 scalar_t__ FUNC_17 (int ,int ,unsigned int*,TYPE_3__**) ;
 TYPE_13__* FUNC_18 (int ,int ,int,int ,void*,void*,TYPE_14__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_8__*,int ,char*,...) ;
 void* FUNC_21 (void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_28(AVFormatContext *VAR_16)
{
    XVContext *VAR_17 = VAR_16->priv_data;
    unsigned int VAR_18;
    XvAdaptorInfo *VAR_19;
    XvImageFormatValues *VAR_20;
    XColor VAR_21;
    XWindowAttributes VAR_22;
    int VAR_23 = 0, VAR_24, VAR_25, VAR_26;
    AVCodecParameters *VAR_27 = VAR_16->streams[0]->codecpar;

    if ( VAR_16->nb_streams > 1
        || VAR_27->codec_type != VAR_2
        || VAR_27->codec_id != VAR_3) {
        FUNC_20(VAR_16, VAR_4, "Only supports one rawvideo stream\n");
        return FUNC_0(VAR_8);
    }

    if (!(VAR_25 = FUNC_26(VAR_27->format))) {
        FUNC_20(VAR_16, VAR_4,
               "Unsupported pixel format '%s', only yuv420p, uyvy422, yuyv422 are currently supported\n",
               FUNC_19(VAR_27->format));
        return VAR_1;
    }
    VAR_17->image_format = VAR_27->format;

    VAR_17->display = FUNC_9(VAR_17->display_name);
    if (!VAR_17->display) {
        FUNC_20(VAR_16, VAR_4, "Could not open the X11 display '%s'\n", VAR_17->display_name);
        return FUNC_0(VAR_8);
    }

    VAR_17->image_width = VAR_27->width;
    VAR_17->image_height = VAR_27->height;
    if (!VAR_17->window_width && !VAR_17->window_height) {
        AVRational VAR_28 = VAR_27->sample_aspect_ratio;
        VAR_17->window_width = VAR_27->width;
        VAR_17->window_height = VAR_27->height;
        if (VAR_28.num) {
            if (VAR_28.num > VAR_28.den)
                VAR_17->window_width = FUNC_21(VAR_17->window_width, VAR_28.num, VAR_28.den);
            if (VAR_28.num < VAR_28.den)
                VAR_17->window_height = FUNC_21(VAR_17->window_height, VAR_28.den, VAR_28.num);
        }
    }
    if (!VAR_17->window_id) {
        VAR_17->window = FUNC_4(VAR_17->display, FUNC_1(VAR_17->display),
                                         VAR_17->window_x, VAR_17->window_y,
                                         VAR_17->window_width, VAR_17->window_height,
                                         0, 0, 0);
        if (!VAR_17->window_title) {
            if (!(VAR_17->window_title = FUNC_22(VAR_16->url))) {
                VAR_26 = FUNC_0(VAR_10);
                goto fail;
            }
        }
        FUNC_13(VAR_17->display, VAR_17->window, VAR_17->window_title);
        VAR_17->wm_delete_message = FUNC_7(VAR_17->display, "WM_DELETE_WINDOW", VAR_11);
        FUNC_11(VAR_17->display, VAR_17->window, &VAR_17->wm_delete_message, 1);
        FUNC_8(VAR_17->display, VAR_17->window);
    } else
        VAR_17->window = VAR_17->window_id;

    if (FUNC_17(VAR_17->display, FUNC_1(VAR_17->display), &VAR_18, &VAR_19) != VAR_15) {
        VAR_26 = VAR_0;
        goto fail;
    }
    if (!VAR_18) {
        FUNC_20(VAR_16, VAR_4, "No X-Video adaptors present\n");
        return FUNC_0(VAR_9);
    }
    VAR_17->xv_port = VAR_19[0].base_id;
    FUNC_15(VAR_19);

    VAR_20 = FUNC_16(VAR_17->display, VAR_17->xv_port, &VAR_23);
    if (!VAR_20) {
        VAR_26 = VAR_0;
        goto fail;
    }
    for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
        if (VAR_20[VAR_24].id == VAR_25) {
            break;
        }
    }
    FUNC_5(VAR_20);

    if (VAR_24 >= VAR_23) {
        FUNC_20(VAR_16, VAR_4,
               "Device does not support pixel format %s, aborting\n",
               FUNC_19(VAR_27->format));
        VAR_26 = FUNC_0(VAR_8);
        goto fail;
    }

    VAR_17->gc = FUNC_3(VAR_17->display, VAR_17->window, 0, 0);
    VAR_17->image_width = VAR_27->width;
    VAR_17->image_height = VAR_27->height;
    VAR_17->yuv_image = FUNC_18(VAR_17->display, VAR_17->xv_port, VAR_25, 0,
                                     VAR_17->image_width, VAR_17->image_height, &VAR_17->yuv_shminfo);
    VAR_17->yuv_shminfo.shmid = FUNC_25(VAR_13, VAR_17->yuv_image->data_size,
                                   VAR_12 | 0777);
    VAR_17->yuv_shminfo.shmaddr = (char *)FUNC_23(VAR_17->yuv_shminfo.shmid, 0, 0);
    VAR_17->yuv_image->data = VAR_17->yuv_shminfo.shmaddr;
    VAR_17->yuv_shminfo.readOnly = VAR_11;

    FUNC_12(VAR_17->display, &VAR_17->yuv_shminfo);
    FUNC_14(VAR_17->display, VAR_11);
    FUNC_24(VAR_17->yuv_shminfo.shmid, VAR_14, 0);

    FUNC_6(VAR_17->display, VAR_17->window, &VAR_22);
    VAR_21.red = VAR_21.green = VAR_21.blue = 0;
    VAR_21.flags = VAR_7 | VAR_6 | VAR_5;
    FUNC_2(VAR_17->display, VAR_22.colormap, &VAR_21);
    FUNC_10(VAR_17->display, VAR_17->gc, VAR_21.pixel);

    VAR_17->window_width = VAR_17->window_height = 0;

    return 0;
  fail:
    FUNC_27(VAR_16);
    return VAR_26;
}
