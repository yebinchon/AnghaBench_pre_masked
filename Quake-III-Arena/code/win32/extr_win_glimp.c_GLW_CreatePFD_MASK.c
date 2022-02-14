
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_7__ {int stereoEnabled; } ;
struct TYPE_6__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_4; int member_18; int member_19; int cColorBits; int cDepthBits; int cStencilBits; int dwFlags; int member_25; int member_24; int member_23; int member_22; int member_21; int member_20; int member_17; int member_16; int member_15; int member_14; int member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_3; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1( PIXELFORMATDESCRIPTOR *VAR_11, int VAR_12, int VAR_13, int VAR_14, qboolean VAR_15 )
{
    PIXELFORMATDESCRIPTOR VAR_16 =
 {
  sizeof(PIXELFORMATDESCRIPTOR),
  1,
  VAR_1 |
  VAR_4 |
  VAR_0,
  VAR_5,
  24,
  0, 0, 0, 0, 0, 0,
  0,
  0,
  0,
  0, 0, 0, 0,
  24,
  8,
  0,
  VAR_2,
  0,
  0, 0, 0
    };

 VAR_16.cColorBits = VAR_12;
 VAR_16.cDepthBits = VAR_13;
 VAR_16.cStencilBits = VAR_14;

 if ( VAR_15 )
 {
  VAR_10.Printf( VAR_6, "...attempting to use stereo\n" );
  VAR_16.dwFlags |= VAR_3;
  VAR_7.stereoEnabled = VAR_9;
 }
 else
 {
  VAR_7.stereoEnabled = VAR_8;
 }

 *VAR_11 = VAR_16;
}
