
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int qboolean ;
typedef int color ;
struct TYPE_2__ {int (* SetColor ) (float*) ;} ;


 size_t FUNC_0 (char const) ;
 int FUNC_1 (float*,int ,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int,int,char const) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (float*) ;

void FUNC_7( int VAR_3, int VAR_4, const char *VAR_5, float *VAR_6, qboolean VAR_7 ) {
 vec4_t VAR_8;
 const char *VAR_9;
 int VAR_10;


 VAR_9 = VAR_5;
 VAR_10 = VAR_3;
 VAR_2.SetColor( VAR_6 );
 while ( *VAR_9 ) {
  if ( FUNC_2( VAR_9 ) ) {
   if ( !VAR_7 ) {
    FUNC_1( VAR_8, VAR_1[FUNC_0(*(VAR_9+1))], sizeof( VAR_8 ) );
    VAR_8[3] = VAR_6[3];
    VAR_2.SetColor( VAR_8 );
   }
   VAR_9 += 2;
   continue;
  }
  FUNC_3( VAR_10, VAR_4, *VAR_9 );
  VAR_10 += VAR_0;
  VAR_9++;
 }
 VAR_2.SetColor( ((void*)0) );
}
