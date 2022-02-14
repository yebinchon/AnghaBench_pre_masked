
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_t {int ax; } ;


 float FUNC_0 (int ) ;
 double VAR_0 ;
 int FUNC_1 (float) ;

float FUNC_2(struct ir_t* VAR_1) {
 float VAR_2;

 VAR_2 = VAR_1->ax - 512;
 VAR_2 *= VAR_0 / 512.0;

 return FUNC_0( FUNC_1(VAR_2) );
}
