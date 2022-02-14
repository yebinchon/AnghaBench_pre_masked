
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aspect; int pos; int * vres; } ;
struct wiimote_t {TYPE_1__ ir; } ;
typedef enum aspect_t { ____Placeholder_aspect_t } aspect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wiimote_t*,int ) ;

void FUNC_1(struct wiimote_t* VAR_5, enum aspect_t VAR_6) {
 if (!VAR_5) return;

 VAR_5->ir.aspect = VAR_6;

 if (VAR_6 == VAR_0) {
  VAR_5->ir.vres[0] = VAR_3;
  VAR_5->ir.vres[1] = VAR_4;
 } else {
  VAR_5->ir.vres[0] = VAR_1;
  VAR_5->ir.vres[1] = VAR_2;
 }


 FUNC_0(VAR_5, VAR_5->ir.pos);
}
