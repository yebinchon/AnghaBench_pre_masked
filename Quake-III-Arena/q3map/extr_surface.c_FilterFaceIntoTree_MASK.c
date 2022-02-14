
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_8__ {int side; } ;
typedef TYPE_2__ mapDrawSurface_t ;


 int FUNC_0 (int *,int ,TYPE_2__*,int ) ;
 int * FUNC_1 (TYPE_2__*) ;

int FUNC_2( mapDrawSurface_t *VAR_0, tree_t *VAR_1 ) {
 int VAR_2;
 winding_t *VAR_3;

 VAR_3 = FUNC_1( VAR_0 );
 VAR_2 = FUNC_0( VAR_3, VAR_0->side, VAR_0, VAR_1->headnode );

 return VAR_2;
}
