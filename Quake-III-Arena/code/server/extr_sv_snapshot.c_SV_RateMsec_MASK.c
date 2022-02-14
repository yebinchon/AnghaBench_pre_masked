
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rate; } ;
typedef TYPE_1__ client_t ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_1( client_t *VAR_2, int VAR_3 ) {
 int VAR_4;
 int VAR_5;


 if ( VAR_3 > 1500 ) {
  VAR_3 = 1500;
 }
 VAR_4 = VAR_2->rate;
 if ( VAR_1->integer ) {
  if ( VAR_1->integer < 1000 ) {
   FUNC_0( "sv_MaxRate", "1000" );
  }
  if ( VAR_1->integer < VAR_4 ) {
   VAR_4 = VAR_1->integer;
  }
 }
 VAR_5 = ( VAR_3 + VAR_0 ) * 1000 / VAR_4;

 return VAR_5;
}
