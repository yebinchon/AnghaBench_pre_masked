
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int contents; struct TYPE_8__** children; TYPE_3__* plane; } ;
typedef TYPE_2__ mnode_t ;
struct TYPE_9__ {float dist; int normal; } ;
typedef TYPE_3__ cplane_t ;
struct TYPE_11__ {int (* Error ) (int ,char*) ;} ;
struct TYPE_10__ {TYPE_1__* world; } ;
struct TYPE_7__ {TYPE_2__* nodes; } ;


 float FUNC_0 (int const,int ) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static mnode_t *FUNC_2( const vec3_t VAR_3 ) {
 mnode_t *VAR_4;
 float VAR_5;
 cplane_t *VAR_6;

 if ( !VAR_2.world ) {
  VAR_1.Error (VAR_0, "R_PointInLeaf: bad model");
 }

 VAR_4 = VAR_2.world->nodes;
 while( 1 ) {
  if (VAR_4->contents != -1) {
   break;
  }
  VAR_6 = VAR_4->plane;
  VAR_5 = FUNC_0 (VAR_3,VAR_6->normal) - VAR_6->dist;
  if (VAR_5 > 0) {
   VAR_4 = VAR_4->children[0];
  } else {
   VAR_4 = VAR_4->children[1];
  }
 }

 return VAR_4;
}
