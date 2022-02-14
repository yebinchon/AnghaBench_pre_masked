
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ demoplaying; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_4( const char *VAR_3 ) {
 char *VAR_4;

 VAR_4 = FUNC_2(0);


 if ( VAR_4[0] == '-' ) {
  return;
 }

 if ( VAR_1.demoplaying || VAR_2.state < VAR_0 || VAR_4[0] == '+' ) {
  FUNC_3 ("Unknown command \"%s\"\n", VAR_4);
  return;
 }

 if ( FUNC_1() > 1 ) {
  FUNC_0( VAR_3 );
 } else {
  FUNC_0( VAR_4 );
 }
}
