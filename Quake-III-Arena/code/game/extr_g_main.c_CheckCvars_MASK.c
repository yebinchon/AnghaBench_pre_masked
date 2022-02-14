
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int modificationCount; scalar_t__* string; } ;


 scalar_t__ FUNC_0 (scalar_t__*,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char*) ;

void FUNC_2( void ) {
 static int VAR_1 = -1;

 if ( VAR_0.modificationCount != VAR_1 ) {
  VAR_1 = VAR_0.modificationCount;
  if ( *VAR_0.string && FUNC_0( VAR_0.string, "none" ) ) {
   FUNC_1( "g_needpass", "1" );
  } else {
   FUNC_1( "g_needpass", "0" );
  }
 }
}
