
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* onnode; int winding; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_9__ {int planenum; int w; } ;
typedef TYPE_3__ bspface_t ;
struct TYPE_7__ {int planenum; } ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ) ;

bspface_t *FUNC_2( portal_t *VAR_0 ) {
 bspface_t *VAR_1;

 VAR_1 = FUNC_0();
 VAR_1->w = FUNC_1( VAR_0->winding );
 VAR_1->planenum = VAR_0->onnode->planenum & ~1;

 return VAR_1;
}
