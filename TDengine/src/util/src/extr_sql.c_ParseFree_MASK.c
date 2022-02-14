
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ yyidx; int yystack; } ;
typedef TYPE_1__ yyParser ;


 int FUNC_0 (int ) ;
 void FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(
  void *VAR_0,
  void (*VAR_1)(void*)
){
  yyParser *VAR_2 = (yyParser*)VAR_0;

  if( VAR_2==0 ) return;

  while( VAR_2->yyidx>=0 ) FUNC_2(VAR_2);

  FUNC_0(VAR_2->yystack);

  (*VAR_1)((void*)VAR_2);
}
