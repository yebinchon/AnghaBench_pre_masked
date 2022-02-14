
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_1__ XWindowAttributes ;
struct TYPE_11__ {scalar_t__ window_width; scalar_t__ window_height; scalar_t__ dest_w; scalar_t__ dest_h; scalar_t__ dest_x; scalar_t__ dest_y; int image_height; int image_width; int yuv_image; int gc; int window; int xv_port; int display; } ;
typedef TYPE_2__ XVContext ;
struct TYPE_12__ {scalar_t__ width; scalar_t__ height; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ XRectangle ;
struct TYPE_13__ {TYPE_2__* priv_data; } ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4)
{
    XVContext *VAR_5 = VAR_4->priv_data;
    XWindowAttributes VAR_6;

    FUNC_1(VAR_5->display, VAR_5->window, &VAR_6);
    if (VAR_6.width != VAR_5->window_width || VAR_6.height != VAR_5->window_height) {
        XRectangle VAR_7[2];
        VAR_5->dest_w = VAR_6.width;
        VAR_5->dest_h = VAR_6.height;
        FUNC_4(VAR_4);
        if (VAR_5->dest_x) {
            VAR_7[0].width = VAR_7[1].width = VAR_5->dest_x;
            VAR_7[0].height = VAR_7[1].height = VAR_6.height;
            VAR_7[0].y = VAR_7[1].y = 0;
            VAR_7[0].x = 0;
            VAR_7[1].x = VAR_5->dest_w + VAR_5->dest_x;
            FUNC_0(VAR_5->display, VAR_5->window, VAR_5->gc, VAR_7, 2);
        }
        if (VAR_5->dest_y) {
            VAR_7[0].width = VAR_7[1].width = VAR_6.width;
            VAR_7[0].height = VAR_7[1].height = VAR_5->dest_y;
            VAR_7[0].x = VAR_7[1].x = 0;
            VAR_7[0].y = 0;
            VAR_7[1].y = VAR_5->dest_h + VAR_5->dest_y;
            FUNC_0(VAR_5->display, VAR_5->window, VAR_5->gc, VAR_7, 2);
        }
    }

    if (FUNC_2(VAR_5->display, VAR_5->xv_port, VAR_5->window, VAR_5->gc,
                      VAR_5->yuv_image, 0, 0, VAR_5->image_width, VAR_5->image_height,
                      VAR_5->dest_x, VAR_5->dest_y, VAR_5->dest_w, VAR_5->dest_h, VAR_3) != VAR_2) {
        FUNC_3(VAR_4, VAR_1, "Could not copy image to XV shared memory buffer\n");
        return VAR_0;
    }
    return 0;
}
