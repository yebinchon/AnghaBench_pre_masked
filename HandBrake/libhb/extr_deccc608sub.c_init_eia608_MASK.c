
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eia608 {int visible_buffer; int channel; int rollup_base_row; int font; int color; scalar_t__ screenfuls_counter; scalar_t__ ssa_counter; scalar_t__ current_visible_start_ms; int mode; scalar_t__ last_c2; scalar_t__ last_c1; int buffer2; int buffer1; scalar_t__ cursor_row; scalar_t__ cursor_column; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1 (struct eia608 *VAR_3)
{
    VAR_3->cursor_column = 0;
    VAR_3->cursor_row = 0;
    FUNC_0 (&VAR_3->buffer1);
    FUNC_0 (&VAR_3->buffer2);
    VAR_3->visible_buffer = 1;
    VAR_3->last_c1 = 0;
    VAR_3->last_c2 = 0;
    VAR_3->mode = VAR_1;
    VAR_3->current_visible_start_ms = 0;
    VAR_3->ssa_counter = 0;
    VAR_3->screenfuls_counter = 0;
    VAR_3->channel = 1;
    VAR_3->color = VAR_2;
    VAR_3->font = VAR_0;
    VAR_3->rollup_base_row = 14;
}
