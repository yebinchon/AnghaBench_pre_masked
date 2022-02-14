
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xcb_get_image_reply_t ;
typedef int xcb_get_image_cookie_t ;
struct TYPE_12__ {int major_code; int minor_code; int resource_id; int sequence; int error_code; int response_type; } ;
typedef TYPE_2__ xcb_generic_error_t ;
typedef int xcb_drawable_t ;
typedef int uint8_t ;
struct TYPE_13__ {int conn; int height; int width; int y; int x; TYPE_1__* screen; } ;
typedef TYPE_3__ XCBGrabContext ;
struct TYPE_15__ {TYPE_3__* priv_data; } ;
struct TYPE_14__ {int data; } ;
struct TYPE_11__ {int root; } ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ,TYPE_2__**) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    XCBGrabContext *VAR_6 = VAR_4->priv_data;
    xcb_get_image_cookie_t VAR_7;
    xcb_get_image_reply_t *VAR_8;
    xcb_drawable_t VAR_9 = VAR_6->screen->root;
    xcb_generic_error_t *VAR_10 = ((void*)0);
    uint8_t *VAR_11;
    int VAR_12, VAR_13;

    VAR_7 = FUNC_5(VAR_6->conn, VAR_3, VAR_9,
                        VAR_6->x, VAR_6->y, VAR_6->width, VAR_6->height, ~0);

    VAR_8 = FUNC_8(VAR_6->conn, VAR_7, &VAR_10);

    if (VAR_10) {
        FUNC_1(VAR_4, VAR_0,
               "Cannot get the image data "
               "event_error: response_type:%u error_code:%u "
               "sequence:%u resource_id:%u minor_code:%u major_code:%u.\n",
               VAR_10->response_type, VAR_10->error_code,
               VAR_10->sequence, VAR_10->resource_id, VAR_10->minor_code, VAR_10->major_code);
        return FUNC_0(VAR_1);
    }

    if (!VAR_8)
        return FUNC_0(VAR_2);

    VAR_11 = FUNC_6(VAR_8);
    VAR_12 = FUNC_7(VAR_8);

    VAR_13 = FUNC_2(VAR_5, VAR_12);

    if (!VAR_13)
        FUNC_4(VAR_5->data, VAR_11, VAR_12);

    FUNC_3(VAR_8);

    return VAR_13;
}
