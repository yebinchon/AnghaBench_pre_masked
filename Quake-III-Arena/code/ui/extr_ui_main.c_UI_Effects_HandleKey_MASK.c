
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int effectsColor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static qboolean FUNC_1(int VAR_8, float *VAR_9, int VAR_10) {
  if (VAR_10 == VAR_2 || VAR_10 == VAR_3 || VAR_10 == VAR_0 || VAR_10 == VAR_1) {

  if (VAR_10 == VAR_3) {
     VAR_6.effectsColor--;
  } else {
     VAR_6.effectsColor++;
  }

    if( VAR_6.effectsColor > 6 ) {
    VAR_6.effectsColor = 0;
  } else if (VAR_6.effectsColor < 0) {
    VAR_6.effectsColor = 6;
  }

   FUNC_0( "color1", VAR_7[VAR_6.effectsColor] );
    return VAR_5;
  }
  return VAR_4;
}
