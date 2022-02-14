
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int temp; int fan_down_setting; int fan_up_setting; } ;
struct TYPE_3__ {int temp; int casetemp; int downind; int upind; scalar_t__ fan_level; int fan; int thermostat; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_4( void )
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_2( VAR_2.thermostat, 0, 2 );


 if( VAR_3 < 0 )
  return;

 VAR_6 = FUNC_2(VAR_2.fan, 0x0b, 1) << 8;
 VAR_6 |= (FUNC_2(VAR_2.fan, 0x06, 1) & 0x7) << 5;

 if( VAR_0 && VAR_2.temp != VAR_3 ) {
  FUNC_0("CPU-temp: ", VAR_3 );
  FUNC_0(", Case: ", VAR_6 );
  FUNC_1(",  Fan: %d\n", 11-VAR_2.fan_level );
 }
 VAR_2.temp = VAR_3;
 VAR_2.casetemp = VAR_6;

 VAR_5 = -1;
 for( VAR_4=0; (VAR_3 & 0xffff) > VAR_1[VAR_4].temp ; VAR_4++ )
  ;
 if( VAR_4 < VAR_2.downind )
  VAR_5 = VAR_1[VAR_4].fan_down_setting;
 VAR_2.downind = VAR_4;

 for( VAR_4=0; (VAR_3 & 0xffff) >= VAR_1[VAR_4+1].temp ; VAR_4++ )
  ;
 if( VAR_2.upind < VAR_4 )
  VAR_5 = VAR_1[VAR_4].fan_up_setting;
 VAR_2.upind = VAR_4;

 if( VAR_5 >= 0 )
  FUNC_3( VAR_5 );
}
