
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int win_x; int win_y; } ;
typedef TYPE_1__ xcb_query_pointer_reply_t ;
struct TYPE_9__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_2__ xcb_get_geometry_reply_t ;
struct TYPE_10__ {int x; int y; int width; int height; int follow_mouse; } ;
typedef TYPE_3__ XCBGrabContext ;
struct TYPE_11__ {TYPE_3__* priv_data; } ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2,
                              xcb_query_pointer_reply_t *VAR_3,
                              xcb_get_geometry_reply_t *VAR_4)
{
    XCBGrabContext *VAR_5 = VAR_2->priv_data;
    int VAR_6 = VAR_5->x, VAR_7 = VAR_5->y;
    int VAR_8 = VAR_5->width, VAR_9 = VAR_5->height, VAR_10 = VAR_5->follow_mouse;
    int VAR_11, VAR_12;

    if (!VAR_3 || !VAR_4)
        return FUNC_0(VAR_0);

    VAR_11 = VAR_3->win_x;
    VAR_12 = VAR_3->win_y;

    if (VAR_10 == VAR_1) {
        VAR_6 = VAR_11 - VAR_8 / 2;
        VAR_7 = VAR_12 - VAR_9 / 2;
    } else {
        int VAR_13 = VAR_6 + VAR_10;
        int VAR_14 = VAR_6 + VAR_8 - VAR_10;
        int VAR_15 = VAR_7 + VAR_10;
        int VAR_16 = VAR_7 + VAR_9 - VAR_10;
        if (VAR_11 > VAR_14) {
            VAR_6 += VAR_11 - VAR_14;
        } else if (VAR_11 < VAR_13) {
            VAR_6 -= VAR_13 - VAR_11;
        }
        if (VAR_12 > VAR_16) {
            VAR_7 += VAR_12 - VAR_16;
        } else if (VAR_12 < VAR_15) {
            VAR_7 -= VAR_15 - VAR_12;
        }
    }

    VAR_5->x = FUNC_2(FUNC_1(0, VAR_6), VAR_4->width - VAR_8);
    VAR_5->y = FUNC_2(FUNC_1(0, VAR_7), VAR_4->height - VAR_9);

    return 0;
}
