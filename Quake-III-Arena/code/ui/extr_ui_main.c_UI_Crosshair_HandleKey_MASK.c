
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ currentCrosshair; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static qboolean FUNC_2(int VAR_8, float *VAR_9, int VAR_10) {
  if (VAR_10 == VAR_2 || VAR_10 == VAR_3 || VAR_10 == VAR_0 || VAR_10 == VAR_1) {
  if (VAR_10 == VAR_3) {
   VAR_7.currentCrosshair--;
  } else {
   VAR_7.currentCrosshair++;
  }

  if (VAR_7.currentCrosshair >= VAR_4) {
   VAR_7.currentCrosshair = 0;
  } else if (VAR_7.currentCrosshair < 0) {
   VAR_7.currentCrosshair = VAR_4 - 1;
  }
  FUNC_0("cg_drawCrosshair", FUNC_1("%d", VAR_7.currentCrosshair));
  return VAR_6;
 }
 return VAR_5;
}
