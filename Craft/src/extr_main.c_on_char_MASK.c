
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typing; char* typing_buffer; scalar_t__ suppress_char; } ;
typedef int GLFWwindow ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*) ;

void FUNC_1(GLFWwindow *VAR_5, unsigned int VAR_6) {
    if (VAR_4->suppress_char) {
        VAR_4->suppress_char = 0;
        return;
    }
    if (VAR_4->typing) {
        if (VAR_6 >= 32 && VAR_6 < 128) {
            char VAR_7 = (char)VAR_6;
            int VAR_8 = FUNC_0(VAR_4->typing_buffer);
            if (VAR_8 < VAR_3 - 1) {
                VAR_4->typing_buffer[VAR_8] = VAR_7;
                VAR_4->typing_buffer[VAR_8 + 1] = '\0';
            }
        }
    }
    else {
        if (VAR_6 == VAR_0) {
            VAR_4->typing = 1;
            VAR_4->typing_buffer[0] = '\0';
        }
        if (VAR_6 == VAR_1) {
            VAR_4->typing = 1;
            VAR_4->typing_buffer[0] = '/';
            VAR_4->typing_buffer[1] = '\0';
        }
        if (VAR_6 == VAR_2) {
            VAR_4->typing = 1;
            VAR_4->typing_buffer[0] = VAR_2;
            VAR_4->typing_buffer[1] = '\0';
        }
    }
}
