
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ same_screen; } ;
typedef TYPE_2__ xcb_query_pointer_reply_t ;
typedef int xcb_query_pointer_cookie_t ;
typedef TYPE_2__ xcb_get_geometry_reply_t ;
typedef int xcb_get_geometry_cookie_t ;
struct TYPE_22__ {scalar_t__ draw_mouse; scalar_t__ has_shm; scalar_t__ show_region; scalar_t__ follow_mouse; int conn; TYPE_1__* screen; } ;
typedef TYPE_4__ XCBGrabContext ;
struct TYPE_23__ {TYPE_4__* priv_data; } ;
struct TYPE_20__ {int root; } ;
typedef int AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_5__*,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    XCBGrabContext *VAR_2 = VAR_0->priv_data;
    xcb_query_pointer_cookie_t VAR_3;
    xcb_get_geometry_cookie_t VAR_4;
    xcb_query_pointer_reply_t *VAR_5 = ((void*)0);
    xcb_get_geometry_reply_t *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    FUNC_1(VAR_0, VAR_1);

    if (VAR_2->follow_mouse || VAR_2->draw_mouse) {
        VAR_3 = FUNC_4(VAR_2->conn, VAR_2->screen->root);
        VAR_4 = FUNC_2(VAR_2->conn, VAR_2->screen->root);
        VAR_5 = FUNC_5(VAR_2->conn, VAR_3, ((void*)0));
        VAR_6 = FUNC_3(VAR_2->conn, VAR_4, ((void*)0));
    }

    if (VAR_2->follow_mouse && VAR_5->same_screen)
        FUNC_9(VAR_0, VAR_5, VAR_6);

    if (VAR_2->show_region)
        FUNC_10(VAR_0);





    if (!VAR_2->has_shm)
        VAR_7 = FUNC_7(VAR_0, VAR_1);






    FUNC_0(VAR_5);
    FUNC_0(VAR_6);

    return VAR_7;
}
