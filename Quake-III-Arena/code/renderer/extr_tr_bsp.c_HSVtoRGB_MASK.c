
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1( float VAR_0, float VAR_1, float VAR_2, float VAR_3[3] )
{
 int VAR_4;
 float VAR_5;
 float VAR_6, VAR_7, VAR_8;

 VAR_0 *= 5;

 VAR_4 = FUNC_0( VAR_0 );
 VAR_5 = VAR_0 - VAR_4;

 VAR_6 = VAR_2 * ( 1 - VAR_1 );
 VAR_7 = VAR_2 * ( 1 - VAR_1 * VAR_5 );
 VAR_8 = VAR_2 * ( 1 - VAR_1 * ( 1 - VAR_5 ) );

 switch ( VAR_4 )
 {
 case 0:
  VAR_3[0] = VAR_2;
  VAR_3[1] = VAR_8;
  VAR_3[2] = VAR_6;
  break;
 case 1:
  VAR_3[0] = VAR_7;
  VAR_3[1] = VAR_2;
  VAR_3[2] = VAR_6;
  break;
 case 2:
  VAR_3[0] = VAR_6;
  VAR_3[1] = VAR_2;
  VAR_3[2] = VAR_8;
  break;
 case 3:
  VAR_3[0] = VAR_6;
  VAR_3[1] = VAR_7;
  VAR_3[2] = VAR_2;
  break;
 case 4:
  VAR_3[0] = VAR_8;
  VAR_3[1] = VAR_6;
  VAR_3[2] = VAR_2;
  break;
 case 5:
  VAR_3[0] = VAR_2;
  VAR_3[1] = VAR_6;
  VAR_3[2] = VAR_7;
  break;
 }
}
