
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vidWidth; int vidHeight; } ;
struct TYPE_4__ {TYPE_1__ glconfig; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0( float *VAR_1, float *VAR_2, float *VAR_3, float *VAR_4 ) {
 float VAR_5;
 float VAR_6;
 VAR_5 = VAR_0.glconfig.vidWidth / 640.0;
 VAR_6 = VAR_0.glconfig.vidHeight / 480.0;
 if ( VAR_1 ) {
  *VAR_1 *= VAR_5;
 }
 if ( VAR_2 ) {
  *VAR_2 *= VAR_6;
 }
 if ( VAR_3 ) {
  *VAR_3 *= VAR_5;
 }
 if ( VAR_4 ) {
  *VAR_4 *= VAR_6;
 }
}
