
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ giType; int * world_model; scalar_t__ classname; } ;
typedef TYPE_1__ gitem_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( void ) {
 gitem_t * VAR_2;

 for ( VAR_2 = VAR_1 + 1 ; VAR_2->classname ; VAR_2++ ) {
  if ( VAR_2->giType != VAR_0 ) {
   continue;
  }
  FUNC_0( VAR_2->world_model[0] );
 }
}
