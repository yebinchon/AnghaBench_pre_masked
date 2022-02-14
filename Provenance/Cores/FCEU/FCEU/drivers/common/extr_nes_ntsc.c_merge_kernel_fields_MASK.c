
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nes_ntsc_rgb_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( nes_ntsc_rgb_t* VAR_3 )
{
 int VAR_4;
 for ( VAR_4 = VAR_0; VAR_4; --VAR_4 )
 {
  nes_ntsc_rgb_t VAR_5 = VAR_3 [VAR_0 * 0] + VAR_2;
  nes_ntsc_rgb_t VAR_6 = VAR_3 [VAR_0 * 1] + VAR_2;
  nes_ntsc_rgb_t VAR_7 = VAR_3 [VAR_0 * 2] + VAR_2;

  VAR_3 [VAR_0 * 0] =
    ((VAR_5 + VAR_6 - ((VAR_5 ^ VAR_6) & VAR_1)) >> 1) - VAR_2;
  VAR_3 [VAR_0 * 1] =
    ((VAR_6 + VAR_7 - ((VAR_6 ^ VAR_7) & VAR_1)) >> 1) - VAR_2;
  VAR_3 [VAR_0 * 2] =
    ((VAR_7 + VAR_5 - ((VAR_7 ^ VAR_5) & VAR_1)) >> 1) - VAR_2;
  ++VAR_3;
 }
}
