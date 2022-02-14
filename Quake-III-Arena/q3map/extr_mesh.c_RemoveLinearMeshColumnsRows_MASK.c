
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int width; int height; TYPE_2__* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_10__ {int xyz; } ;
typedef TYPE_2__ drawVert_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

mesh_t *FUNC_5( mesh_t *VAR_3 ) {
 int VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10;
 mesh_t VAR_11;
 drawVert_t VAR_12[VAR_0][VAR_0];

 VAR_11.width = VAR_3->width;
 VAR_11.height = VAR_3->height;

 for ( VAR_4 = 0 ; VAR_4 < VAR_3->width ; VAR_4++ ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_3->height ; VAR_5++ ) {
   VAR_12[VAR_5][VAR_4] = VAR_3->verts[VAR_5*VAR_3->width+VAR_4];
  }
 }

 for ( VAR_5 = 1 ; VAR_5 < VAR_11.width - 1; VAR_5++ ) {
  VAR_8 = 0;
  for ( VAR_4 = 0 ; VAR_4 < VAR_11.height ; VAR_4++ ) {
   FUNC_1(VAR_12[VAR_4][VAR_5].xyz, VAR_12[VAR_4][VAR_5-1].xyz, VAR_12[VAR_4][VAR_5+1].xyz, VAR_9);
   FUNC_3(VAR_12[VAR_4][VAR_5].xyz, VAR_9, VAR_10);
   VAR_7 = FUNC_2(VAR_10);
   if (VAR_7 > VAR_8) {
    VAR_8 = VAR_7;
   }
  }
  if (VAR_8 < 0.1)
  {
   VAR_11.width--;
   for ( VAR_4 = 0 ; VAR_4 < VAR_11.height ; VAR_4++ ) {
    for (VAR_6 = VAR_5; VAR_6 < VAR_11.width; VAR_6++) {
     VAR_12[VAR_4][VAR_6] = VAR_12[VAR_4][VAR_6+1];
    }
   }
   for (VAR_6 = VAR_5; VAR_6 < VAR_11.width; VAR_6++) {
    VAR_2[VAR_6] = VAR_2[VAR_6+1];
   }
   VAR_5--;
  }
 }
 for ( VAR_5 = 1 ; VAR_5 < VAR_11.height - 1; VAR_5++ ) {
  VAR_8 = 0;
  for ( VAR_4 = 0 ; VAR_4 < VAR_11.width ; VAR_4++ ) {
   FUNC_1(VAR_12[VAR_5][VAR_4].xyz, VAR_12[VAR_5-1][VAR_4].xyz, VAR_12[VAR_5+1][VAR_4].xyz, VAR_9);
   FUNC_3(VAR_12[VAR_5][VAR_4].xyz, VAR_9, VAR_10);
   VAR_7 = FUNC_2(VAR_10);
   if (VAR_7 > VAR_8) {
    VAR_8 = VAR_7;
   }
  }
  if (VAR_8 < 0.1)
  {
   VAR_11.height--;
   for ( VAR_4 = 0 ; VAR_4 < VAR_11.width ; VAR_4++ ) {
    for (VAR_6 = VAR_5; VAR_6 < VAR_11.height; VAR_6++) {
     VAR_12[VAR_6][VAR_4] = VAR_12[VAR_6+1][VAR_4];
    }
   }
   for (VAR_6 = VAR_5; VAR_6 < VAR_11.height; VAR_6++) {
    VAR_1[VAR_6] = VAR_1[VAR_6+1];
   }
   VAR_5--;
  }
 }

 VAR_11.verts = &VAR_12[0][0];
 for ( VAR_4 = 1 ; VAR_4 < VAR_11.height ; VAR_4++ ) {
  FUNC_4( &VAR_11.verts[VAR_4*VAR_11.width], VAR_12[VAR_4], VAR_11.width * sizeof(drawVert_t) );
 }

 return FUNC_0(&VAR_11);
}
