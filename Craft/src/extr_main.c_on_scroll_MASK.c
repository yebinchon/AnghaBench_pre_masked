
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int item_index; } ;
typedef int GLFWwindow ;


 double VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_0(GLFWwindow *VAR_3, double VAR_4, double VAR_5) {
    static double VAR_6 = 0;
    VAR_6 += VAR_5;
    if (VAR_6 < -VAR_0) {
        VAR_1->item_index = (VAR_1->item_index + 1) % VAR_2;
        VAR_6 = 0;
    }
    if (VAR_6 > VAR_0) {
        VAR_1->item_index--;
        if (VAR_1->item_index < 0) {
            VAR_1->item_index = VAR_2 - 1;
        }
        VAR_6 = 0;
    }
}
