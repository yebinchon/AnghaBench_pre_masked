
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wait; int use; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (char*,char*,int*) ;
 int VAR_0 ;

void FUNC_1( gentity_t *VAR_1 ) {

 if ( !FUNC_0( "delay", "0", &VAR_1->wait ) ) {
  FUNC_0( "wait", "1", &VAR_1->wait );
 }

 if ( !VAR_1->wait ) {
  VAR_1->wait = 1;
 }
 VAR_1->use = VAR_0;
}
