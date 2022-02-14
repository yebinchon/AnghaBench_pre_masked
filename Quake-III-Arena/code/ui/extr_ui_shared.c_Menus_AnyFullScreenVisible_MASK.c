
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {scalar_t__ fullScreen; TYPE_1__ window; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_0() {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    if (VAR_0[VAR_5].window.flags & VAR_1 && VAR_0[VAR_5].fullScreen) {
   return VAR_4;
    }
  }
  return VAR_3;
}
