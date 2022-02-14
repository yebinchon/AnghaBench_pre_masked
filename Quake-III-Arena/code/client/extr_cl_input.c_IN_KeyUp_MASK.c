
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* down; int msec; unsigned int downtime; void* active; } ;
typedef TYPE_1__ kbutton_t ;


 char* FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;

void FUNC_2( kbutton_t *VAR_2 ) {
 int VAR_3;
 char *VAR_4;
 unsigned VAR_5;

 VAR_4 = FUNC_0(1);
 if ( VAR_4[0] ) {
  VAR_3 = FUNC_1(VAR_4);
 } else {

  VAR_2->down[0] = VAR_2->down[1] = 0;
  VAR_2->active = VAR_1;
  return;
 }

 if ( VAR_2->down[0] == VAR_3 ) {
  VAR_2->down[0] = 0;
 } else if ( VAR_2->down[1] == VAR_3 ) {
  VAR_2->down[1] = 0;
 } else {
  return;
 }
 if ( VAR_2->down[0] || VAR_2->down[1] ) {
  return;
 }

 VAR_2->active = VAR_1;


 VAR_4 = FUNC_0(2);
 VAR_5 = FUNC_1(VAR_4);
 if ( VAR_5 ) {
  VAR_2->msec += VAR_5 - VAR_2->downtime;
 } else {
  VAR_2->msec += VAR_0 / 2;
 }

 VAR_2->active = VAR_1;
}
