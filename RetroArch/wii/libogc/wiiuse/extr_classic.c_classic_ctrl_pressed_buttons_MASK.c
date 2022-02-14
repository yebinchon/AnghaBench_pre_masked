
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct classic_ctrl_t {short btns_last; short btns; short btns_held; short btns_released; } ;


 short VAR_0 ;

__attribute__((used)) static void FUNC_0(struct classic_ctrl_t* VAR_1, short VAR_2) {

 VAR_2 = ~VAR_2 & VAR_0;


 VAR_1->btns_last = VAR_1->btns;


 VAR_1->btns_held = (VAR_2 & VAR_1->btns);


 VAR_1->btns_released = ((VAR_1->btns | VAR_1->btns_held) & ~VAR_2);


 VAR_1->btns = VAR_2;
}
