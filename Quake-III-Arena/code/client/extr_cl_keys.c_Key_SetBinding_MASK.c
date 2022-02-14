
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ binding; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_2( int VAR_3, const char *VAR_4 ) {
 if ( VAR_3 == -1 ) {
  return;
 }


 if ( VAR_2[ VAR_3 ].binding ) {
  FUNC_1( VAR_2[ VAR_3 ].binding );
 }


 VAR_2[VAR_3].binding = FUNC_0( VAR_4 );



 VAR_1 |= VAR_0;
}
