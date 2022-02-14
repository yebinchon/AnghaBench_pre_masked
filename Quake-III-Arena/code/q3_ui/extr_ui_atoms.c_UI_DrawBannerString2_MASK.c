
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_2__ {int scale; int bias; int charsetPropB; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__** VAR_3 ;
 int FUNC_0 (float,float,float,float,float,float,float,float,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2( int VAR_5, int VAR_6, const char* VAR_7, vec4_t VAR_8 )
{
 const char* VAR_9;
 unsigned char VAR_10;
 float VAR_11;
 float VAR_12;
 float VAR_13;
 float VAR_14;
 float VAR_15;
 float VAR_16;
 float VAR_17;
 float VAR_18;


 FUNC_1( VAR_8 );

 VAR_11 = VAR_5 * VAR_4.scale + VAR_4.bias;
 VAR_12 = VAR_6 * VAR_4.scale;

 VAR_9 = VAR_7;
 while ( *VAR_9 )
 {
  VAR_10 = *VAR_9 & 127;
  if ( VAR_10 == ' ' ) {
   VAR_11 += ((float)VAR_2 + (float)VAR_0)* VAR_4.scale;
  }
  else if ( VAR_10 >= 'A' && VAR_10 <= 'Z' ) {
   VAR_10 -= 'A';
   VAR_16 = (float)VAR_3[VAR_10][0] / 256.0f;
   VAR_15 = (float)VAR_3[VAR_10][1] / 256.0f;
   VAR_17 = (float)VAR_3[VAR_10][2] / 256.0f;
   VAR_18 = (float)VAR_1 / 256.0f;
   VAR_13 = (float)VAR_3[VAR_10][2] * VAR_4.scale;
   VAR_14 = (float)VAR_1 * VAR_4.scale;
   FUNC_0( VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_15, VAR_16+VAR_17, VAR_15+VAR_18, VAR_4.charsetPropB );
   VAR_11 += (VAR_13 + (float)VAR_0 * VAR_4.scale);
  }
  VAR_9++;
 }

 FUNC_1( ((void*)0) );
}
