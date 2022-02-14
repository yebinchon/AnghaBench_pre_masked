
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ entityString; scalar_t__ entityParsePoint; } ;


 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

qboolean FUNC_2( char *VAR_3, int VAR_4 ) {
 const char *VAR_5;

 VAR_5 = FUNC_0( &VAR_2.entityParsePoint );
 FUNC_1( VAR_3, VAR_5, VAR_4 );
 if ( !VAR_2.entityParsePoint || !VAR_5[0] ) {
  VAR_2.entityParsePoint = VAR_2.entityString;
  return VAR_0;
 } else {
  return VAR_1;
 }
}
