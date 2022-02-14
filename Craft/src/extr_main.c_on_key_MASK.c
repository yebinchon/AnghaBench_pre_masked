
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* typing_buffer; int suppress_char; int flying; int item_index; int observe1; int player_count; int observe2; scalar_t__ typing; int * players; } ;
typedef int Player ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char const*) ;
 TYPE_1__* VAR_18 ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int*,int*,int*,int*) ;
 int VAR_19 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int,int,int,int,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char const*,int) ;

void FUNC_11(GLFWwindow *VAR_20, int VAR_21, int VAR_22, int VAR_23, int VAR_24) {
    int VAR_25 = VAR_24 & (VAR_12 | VAR_14);
    int VAR_26 =
        FUNC_2(VAR_20, VAR_6) == VAR_7;
    if (VAR_23 == VAR_16) {
        return;
    }
    if (VAR_21 == VAR_9) {
        if (VAR_18->typing) {
            int VAR_27 = FUNC_9(VAR_18->typing_buffer);
            if (VAR_27 > 0) {
                VAR_18->typing_buffer[VAR_27 - 1] = '\0';
            }
        }
    }
    if (VAR_23 != VAR_15) {
        return;
    }
    if (VAR_21 == VAR_11) {
        if (VAR_18->typing) {
            VAR_18->typing = 0;
        }
        else if (VAR_26) {
            FUNC_3(VAR_20, VAR_6, VAR_8);
        }
    }
    if (VAR_21 == VAR_10) {
        if (VAR_18->typing) {
            if (VAR_24 & VAR_13) {
                int VAR_28 = FUNC_9(VAR_18->typing_buffer);
                if (VAR_28 < VAR_17 - 1) {
                    VAR_18->typing_buffer[VAR_28] = '\r';
                    VAR_18->typing_buffer[VAR_28 + 1] = '\0';
                }
            }
            else {
                VAR_18->typing = 0;
                if (VAR_18->typing_buffer[0] == VAR_5) {
                    Player *VAR_29 = VAR_18->players;
                    int VAR_30, VAR_31, VAR_32, VAR_33;
                    if (FUNC_4(VAR_29, &VAR_30, &VAR_31, &VAR_32, &VAR_33)) {
                        FUNC_8(VAR_30, VAR_31, VAR_32, VAR_33, VAR_18->typing_buffer + 1);
                    }
                }
                else if (VAR_18->typing_buffer[0] == '/') {
                    FUNC_7(VAR_18->typing_buffer, 1);
                }
                else {
                    FUNC_0(VAR_18->typing_buffer);
                }
            }
        }
        else {
            if (VAR_25) {
                FUNC_6();
            }
            else {
                FUNC_5();
            }
        }
    }
    if (VAR_25 && VAR_21 == 'V') {
        const char *VAR_34 = FUNC_1(VAR_20);
        if (VAR_18->typing) {
            VAR_18->suppress_char = 1;
            FUNC_10(VAR_18->typing_buffer, VAR_34,
                VAR_17 - FUNC_9(VAR_18->typing_buffer) - 1);
        }
        else {
            FUNC_7(VAR_34, 0);
        }
    }
    if (!VAR_18->typing) {
        if (VAR_21 == VAR_0) {
            VAR_18->flying = !VAR_18->flying;
        }
        if (VAR_21 >= '1' && VAR_21 <= '9') {
            VAR_18->item_index = VAR_21 - '1';
        }
        if (VAR_21 == '0') {
            VAR_18->item_index = 9;
        }
        if (VAR_21 == VAR_1) {
            VAR_18->item_index = (VAR_18->item_index + 1) % VAR_19;
        }
        if (VAR_21 == VAR_2) {
            VAR_18->item_index--;
            if (VAR_18->item_index < 0) {
                VAR_18->item_index = VAR_19 - 1;
            }
        }
        if (VAR_21 == VAR_3) {
            VAR_18->observe1 = (VAR_18->observe1 + 1) % VAR_18->player_count;
        }
        if (VAR_21 == VAR_4) {
            VAR_18->observe2 = (VAR_18->observe2 + 1) % VAR_18->player_count;
        }
    }
}
