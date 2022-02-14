
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * delta_angles; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;
struct TYPE_6__ {TYPE_2__ snap; int * viewangles; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;

void FUNC_1 (void) {
 VAR_1.viewangles[VAR_0] = -FUNC_0(VAR_1.snap.ps.delta_angles[VAR_0]);
}
