
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* heightLodError; struct TYPE_7__* widthLodError; } ;
typedef TYPE_1__ srfGridMesh_t ;
struct TYPE_8__ {int (* Free ) (TYPE_1__*) ;} ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3( srfGridMesh_t *VAR_1 ) {
 VAR_0.Free(VAR_1->widthLodError);
 VAR_0.Free(VAR_1->heightLodError);
 VAR_0.Free(VAR_1);
}
