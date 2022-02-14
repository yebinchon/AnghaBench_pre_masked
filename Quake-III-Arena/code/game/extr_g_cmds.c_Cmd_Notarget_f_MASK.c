
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3( gentity_t *VAR_2 ) {
 char *VAR_3;

 if ( !FUNC_0( VAR_2 ) ) {
  return;
 }

 VAR_2->flags ^= VAR_0;
 if (!(VAR_2->flags & VAR_0) )
  VAR_3 = "notarget OFF\n";
 else
  VAR_3 = "notarget ON\n";

 FUNC_1( VAR_2-VAR_1, FUNC_2("print \"%s\"", VAR_3));
}
