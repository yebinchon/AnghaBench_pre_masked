
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vec4_t ;
typedef int tempcolor ;
struct TYPE_2__ {int scale; int bias; int charset; } ;


 size_t FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (float,float,float,float,float,float,float,float,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_5( int VAR_3, int VAR_4, const char* VAR_5, vec4_t VAR_6, int VAR_7, int VAR_8 )
{
 const char* VAR_9;
 char VAR_10;
 int VAR_11 = VAR_1;
 vec4_t VAR_12;
 float VAR_13;
 float VAR_14;
 float VAR_15;
 float VAR_16;
 float VAR_17;
 float VAR_18;

 if (VAR_4 < -VAR_8)

  return;


 FUNC_4( VAR_6 );

 VAR_13 = VAR_3 * VAR_2.scale + VAR_2.bias;
 VAR_14 = VAR_4 * VAR_2.scale;
 VAR_15 = VAR_7 * VAR_2.scale;
 VAR_16 = VAR_8 * VAR_2.scale;

 VAR_9 = VAR_5;
 while ( *VAR_9 )
 {
  if ( FUNC_1( VAR_9 ) )
  {
   if ( !VAR_11 )
   {
    FUNC_2( VAR_12, VAR_0[FUNC_0(VAR_9[1])], sizeof( VAR_12 ) );
    VAR_12[3] = VAR_6[3];
    FUNC_4( VAR_12 );
   }
   VAR_9 += 2;
   continue;
  }

  VAR_10 = *VAR_9 & 255;
  if (VAR_10 != ' ')
  {
   VAR_17 = (VAR_10>>4)*0.0625;
   VAR_18 = (VAR_10&15)*0.0625;
   FUNC_3( VAR_13, VAR_14, VAR_15, VAR_16, VAR_18, VAR_17, VAR_18 + 0.0625, VAR_17 + 0.0625, VAR_2.charset );
  }

  VAR_13 += VAR_15;
  VAR_9++;
 }

 FUNC_4( ((void*)0) );
}
