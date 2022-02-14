
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int width; int height; TYPE_2__* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_13__ {int xyz; } ;
typedef TYPE_2__ drawVert_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,float,TYPE_2__*) ;
 int VAR_0 ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

mesh_t *FUNC_6( mesh_t *VAR_3, float VAR_4, int VAR_5, int VAR_6[], int VAR_7[]) {
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15;
 float VAR_16, VAR_17, VAR_18;
 mesh_t VAR_19;
 drawVert_t VAR_20[VAR_0][VAR_0];

 VAR_19.width = VAR_3->width;
 VAR_19.height = VAR_3->height;

 for ( VAR_8 = 0 ; VAR_8 < VAR_3->width ; VAR_8++ ) {
  for ( VAR_9 = 0 ; VAR_9 < VAR_3->height ; VAR_9++ ) {
   VAR_20[VAR_9][VAR_8] = VAR_3->verts[VAR_9*VAR_3->width+VAR_8];
  }
 }

 if (VAR_5 > VAR_0)
  FUNC_1("SubdivideMeshQuads: maxsize > MAX_EXPANDED_AXIS");



 VAR_13 = (VAR_5 - VAR_3->width) / (VAR_3->width - 1);

 for ( VAR_11 = 0, VAR_9 = 0 ; VAR_11 < VAR_3->width - 1; VAR_11++, VAR_9 += VAR_14 + 1) {
  VAR_17 = 0;
  for ( VAR_8 = 0 ; VAR_8 < VAR_19.height ; VAR_8++ ) {
   FUNC_4(VAR_20[VAR_8][VAR_9+1].xyz, VAR_20[VAR_8][VAR_9].xyz, VAR_15);
   VAR_16 = FUNC_3( VAR_15 );
   if (VAR_16 > VAR_17) {
    VAR_17 = VAR_16;
   }
  }

  VAR_14 = (int) (VAR_17 / VAR_4);
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;

  VAR_6[VAR_11] = VAR_14 + 1;
  if (VAR_14 <= 0)
   continue;

  VAR_19.width += VAR_14;

  for ( VAR_10 = VAR_19.width - 1; VAR_10 >= VAR_9 + VAR_14; VAR_10-- ) {
   VAR_2[VAR_10] = VAR_2[VAR_10-VAR_14];
  }
  for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++) {
   VAR_2[VAR_9+VAR_10] = VAR_2[VAR_9];
  }

  for ( VAR_8 = 0 ; VAR_8 < VAR_19.height ; VAR_8++ ) {
   for ( VAR_10 = VAR_19.width - 1 ; VAR_10 > VAR_9 + VAR_14; VAR_10-- ) {
    VAR_20[VAR_8][VAR_10] = VAR_20[VAR_8][VAR_10-VAR_14];
   }
   for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++)
   {
    VAR_18 = (float) VAR_10 / (VAR_14 + 1);
    FUNC_2(&VAR_20[VAR_8][VAR_9], &VAR_20[VAR_8][VAR_9+VAR_14+1], VAR_18, &VAR_20[VAR_8][VAR_9+VAR_10]);
   }
  }
 }

 VAR_13 = (VAR_5 - VAR_3->height) / (VAR_3->height - 1);

 for ( VAR_12 = 0, VAR_9 = 0 ; VAR_12 < VAR_3->height - 1; VAR_12++, VAR_9 += VAR_14 + 1) {
  VAR_17 = 0;
  for ( VAR_8 = 0 ; VAR_8 < VAR_19.width ; VAR_8++ ) {
   FUNC_4(VAR_20[VAR_9+1][VAR_8].xyz, VAR_20[VAR_9][VAR_8].xyz, VAR_15);
   VAR_16 = FUNC_3( VAR_15 );
   if (VAR_16 > VAR_17) {
    VAR_17 = VAR_16;
   }
  }

  VAR_14 = (int) (VAR_17 / VAR_4);
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;

  VAR_7[VAR_12] = VAR_14 + 1;
  if (VAR_14 <= 0)
   continue;

  VAR_19.height += VAR_14;

  for ( VAR_10 = VAR_19.height - 1; VAR_10 >= VAR_9 + VAR_14; VAR_10-- ) {
   VAR_1[VAR_10] = VAR_1[VAR_10-VAR_14];
  }
  for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++) {
   VAR_1[VAR_9+VAR_10] = VAR_1[VAR_9];
  }

  for ( VAR_8 = 0 ; VAR_8 < VAR_19.width ; VAR_8++ ) {
   for ( VAR_10 = VAR_19.height - 1 ; VAR_10 > VAR_9 + VAR_14; VAR_10-- ) {
    VAR_20[VAR_10][VAR_8] = VAR_20[VAR_10-VAR_14][VAR_8];
   }
   for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++)
   {
    VAR_18 = (float) VAR_10 / (VAR_14 + 1);
    FUNC_2(&VAR_20[VAR_9][VAR_8], &VAR_20[VAR_9+VAR_14+1][VAR_8], VAR_18, &VAR_20[VAR_9+VAR_10][VAR_8]);
   }
  }
 }


 VAR_19.verts = &VAR_20[0][0];
 for ( VAR_8 = 1 ; VAR_8 < VAR_19.height ; VAR_8++ ) {
  FUNC_5( &VAR_19.verts[VAR_8*VAR_19.width], VAR_20[VAR_8], VAR_19.width * sizeof(drawVert_t) );
 }

 return FUNC_0(&VAR_19);
}
