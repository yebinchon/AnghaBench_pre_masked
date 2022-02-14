
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; int member_3; int member_2; } ;
typedef TYPE_2__ xcb_rectangle_t ;
typedef int xcb_gcontext_t ;
typedef int uint32_t ;
struct TYPE_9__ {int region_border; int window; int conn; int height; int width; TYPE_1__* screen; } ;
typedef TYPE_3__ XCBGrabContext ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int black_pixel; int white_pixel; } ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_7)
{
    XCBGrabContext *VAR_8 = VAR_7->priv_data;
    xcb_gcontext_t VAR_9 = FUNC_1(VAR_8->conn);
    uint32_t VAR_10 = VAR_3 |
                        VAR_1 |
                        VAR_5 |
                        VAR_4 |
                        VAR_2;
    uint32_t VAR_11[] = { VAR_8->screen->black_pixel,
                          VAR_8->screen->white_pixel,
                          VAR_8->region_border,
                          VAR_6,
                          VAR_0 };
    xcb_rectangle_t VAR_12 = { 1, 1,
                          VAR_8->width + VAR_8->region_border * 2 - 3,
                          VAR_8->height + VAR_8->region_border * 2 - 3 };

    FUNC_0(VAR_8->conn, VAR_9, VAR_8->window, VAR_10, VAR_11);

    FUNC_2(VAR_8->conn, VAR_8->window, VAR_9, 1, &VAR_12);
}
