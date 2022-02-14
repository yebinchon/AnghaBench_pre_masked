
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
typedef int aas_vertex_t ;
typedef int aas_reachability_t ;
typedef int aas_portalindex_t ;
typedef int aas_portal_t ;
typedef int aas_plane_t ;
typedef int aas_node_t ;
struct TYPE_6__ {scalar_t__ ident; scalar_t__ version; scalar_t__ bspchecksum; TYPE_1__* lumps; } ;
typedef TYPE_2__ aas_header_t ;
typedef int aas_faceindex_t ;
typedef int aas_face_t ;
typedef int aas_edgeindex_t ;
typedef int aas_edge_t ;
typedef int aas_cluster_t ;
typedef int aas_bbox_t ;
typedef int aas_areasettings_t ;
typedef int aas_area_t ;
struct TYPE_7__ {int numbboxes; int numvertexes; int numplanes; int numedges; int edgeindexsize; int numfaces; int faceindexsize; int numareas; int numareasettings; int reachabilitysize; int numnodes; int numportals; int portalindexsize; int numclusters; int loaded; int * clusters; int * portalindex; int * portals; int * nodes; int * reachability; int * areasettings; int * areas; int * faceindex; int * faces; int * edgeindex; int * edges; int * planes; int * vertexes; int * bboxes; void* bspchecksum; } ;
struct TYPE_5__ {scalar_t__ fileofs; scalar_t__ filelen; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 () ;
 void* FUNC_5 (scalar_t__) ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_9 (int *,int,int ) ;

qboolean FUNC_10(char *VAR_19, int VAR_20, int VAR_21)
{
 FILE *VAR_22;
 aas_header_t VAR_23;
 int VAR_24, VAR_25;


 FUNC_1();

 VAR_22 = FUNC_7(VAR_19, "rb");
 if (!VAR_22)
 {
  FUNC_2("can't open %s\n", VAR_19);
  return 0;
 }

 if (FUNC_9(VAR_22, VAR_20, VAR_17))
 {
  FUNC_2("can't seek to file %s\n");
  FUNC_6(VAR_22);
  return 0;
 }

 if (FUNC_8(&VAR_23, sizeof(aas_header_t), 1, VAR_22) != 1)
 {
  FUNC_2("can't read header of file %s\n", VAR_19);
  FUNC_6(VAR_22);
  return 0;
 }

 VAR_23.ident = FUNC_5(VAR_23.ident);
 if (VAR_23.ident != VAR_0)
 {
  FUNC_2("%s is not an AAS file\n", VAR_19);
  FUNC_6(VAR_22);
  return 0;
 }

 VAR_23.version = FUNC_5(VAR_23.version);
 if (VAR_23.version != VAR_16 && VAR_23.version != VAR_15)
 {
  FUNC_2("%s is version %i, not %i\n", VAR_19, VAR_23.version, VAR_15);
  FUNC_6(VAR_22);
  return 0;
 }

 if (VAR_23.version == VAR_15)
 {
  FUNC_0((unsigned char *) &VAR_23 + 8, sizeof(aas_header_t) - 8);
 }
 VAR_18.bspchecksum = FUNC_5(VAR_23.bspchecksum);


 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_3].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_3].filelen);
 VAR_18.bboxes = (aas_bbox_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.bboxes);
 if (!VAR_18.bboxes) return 0;
 VAR_18.numbboxes = VAR_25 / sizeof(aas_bbox_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_14].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_14].filelen);
 VAR_18.vertexes = (aas_vertex_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.vertexes);
 if (!VAR_18.vertexes) return 0;
 VAR_18.numvertexes = VAR_25 / sizeof(aas_vertex_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_10].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_10].filelen);
 VAR_18.planes = (aas_plane_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.planes);
 if (!VAR_18.planes) return 0;
 VAR_18.numplanes = VAR_25 / sizeof(aas_plane_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_6].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_6].filelen);
 VAR_18.edges = (aas_edge_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.edges);
 if (!VAR_18.edges) return 0;
 VAR_18.numedges = VAR_25 / sizeof(aas_edge_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_5].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_5].filelen);
 VAR_18.edgeindex = (aas_edgeindex_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.edgeindex);
 if (!VAR_18.edgeindex) return 0;
 VAR_18.edgeindexsize = VAR_25 / sizeof(aas_edgeindex_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_8].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_8].filelen);
 VAR_18.faces = (aas_face_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.faces);
 if (!VAR_18.faces) return 0;
 VAR_18.numfaces = VAR_25 / sizeof(aas_face_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_7].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_7].filelen);
 VAR_18.faceindex = (aas_faceindex_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.faceindex);
 if (!VAR_18.faceindex) return 0;
 VAR_18.faceindexsize = VAR_25 / sizeof(int);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_1].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_1].filelen);
 VAR_18.areas = (aas_area_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.areas);
 if (!VAR_18.areas) return 0;
 VAR_18.numareas = VAR_25 / sizeof(aas_area_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_2].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_2].filelen);
 VAR_18.areasettings = (aas_areasettings_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.areasettings);
 if (!VAR_18.areasettings) return 0;
 VAR_18.numareasettings = VAR_25 / sizeof(aas_areasettings_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_13].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_13].filelen);
 VAR_18.reachability = (aas_reachability_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.reachability);
 if (VAR_25 && !VAR_18.reachability) return 0;
 VAR_18.reachabilitysize = VAR_25 / sizeof(aas_reachability_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_9].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_9].filelen);
 VAR_18.nodes = (aas_node_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.nodes);
 if (!VAR_18.nodes) return 0;
 VAR_18.numnodes = VAR_25 / sizeof(aas_node_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_12].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_12].filelen);
 VAR_18.portals = (aas_portal_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.portals);
 if (VAR_25 && !VAR_18.portals) return 0;
 VAR_18.numportals = VAR_25 / sizeof(aas_portal_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_11].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_11].filelen);
 VAR_18.portalindex = (aas_portalindex_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.portalindex);
 if (VAR_25 && !VAR_18.portalindex) return 0;
 VAR_18.portalindexsize = VAR_25 / sizeof(aas_portalindex_t);

 VAR_24 = VAR_20 + FUNC_5(VAR_23.lumps[VAR_4].fileofs);
 VAR_25 = FUNC_5(VAR_23.lumps[VAR_4].filelen);
 VAR_18.clusters = (aas_cluster_t *) FUNC_3(VAR_22, VAR_24, VAR_25, VAR_18.clusters);
 if (VAR_25 && !VAR_18.clusters) return 0;
 VAR_18.numclusters = VAR_25 / sizeof(aas_cluster_t);

 FUNC_4();

 VAR_18.loaded = 1;

 FUNC_6(VAR_22);
 return 1;
}
