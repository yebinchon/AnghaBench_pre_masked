
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sms_ntsc_rgb_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( sms_ntsc_rgb_t VAR_1, sms_ntsc_rgb_t* VAR_2 )
{
  unsigned VAR_3;
  for ( VAR_3 = 0; VAR_3 < VAR_0 / 2; VAR_3++ )
  {
    sms_ntsc_rgb_t VAR_4 = VAR_1 -
        VAR_2 [VAR_3 ] - VAR_2 [(VAR_3+12)%14+14] - VAR_2 [(VAR_3+10)%14+28] -
        VAR_2 [VAR_3 + 7] - VAR_2 [VAR_3 + 5 +14] - VAR_2 [VAR_3 + 3 +28];
    FUNC_0( VAR_3 + 3 + 28 );
  }
}
