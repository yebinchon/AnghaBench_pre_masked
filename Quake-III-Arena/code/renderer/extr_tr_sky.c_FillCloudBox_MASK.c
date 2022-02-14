
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shader_t ;


 int FUNC_0 (int*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int **** VAR_1 ;
 int ** VAR_2 ;
 int *** VAR_3 ;
 int** VAR_4 ;
 int** VAR_5 ;

__attribute__((used)) static void FUNC_5( const shader_t *VAR_6, int VAR_7 )
{
 int VAR_8;

 for ( VAR_8 =0; VAR_8 < 6; VAR_8++ )
 {
  int VAR_9[2], VAR_10[2];
  int VAR_11, VAR_12;
  float VAR_13;

  if ( 1 )
  {
   VAR_13 = -VAR_0;


   if ( VAR_8 == 5 )
    continue;
  }
  else
  {
   switch( VAR_8 )
   {
   case 0:
   case 1:
   case 2:
   case 3:
    VAR_13 = -1;
    break;
   case 5:

    continue;
   case 4:
   default:
    VAR_13 = -VAR_0;
    break;
   }
  }

  VAR_5[0][VAR_8] = FUNC_3( VAR_5[0][VAR_8] * VAR_0 ) / VAR_0;
  VAR_5[1][VAR_8] = FUNC_3( VAR_5[1][VAR_8] * VAR_0 ) / VAR_0;
  VAR_4[0][VAR_8] = FUNC_2( VAR_4[0][VAR_8] * VAR_0 ) / VAR_0;
  VAR_4[1][VAR_8] = FUNC_2( VAR_4[1][VAR_8] * VAR_0 ) / VAR_0;

  if ( ( VAR_5[0][VAR_8] >= VAR_4[0][VAR_8] ) ||
    ( VAR_5[1][VAR_8] >= VAR_4[1][VAR_8] ) )
  {
   continue;
  }

  VAR_9[0] = FUNC_4( VAR_5[0][VAR_8] * VAR_0 );
  VAR_9[1] = FUNC_4( VAR_5[1][VAR_8] * VAR_0 );
  VAR_10[0] = FUNC_4( VAR_4[0][VAR_8] * VAR_0 );
  VAR_10[1] = FUNC_4( VAR_4[1][VAR_8] * VAR_0 );

  if ( VAR_9[0] < -VAR_0 )
   VAR_9[0] = -VAR_0;
  else if ( VAR_9[0] > VAR_0 )
   VAR_9[0] = VAR_0;
  if ( VAR_9[1] < VAR_13 )
   VAR_9[1] = VAR_13;
  else if ( VAR_9[1] > VAR_0 )
   VAR_9[1] = VAR_0;

  if ( VAR_10[0] < -VAR_0 )
   VAR_10[0] = -VAR_0;
  else if ( VAR_10[0] > VAR_0 )
   VAR_10[0] = VAR_0;
  if ( VAR_10[1] < VAR_13 )
   VAR_10[1] = VAR_13;
  else if ( VAR_10[1] > VAR_0 )
   VAR_10[1] = VAR_0;




  for ( VAR_12 = VAR_9[1]+VAR_0; VAR_12 <= VAR_10[1]+VAR_0; VAR_12++ )
  {
   for ( VAR_11 = VAR_9[0]+VAR_0; VAR_11 <= VAR_10[0]+VAR_0; VAR_11++ )
   {
    FUNC_1( ( VAR_11 - VAR_0 ) / ( float ) VAR_0,
       ( VAR_12 - VAR_0 ) / ( float ) VAR_0,
       VAR_8,
       ((void*)0),
       VAR_2[VAR_12][VAR_11] );

    VAR_3[VAR_12][VAR_11][0] = VAR_1[VAR_8][VAR_12][VAR_11][0];
    VAR_3[VAR_12][VAR_11][1] = VAR_1[VAR_8][VAR_12][VAR_11][1];
   }
  }


  FUNC_0( VAR_9, VAR_10, ( VAR_7 == 0 ) );
 }
}
