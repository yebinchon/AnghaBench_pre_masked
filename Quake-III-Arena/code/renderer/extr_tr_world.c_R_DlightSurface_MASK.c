
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int srfTriangles_t ;
typedef int srfSurfaceFace_t ;
typedef int srfGridMesh_t ;
struct TYPE_6__ {scalar_t__* data; } ;
typedef TYPE_2__ msurface_t ;
struct TYPE_5__ {int c_dlightSurfaces; } ;
struct TYPE_7__ {TYPE_1__ pc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_3( msurface_t *VAR_4, int VAR_5 ) {
 if ( *VAR_4->data == VAR_0 ) {
  VAR_5 = FUNC_0( (srfSurfaceFace_t *)VAR_4->data, VAR_5 );
 } else if ( *VAR_4->data == VAR_1 ) {
  VAR_5 = FUNC_1( (srfGridMesh_t *)VAR_4->data, VAR_5 );
 } else if ( *VAR_4->data == VAR_2 ) {
  VAR_5 = FUNC_2( (srfTriangles_t *)VAR_4->data, VAR_5 );
 } else {
  VAR_5 = 0;
 }

 if ( VAR_5 ) {
  VAR_3.pc.c_dlightSurfaces++;
 }

 return VAR_5;
}
