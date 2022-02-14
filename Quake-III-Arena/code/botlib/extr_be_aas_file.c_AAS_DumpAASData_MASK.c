
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* savefile; void* initialized; void* loaded; scalar_t__ numclusters; int * clusters; scalar_t__ portalindexsize; int * portalindex; scalar_t__ numportals; int * portals; int * nodes; scalar_t__ numnodes; int * reachability; scalar_t__ reachabilitysize; int * areasettings; scalar_t__ numareasettings; int * areas; scalar_t__ numareas; int * faceindex; scalar_t__ faceindexsize; int * faces; scalar_t__ numfaces; int * edgeindex; scalar_t__ edgeindexsize; int * edges; scalar_t__ numedges; int * planes; scalar_t__ numplanes; int * vertexes; scalar_t__ numvertexes; int * bboxes; scalar_t__ numbboxes; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 void* VAR_1 ;

void FUNC_1(void)
{
 VAR_0.numbboxes = 0;
 if (VAR_0.bboxes) FUNC_0(VAR_0.bboxes);
 VAR_0.bboxes = ((void*)0);
 VAR_0.numvertexes = 0;
 if (VAR_0.vertexes) FUNC_0(VAR_0.vertexes);
 VAR_0.vertexes = ((void*)0);
 VAR_0.numplanes = 0;
 if (VAR_0.planes) FUNC_0(VAR_0.planes);
 VAR_0.planes = ((void*)0);
 VAR_0.numedges = 0;
 if (VAR_0.edges) FUNC_0(VAR_0.edges);
 VAR_0.edges = ((void*)0);
 VAR_0.edgeindexsize = 0;
 if (VAR_0.edgeindex) FUNC_0(VAR_0.edgeindex);
 VAR_0.edgeindex = ((void*)0);
 VAR_0.numfaces = 0;
 if (VAR_0.faces) FUNC_0(VAR_0.faces);
 VAR_0.faces = ((void*)0);
 VAR_0.faceindexsize = 0;
 if (VAR_0.faceindex) FUNC_0(VAR_0.faceindex);
 VAR_0.faceindex = ((void*)0);
 VAR_0.numareas = 0;
 if (VAR_0.areas) FUNC_0(VAR_0.areas);
 VAR_0.areas = ((void*)0);
 VAR_0.numareasettings = 0;
 if (VAR_0.areasettings) FUNC_0(VAR_0.areasettings);
 VAR_0.areasettings = ((void*)0);
 VAR_0.reachabilitysize = 0;
 if (VAR_0.reachability) FUNC_0(VAR_0.reachability);
 VAR_0.reachability = ((void*)0);
 VAR_0.numnodes = 0;
 if (VAR_0.nodes) FUNC_0(VAR_0.nodes);
 VAR_0.nodes = ((void*)0);
 VAR_0.numportals = 0;
 if (VAR_0.portals) FUNC_0(VAR_0.portals);
 VAR_0.portals = ((void*)0);
 VAR_0.numportals = 0;
 if (VAR_0.portalindex) FUNC_0(VAR_0.portalindex);
 VAR_0.portalindex = ((void*)0);
 VAR_0.portalindexsize = 0;
 if (VAR_0.clusters) FUNC_0(VAR_0.clusters);
 VAR_0.clusters = ((void*)0);
 VAR_0.numclusters = 0;

 VAR_0.loaded = VAR_1;
 VAR_0.initialized = VAR_1;
 VAR_0.savefile = VAR_1;
}
