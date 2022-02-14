
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {scalar_t__ new_channel; int rollup_cr; TYPE_1__* data608; int last_scr_sequence; int last_pts; } ;
struct eia608_screen {char** characters; int dirty; } ;
typedef enum command_code { ____Placeholder_command_code } command_code ;
struct TYPE_2__ {scalar_t__ channel; size_t cursor_column; size_t cursor_row; int rollup_base_row; void* font; void* color; int mode; int screenfuls_counter; int current_visible_scr_sequence; int current_visible_start_ms; } ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (struct s_write*,int) ;
 struct eia608_screen* FUNC_1 (struct s_write*) ;
 struct eia608_screen* FUNC_2 (struct s_write*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct s_write*) ;
 int FUNC_5 (struct s_write*,int) ;
 int FUNC_6 (struct s_write*) ;
 int FUNC_7 (struct s_write*) ;
 int FUNC_8 (struct s_write*) ;

__attribute__((used)) static void FUNC_9(unsigned char VAR_11, const unsigned char VAR_12,
                           struct s_write *VAR_13)
{

    VAR_13->data608->channel=VAR_13->new_channel;
    if (VAR_13->data608->channel!=VAR_7)
        return;

    enum command_code VAR_14 = VAR_0;
    if (VAR_11==0x15)
        VAR_11=0x14;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x2C)
        VAR_14 = 137;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x20)
        VAR_14 = 135;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x2F)
        VAR_14 = 138;
    if ((VAR_11==0x17 || VAR_11==0x1F) && VAR_12==0x21)
        VAR_14 = 130;
    if ((VAR_11==0x17 || VAR_11==0x1F) && VAR_12==0x22)
        VAR_14 = 129;
    if ((VAR_11==0x17 || VAR_11==0x1F) && VAR_12==0x23)
        VAR_14 = 128;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x25)
        VAR_14 = 133;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x26)
        VAR_14 = 132;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x27)
        VAR_14 = 131;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x2D)
        VAR_14 = 139;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x2E)
        VAR_14 = 136;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x21)
        VAR_14 = 140;
    if ((VAR_11==0x14 || VAR_11==0x1C) && VAR_12==0x2b)
        VAR_14 = 134;
    if (VAR_9)
    {
        FUNC_3 ("\rCommand: %02X %02X (%s)\n",VAR_11,VAR_12,VAR_8[VAR_14]);
    }
    switch (VAR_14)
    {
        case 140:
            if (VAR_13->data608->cursor_column>0)
            {
                struct eia608_screen *VAR_15;
                VAR_15 = FUNC_2(VAR_13);
                if (VAR_15 != ((void*)0))
                {
                    VAR_13->data608->cursor_column--;
                    VAR_15->characters[VAR_13->data608->cursor_row][VAR_13->data608->cursor_column] = ' ';
                    VAR_15->dirty = 1;
                }
            }
            break;
        case 130:
            if (VAR_13->data608->cursor_column<31)
                VAR_13->data608->cursor_column++;
            break;
        case 129:
            VAR_13->data608->cursor_column+=2;
            if (VAR_13->data608->cursor_column>31)
                VAR_13->data608->cursor_column=31;
            break;
        case 128:
            VAR_13->data608->cursor_column+=3;
            if (VAR_13->data608->cursor_column>31)
                VAR_13->data608->cursor_column=31;
            break;
        case 135:
            VAR_13->data608->mode=VAR_2;
            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            break;
        case 134:
            VAR_13->data608->mode=VAR_6;
            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            break;
        case 133:
            if (VAR_13->data608->rollup_base_row + 1 < 2)
            {
                FUNC_5(VAR_13, 1);
                VAR_13->data608->rollup_base_row = 1;
            }
            if (VAR_13->data608->mode==VAR_2)
            {
                FUNC_7(VAR_13);
                if (FUNC_8(VAR_13))
                    VAR_13->data608->screenfuls_counter++;
                FUNC_0 (VAR_13, 1);
            }
            VAR_13->data608->color=VAR_10;
            VAR_13->data608->font=VAR_1;
            if (VAR_13->data608->mode==VAR_3 && !FUNC_4(VAR_13))
            {
                if (VAR_9)
                    FUNC_3 ("Two RU2, current line not empty. Simulating a CR\n");
                FUNC_9(0x14, 0x2D, VAR_13);
                VAR_13->rollup_cr = 1;
            }
            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            VAR_13->data608->mode=VAR_3;
            FUNC_0 (VAR_13, 0);
            VAR_13->data608->cursor_column = 0;
            VAR_13->data608->cursor_row = VAR_13->data608->rollup_base_row;
            break;
        case 132:
            if (VAR_13->data608->rollup_base_row + 1 < 3)
            {
                FUNC_5(VAR_13, 2);
                VAR_13->data608->rollup_base_row = 2;
            }
            if (VAR_13->data608->mode==VAR_2)
            {
                if (FUNC_8(VAR_13))
                    VAR_13->data608->screenfuls_counter++;
                FUNC_0 (VAR_13, 1);
            }
            VAR_13->data608->color=VAR_10;
            VAR_13->data608->font=VAR_1;
            if (VAR_13->data608->mode==VAR_4 && !FUNC_4(VAR_13))
            {
                if (VAR_9)
                    FUNC_3 ("Two RU3, current line not empty. Simulating a CR\n");
                FUNC_9(0x14, 0x2D, VAR_13);
                VAR_13->rollup_cr = 1;
            }
            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            VAR_13->data608->mode=VAR_4;
            FUNC_0 (VAR_13, 0);
            VAR_13->data608->cursor_column = 0;
            VAR_13->data608->cursor_row = VAR_13->data608->rollup_base_row;
            break;
        case 131:
            if (VAR_13->data608->rollup_base_row + 1 < 4)
            {
                FUNC_5(VAR_13, 3);
                VAR_13->data608->rollup_base_row = 3;
            }
            if (VAR_13->data608->mode==VAR_2)
            {
                if (FUNC_8(VAR_13))
                    VAR_13->data608->screenfuls_counter++;
                FUNC_0 (VAR_13, 1);
            }
            VAR_13->data608->color=VAR_10;
            VAR_13->data608->font=VAR_1;
            if (VAR_13->data608->mode==VAR_5 && !FUNC_4(VAR_13))
            {
                if (VAR_9)
                    FUNC_3 ("Two RU4, current line not empty. Simulating a CR\n");
                FUNC_9(0x14, 0x2D, VAR_13);
                VAR_13->rollup_cr = 1;
            }
            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            VAR_13->data608->mode = VAR_5;
            VAR_13->data608->cursor_column = 0;
            VAR_13->data608->cursor_row = VAR_13->data608->rollup_base_row;
            FUNC_0 (VAR_13, 0);
            break;
        case 139:




            if (VAR_13->rollup_cr && FUNC_4(VAR_13))
            {
                VAR_13->rollup_cr = 0;
                VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
                VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
                break;
            }
            if (FUNC_8(VAR_13))
                VAR_13->data608->screenfuls_counter++;
            FUNC_6(VAR_13);
            VAR_13->data608->cursor_column = 0;
            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            break;
        case 136:
            FUNC_0 (VAR_13,0);
            break;
        case 137:


            if (VAR_13->data608->mode == VAR_3 ||
                VAR_13->data608->mode == VAR_4 ||
                VAR_13->data608->mode == VAR_5)
            {
                FUNC_8(VAR_13);
            }
            FUNC_0 (VAR_13,1);



            VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
            VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;


            struct eia608_screen *VAR_16;
            VAR_16 = FUNC_1(VAR_13);
            VAR_16->dirty = 1;
            FUNC_8(VAR_13);
            break;
        case 138:


            if (VAR_13->data608->mode == VAR_2)
            {
                FUNC_7(VAR_13);
                VAR_13->data608->current_visible_start_ms = VAR_13->last_pts;
                VAR_13->data608->current_visible_scr_sequence = VAR_13->last_scr_sequence;
            }
            if (FUNC_8(VAR_13))
                VAR_13->data608->screenfuls_counter++;

            if (VAR_13->data608->mode != VAR_2)
                FUNC_7(VAR_13);
            VAR_13->data608->cursor_column = 0;
            VAR_13->data608->cursor_row = 0;
            VAR_13->data608->color=VAR_10;
            VAR_13->data608->font=VAR_1;
            break;
        default:
            if (VAR_9)
            {
                FUNC_3 ("\rNot yet implemented.\n");
            }
            break;
    }
}
