
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct Screen {int row_used; } ;
typedef int int64_t ;
struct TYPE_12__ {int* prev_cmd; int rollup; int active_screen; struct Screen* screen; int real_time; int cursor_column; int mode; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(CCaptionSubContext *VAR_4, int64_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
    if (VAR_6 == VAR_4->prev_cmd[0] && VAR_7 == VAR_4->prev_cmd[1]) {

        return;
    }


    VAR_4->prev_cmd[0] = VAR_6;
    VAR_4->prev_cmd[1] = VAR_7;

    if ( (VAR_6 == 0x10 && (VAR_7 >= 0x40 && VAR_7 <= 0x5f)) ||
       ( (VAR_6 >= 0x11 && VAR_6 <= 0x17) && (VAR_7 >= 0x40 && VAR_7 <= 0x7f) ) ) {
        FUNC_5(VAR_4, VAR_6, VAR_7);
    } else if ( ( VAR_6 == 0x11 && VAR_7 >= 0x20 && VAR_7 <= 0x2f ) ||
                ( VAR_6 == 0x17 && VAR_7 >= 0x2e && VAR_7 <= 0x2f) ) {
        FUNC_6(VAR_4, VAR_6, VAR_7);
    } else if (VAR_6 == 0x14 || VAR_6 == 0x15 || VAR_6 == 0x1c) {
        switch (VAR_7) {
        case 0x20:

            VAR_4->mode = VAR_1;
            break;
        case 0x24:
            FUNC_2(VAR_4, VAR_6, VAR_7);
            break;
        case 0x25:
        case 0x26:
        case 0x27:
            VAR_4->rollup = VAR_7 - 0x23;
            VAR_4->mode = VAR_2;
            break;
        case 0x29:

            VAR_4->mode = VAR_0;
            break;
        case 0x2b:

            VAR_4->mode = VAR_3;
            break;
        case 0x2c:

            FUNC_3(VAR_4, VAR_5);
            break;
        case 0x2d:

            FUNC_0(VAR_4, "carriage return\n");
            if (!VAR_4->real_time)
                FUNC_7(VAR_4, VAR_5);
            FUNC_8(VAR_4);
            VAR_4->cursor_column = 0;
            break;
        case 0x2e:



            if (VAR_4->real_time) {
                struct Screen *VAR_8 = VAR_4->screen + !VAR_4->active_screen;
                VAR_8->row_used = 0;
            }
            break;
        case 0x2f:

            FUNC_0(VAR_4, "handle_eoc\n");
            FUNC_4(VAR_4, VAR_5);
            break;
        default:
            FUNC_0(VAR_4, "Unknown command 0x%hhx 0x%hhx\n", VAR_6, VAR_7);
            break;
        }
    } else if (VAR_6 >= 0x11 && VAR_6 <= 0x13) {

        FUNC_1(VAR_4, VAR_6, VAR_7, VAR_5);
    } else if (VAR_6 >= 0x20) {

        FUNC_1(VAR_4, VAR_6, VAR_7, VAR_5);
        VAR_4->prev_cmd[0] = VAR_4->prev_cmd[1] = 0;
    } else if (VAR_6 == 0x17 && VAR_7 >= 0x21 && VAR_7 <= 0x23) {
        int VAR_9;

        for (VAR_9 = 0; VAR_9 < VAR_7 - 0x20; VAR_9++) {
            FUNC_1(VAR_4, ' ', 0, VAR_5);
        }
    } else {

        FUNC_0(VAR_4, "Unknown command 0x%hhx 0x%hhx\n", VAR_6, VAR_7);
    }
}
