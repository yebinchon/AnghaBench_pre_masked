
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int el; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_2 ;

int FUNC_2(void) {
    int VAR_3 = 4;
    int VAR_4 = 0;
    while (VAR_3--) {
        int VAR_5 = 0;
        VAR_5 += FUNC_0(VAR_2.el, VAR_1|VAR_0);
        VAR_5 += FUNC_1();
        if (!VAR_5) break;
        VAR_4 += VAR_5;
    }
    return VAR_4;
}
