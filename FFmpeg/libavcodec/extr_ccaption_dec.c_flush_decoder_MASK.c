
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags2; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int rollup; int cursor_row; int buffer; scalar_t__ readorder; scalar_t__ buffer_changed; scalar_t__ screen_touched; scalar_t__ last_real_time; scalar_t__ active_screen; scalar_t__ cursor_charset; scalar_t__ cursor_color; scalar_t__ cursor_font; scalar_t__ cursor_column; int mode; scalar_t__* prev_cmd; TYPE_1__* screen; } ;
struct TYPE_5__ {scalar_t__ row_used; } ;
typedef TYPE_2__ CCaptionSubContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_2)
{
    CCaptionSubContext *VAR_3 = VAR_2->priv_data;
    VAR_3->screen[0].row_used = 0;
    VAR_3->screen[1].row_used = 0;
    VAR_3->prev_cmd[0] = 0;
    VAR_3->prev_cmd[1] = 0;
    VAR_3->mode = VAR_1;
    VAR_3->rollup = 2;
    VAR_3->cursor_row = 10;
    VAR_3->cursor_column = 0;
    VAR_3->cursor_font = 0;
    VAR_3->cursor_color = 0;
    VAR_3->cursor_charset = 0;
    VAR_3->active_screen = 0;
    VAR_3->last_real_time = 0;
    VAR_3->screen_touched = 0;
    VAR_3->buffer_changed = 0;
    if (!(VAR_2->flags2 & VAR_0))
        VAR_3->readorder = 0;
    FUNC_0(&VAR_3->buffer);
}
