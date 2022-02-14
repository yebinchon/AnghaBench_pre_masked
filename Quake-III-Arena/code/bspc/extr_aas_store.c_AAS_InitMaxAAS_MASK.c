
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* winding; struct TYPE_7__* l_next; } ;
typedef TYPE_2__ tmp_face_t ;
struct TYPE_8__ {struct TYPE_8__* l_next; } ;
typedef TYPE_3__ tmp_area_t ;
struct TYPE_10__ {int max_vertexes; int max_edges; int max_edgeindexsize; int max_faces; int max_faceindexsize; int max_areas; int max_areasettings; scalar_t__ max_clusters; scalar_t__ max_portalindexsize; scalar_t__ max_portals; scalar_t__ max_nodes; scalar_t__ max_reachabilitysize; int max_planes; int max_bboxes; } ;
struct TYPE_9__ {int nodes; TYPE_3__* areas; TYPE_2__* faces; } ;
struct TYPE_6__ {scalar_t__ numpoints; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_1(void)
{
 int VAR_4, VAR_5, VAR_6;
 tmp_face_t *VAR_7;
 tmp_area_t *VAR_8;

 VAR_5 = 0;
 VAR_4 = 0;
 for (VAR_7 = VAR_3.faces; VAR_7; VAR_7 = VAR_7->l_next)
 {
  VAR_4++;
  if (VAR_7->winding) VAR_5 += VAR_7->winding->numpoints;
 }

 VAR_6 = 0;
 for (VAR_8 = VAR_3.areas; VAR_8; VAR_8 = VAR_8->l_next)
 {
  VAR_6++;
 }
 VAR_1.max_bboxes = VAR_0;
 VAR_1.max_vertexes = VAR_5 + 1;
 VAR_1.max_planes = VAR_2;
 VAR_1.max_edges = VAR_5 + 1;
 VAR_1.max_edgeindexsize = (VAR_5 + 1) * 3;
 VAR_1.max_faces = VAR_4 + 10;
 VAR_1.max_faceindexsize = (VAR_4 + 10) * 2;
 VAR_1.max_areas = VAR_6 + 10;
 VAR_1.max_areasettings = VAR_6 + 10;
 VAR_1.max_reachabilitysize = 0;
 VAR_1.max_nodes = FUNC_0(VAR_3.nodes) + 10;
 VAR_1.max_portals = 0;
 VAR_1.max_portalindexsize = 0;
 VAR_1.max_clusters = 0;
}
