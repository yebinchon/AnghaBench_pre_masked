
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {short btns_last; short btns; short btns_held; short btns_released; } ;


 short FUNC_0 (short) ;
 short VAR_0 ;

void FUNC_1(struct wiimote_t* VAR_1, ubyte* VAR_2) {
 short VAR_3;


 VAR_3 = FUNC_0(*(short*)VAR_2) & VAR_0;


 VAR_1->btns_last = VAR_1->btns;


 VAR_1->btns_held = (VAR_3 & VAR_1->btns);


 VAR_1->btns_released = ((VAR_1->btns | VAR_1->btns_held) & ~VAR_3);


 VAR_1->btns = VAR_3;
}
