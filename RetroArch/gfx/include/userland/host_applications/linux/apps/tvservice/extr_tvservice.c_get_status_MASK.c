
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ param1; int property; } ;
struct TYPE_8__ {float frame_rate; scalar_t__ scan_mode; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_9__ {TYPE_1__ hdmi; } ;
struct TYPE_10__ {int state; TYPE_2__ display; } ;
typedef TYPE_3__ TV_DISPLAY_STATE_T ;
typedef TYPE_4__ HDMI_PROPERTY_PARAM_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4( void )
{
   TV_DISPLAY_STATE_T VAR_2;
   if( FUNC_2( &VAR_2 ) == 0) {


      HDMI_PROPERTY_PARAM_T VAR_3;
      VAR_3.property = VAR_1;
      FUNC_3(&VAR_3);
      float VAR_4 = VAR_3.param1 == VAR_0 ? VAR_2.display.hdmi.frame_rate * (1000.0f/1001.0f) : VAR_2.display.hdmi.frame_rate;

      if(VAR_2.display.hdmi.width && VAR_2.display.hdmi.height) {
         FUNC_0( "state 0x%x [%s], %ux%u @ %.2fHz, %s", VAR_2.state,
                  FUNC_1(&VAR_2),
                  VAR_2.display.hdmi.width, VAR_2.display.hdmi.height,
                  VAR_4,
                  VAR_2.display.hdmi.scan_mode ? "interlaced" : "progressive" );
      } else {
         FUNC_0( "state 0x%x [%s]", VAR_2.state, FUNC_1(&VAR_2));
      }
   } else {
      FUNC_0( "Error getting current display state");
   }
  return 0;
}
