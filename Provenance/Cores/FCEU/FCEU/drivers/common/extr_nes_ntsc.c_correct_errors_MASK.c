
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nes_ntsc_rgb_t ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1( nes_ntsc_rgb_t VAR_3, nes_ntsc_rgb_t* VAR_4 )
{
 int VAR_5;
 for ( VAR_5 = VAR_1; VAR_5; --VAR_5 )
 {
  unsigned VAR_6;
  for ( VAR_6 = 0; VAR_6 < VAR_2 / 2; VAR_6++ )
  {
   nes_ntsc_rgb_t VAR_7 = VAR_3 -
     VAR_4 [VAR_6 ] - VAR_4 [(VAR_6+12)%14+14] - VAR_4 [(VAR_6+10)%14+28] -
     VAR_4 [VAR_6 + 7] - VAR_4 [VAR_6 + 5 +14] - VAR_4 [VAR_6 + 3 +28];
   FUNC_0( VAR_6+3+28, VAR_6+5+14, VAR_6+7 );
  }
  VAR_4 += VAR_0 * VAR_2;
 }
}
