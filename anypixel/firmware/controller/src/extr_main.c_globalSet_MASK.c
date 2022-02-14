
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int payload; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int * VAR_1 ;

void FUNC_1(int VAR_2, int VAR_3) {
    int VAR_4 = VAR_2 / 3 / 14;
    int VAR_5 = (VAR_2 / 3) % 14;
    int VAR_6 = VAR_2 % 3;
    int VAR_7 = VAR_4 % 7;
    int VAR_8 = VAR_5 % 7;
    int VAR_9 = (VAR_4 / 7)*2+(VAR_5 / 7);
    FUNC_0(VAR_0[VAR_9].s.payload, VAR_1[(VAR_7*7+VAR_8)*3+VAR_6], VAR_3);
}
