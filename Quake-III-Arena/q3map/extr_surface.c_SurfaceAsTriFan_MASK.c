
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int firstVert; int numVerts; int numIndexes; scalar_t__ firstIndex; } ;
typedef TYPE_1__ dsurface_t ;
struct TYPE_6__ {int* xyz; int* st; int* lightmap; int* color; int normal; } ;
typedef TYPE_2__ drawVert_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int ,int ) ;
 int* VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_3( dsurface_t *VAR_6 ) {
 int VAR_7;
 int VAR_8[4];
 drawVert_t *VAR_9, *VAR_10;


 if ( VAR_5 == VAR_1 ) {
  FUNC_0( "MAX_MAP_DRAW_VERTS" );
 }
 VAR_9 = &VAR_3[ VAR_5 ];
 VAR_5++;

 VAR_8[0] = VAR_8[1] = VAR_8[2] = VAR_8[3] = 0;

 VAR_10 = VAR_3 + VAR_6->firstVert;
 for (VAR_7 = 0 ; VAR_7 < VAR_6->numVerts ; VAR_7++, VAR_10++ ) {
  FUNC_1( VAR_9->xyz, VAR_10->xyz, VAR_9->xyz );
  VAR_9->st[0] += VAR_10->st[0];
  VAR_9->st[1] += VAR_10->st[1];
  VAR_9->lightmap[0] += VAR_10->lightmap[0];
  VAR_9->lightmap[1] += VAR_10->lightmap[1];

  VAR_8[0] += VAR_10->color[0];
  VAR_8[1] += VAR_10->color[1];
  VAR_8[2] += VAR_10->color[2];
  VAR_8[3] += VAR_10->color[3];
 }

 VAR_9->xyz[0] /= VAR_6->numVerts;
 VAR_9->xyz[1] /= VAR_6->numVerts;
 VAR_9->xyz[2] /= VAR_6->numVerts;

 VAR_9->st[0] /= VAR_6->numVerts;
 VAR_9->st[1] /= VAR_6->numVerts;

 VAR_9->lightmap[0] /= VAR_6->numVerts;
 VAR_9->lightmap[1] /= VAR_6->numVerts;

 VAR_9->color[0] = VAR_8[0] / VAR_6->numVerts;
 VAR_9->color[1] = VAR_8[1] / VAR_6->numVerts;
 VAR_9->color[2] = VAR_8[2] / VAR_6->numVerts;
 VAR_9->color[3] = VAR_8[3] / VAR_6->numVerts;

 FUNC_2((VAR_3+VAR_6->firstVert)->normal, VAR_9->normal );


 if ( VAR_4 + VAR_6->numVerts*3 > VAR_0 ) {
  FUNC_0( "MAX_MAP_DRAWINDEXES" );
 }
 VAR_6->firstIndex = VAR_4;
 VAR_6->numIndexes = VAR_6->numVerts*3;





 for ( VAR_7 = 0 ; VAR_7 < VAR_6->numVerts ; VAR_7++ ) {
  VAR_2[VAR_4++] = VAR_6->numVerts;
  VAR_2[VAR_4++] = VAR_7;
  VAR_2[VAR_4++] = (VAR_7+1) % VAR_6->numVerts;
 }

 VAR_6->numVerts++;
}
