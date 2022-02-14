
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int* ip; void* port; void* type; } ;
typedef TYPE_1__ netadr_t ;
typedef int base ;


 void* FUNC_0 (short) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 short VAR_3 ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char*,char*) ;

qboolean FUNC_7( const char *VAR_6, netadr_t *VAR_7 ) {
 qboolean VAR_8;
 char VAR_9[VAR_0];
 char *VAR_10;

 if (!FUNC_5 (VAR_6, "localhost")) {
  FUNC_1 (VAR_7, 0, sizeof(*VAR_7));
  VAR_7->type = VAR_2;
  return VAR_5;
 }


 FUNC_2( VAR_9, VAR_6, sizeof( VAR_9 ) );
 VAR_10 = FUNC_6( VAR_9, ":" );
 if ( VAR_10 ) {
  *VAR_10 = 0;
  VAR_10++;
 }

 VAR_8 = FUNC_3( VAR_9, VAR_7 );

 if ( !VAR_8 ) {
  VAR_7->type = VAR_1;
  return VAR_4;
 }


 if ( VAR_7->ip[0] == 255 && VAR_7->ip[1] == 255 && VAR_7->ip[2] == 255 && VAR_7->ip[3] == 255 ) {
  VAR_7->type = VAR_1;
  return VAR_4;
 }

 if ( VAR_10 ) {
  VAR_7->port = FUNC_0( (short)FUNC_4( VAR_10 ) );
 } else {
  VAR_7->port = FUNC_0( VAR_3 );
 }

 return VAR_5;
}
