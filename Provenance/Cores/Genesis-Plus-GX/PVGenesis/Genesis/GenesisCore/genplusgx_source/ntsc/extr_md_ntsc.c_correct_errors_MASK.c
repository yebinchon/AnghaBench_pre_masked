
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ md_ntsc_rgb_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( md_ntsc_rgb_t VAR_1, md_ntsc_rgb_t* VAR_2 )
{
  unsigned VAR_3;
  for ( VAR_3 = 0; VAR_3 < VAR_0 / 4; VAR_3++ )
  {
    md_ntsc_rgb_t VAR_4 = VAR_1 -
        VAR_2 [VAR_3 ] - VAR_2 [VAR_3 + 2 +16] - VAR_2 [VAR_3 + 4 ] - VAR_2 [VAR_3 + 6 +16] -
        VAR_2 [VAR_3 + 8] - VAR_2 [(VAR_3+10)%16+16] - VAR_2 [(VAR_3+12)%16] - VAR_2 [(VAR_3+14)%16+16];
    FUNC_0( VAR_3 + 6 + 16 );

  }
}
