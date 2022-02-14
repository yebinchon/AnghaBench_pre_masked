
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* vres; } ;
struct wiimote_t {TYPE_1__ ir; } ;



void FUNC_0(struct wiimote_t* VAR_0, unsigned int VAR_1, unsigned int VAR_2) {
 if (!VAR_0) return;

 VAR_0->ir.vres[0] = (VAR_1-1);
 VAR_0->ir.vres[1] = (VAR_2-1);
}
