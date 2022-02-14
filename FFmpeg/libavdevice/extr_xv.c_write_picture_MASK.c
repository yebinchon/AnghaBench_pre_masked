
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int height; int width; int pitches; int * offsets; int * data; } ;
typedef TYPE_3__ XvImage ;
struct TYPE_14__ {scalar_t__ wm_delete_message; int image_format; int display; int window_id; TYPE_3__* yuv_image; } ;
typedef TYPE_4__ XVContext ;
struct TYPE_11__ {scalar_t__* l; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_2__ xclient; } ;
typedef TYPE_5__ XEvent ;
struct TYPE_16__ {TYPE_4__* priv_data; } ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int **,int ,int const**,int*,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 int FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, uint8_t *VAR_4[4],
                         int VAR_5[4])
{
    XVContext *VAR_6 = VAR_3->priv_data;
    XvImage *VAR_7 = VAR_6->yuv_image;
    uint8_t *VAR_8[3] = {
        VAR_7->data + VAR_7->offsets[0],
        VAR_7->data + VAR_7->offsets[1],
        VAR_7->data + VAR_7->offsets[2]
    };


    if (!VAR_6->window_id) {
        XEvent VAR_9;
        while (FUNC_2(VAR_6->display)) {
            FUNC_1(VAR_6->display, &VAR_9);
            if (VAR_9.type == VAR_1 && VAR_9.xclient.data.l[0] == VAR_6->wm_delete_message) {
                FUNC_4(VAR_6, VAR_0, "Window close event.\n");
                return FUNC_0(VAR_2);
            }
        }
    }

    FUNC_3(VAR_8, VAR_7->pitches, (const uint8_t **)VAR_4, VAR_5,
                  VAR_6->image_format, VAR_7->width, VAR_7->height);
    return FUNC_5(VAR_3);
}
