
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_t {scalar_t__ ax; scalar_t__ ay; scalar_t__ sx; scalar_t__ sy; } ;
typedef scalar_t__ f32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void FUNC_5(struct ir_t *VAR_3) {
 f32 VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_0("Smooth: OK (%.02f, %.02f) LAST (%.02f, %.02f) ", VAR_3->ax, VAR_3->ay, VAR_3->sx, VAR_3->sy);
 VAR_4 = VAR_3->ax - VAR_3->sx;
 VAR_5 = VAR_3->ay - VAR_3->sy;
 VAR_6 = FUNC_4(VAR_4*VAR_4 + VAR_5*VAR_5);
 if (VAR_6 > VAR_0) {
  if (VAR_6 < VAR_1) {
   FUNC_0("INSIDE\n");
   VAR_3->sx += VAR_4 * VAR_2;
   VAR_3->sy += VAR_5 * VAR_2;
  } else {
   FUNC_0("OUTSIDE\n");
   VAR_7 = FUNC_1(VAR_5, VAR_4);
   VAR_3->sx = VAR_3->ax - FUNC_2(VAR_7) * VAR_1;
   VAR_3->sy = VAR_3->ay - FUNC_3(VAR_7) * VAR_1;
  }
 } else {
  FUNC_0("DEADZONE\n");
 }
}
