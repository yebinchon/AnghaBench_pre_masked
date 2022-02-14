
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* shader; int width; } ;
typedef TYPE_1__ shaderInfo_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (char*,char const*) ;

shaderInfo_t *FUNC_5( const char *VAR_3 ) {
 int VAR_4;
 shaderInfo_t *VAR_5;
 char VAR_6[VAR_0];


 FUNC_4( VAR_6, VAR_3 );
 FUNC_3( VAR_6 );


 for ( VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  VAR_5 = &VAR_2[ VAR_4 ];
  if ( !FUNC_2( VAR_6, VAR_5->shader ) ) {
   if ( !VAR_5->width ) {
    FUNC_1( VAR_5 );
   }
   return VAR_5;
  }
 }

 VAR_5 = FUNC_0();
 FUNC_4( VAR_5->shader, VAR_6 );

 FUNC_1( VAR_5 );

 return VAR_5;
}
