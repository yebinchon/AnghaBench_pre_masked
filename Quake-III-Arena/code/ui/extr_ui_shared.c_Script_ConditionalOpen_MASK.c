
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int itemDef_t ;
struct TYPE_2__ {float (* getCVarValue ) (char const*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char**,char const**) ;
 float FUNC_2 (char const*) ;

void FUNC_3(itemDef_t *VAR_1, char **VAR_2) {
 const char *VAR_3;
 const char *VAR_4;
 const char *VAR_5;
 float VAR_6;

 if ( FUNC_1(VAR_2, &VAR_3) && FUNC_1(VAR_2, &VAR_4) && FUNC_1(VAR_2, &VAR_5) ) {
  VAR_6 = VAR_0->getCVarValue( VAR_3 );
  if ( VAR_6 == 0.f ) {
   FUNC_0(VAR_5);
  } else {
   FUNC_0(VAR_4);
  }
 }
}
