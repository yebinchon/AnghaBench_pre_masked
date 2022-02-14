
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg_t ;


 int FUNC_0 (int *,int,int) ;

void FUNC_1( msg_t *VAR_0, float VAR_1 ) {
 union {
  float f;
  int l;
 } VAR_2;

 VAR_2.f = VAR_1;
 FUNC_0( VAR_0, VAR_2.l, 32 );
}
