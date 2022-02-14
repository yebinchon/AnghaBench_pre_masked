
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numclusters; int * clusters; scalar_t__ portalindexsize; int * portalindex; scalar_t__ numportals; int * portals; scalar_t__ numnodes; int * nodes; scalar_t__ reachabilitysize; int * reachability; scalar_t__ numareasettings; int * areasettings; scalar_t__ numareas; int * areas; scalar_t__ faceindexsize; int * faceindex; scalar_t__ numfaces; int * faces; scalar_t__ edgeindexsize; int * edgeindex; scalar_t__ numedges; int * edges; scalar_t__ numplanes; int * planes; scalar_t__ numvertexes; int * vertexes; scalar_t__ numbboxes; int * bboxes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_3(void)
{

 if (VAR_3.bboxes) FUNC_0(VAR_3.bboxes);
 VAR_3.bboxes = ((void*)0);
 VAR_3.numbboxes = 0;

 if (VAR_3.vertexes) FUNC_0(VAR_3.vertexes);
 VAR_3.vertexes = ((void*)0);
 VAR_3.numvertexes = 0;

 if (VAR_3.planes) FUNC_0(VAR_3.planes);
 VAR_3.planes = ((void*)0);
 VAR_3.numplanes = 0;

 if (VAR_3.edges) FUNC_0(VAR_3.edges);
 VAR_3.edges = ((void*)0);
 VAR_3.numedges = 0;

 if (VAR_3.edgeindex) FUNC_0(VAR_3.edgeindex);
 VAR_3.edgeindex = ((void*)0);
 VAR_3.edgeindexsize = 0;

 if (VAR_3.faces) FUNC_0(VAR_3.faces);
 VAR_3.faces = ((void*)0);
 VAR_3.numfaces = 0;

 if (VAR_3.faceindex) FUNC_0(VAR_3.faceindex);
 VAR_3.faceindex = ((void*)0);
 VAR_3.faceindexsize = 0;

 if (VAR_3.areas) FUNC_0(VAR_3.areas);
 VAR_3.areas = ((void*)0);
 VAR_3.numareas = 0;

 if (VAR_3.areasettings) FUNC_0(VAR_3.areasettings);
 VAR_3.areasettings = ((void*)0);
 VAR_3.numareasettings = 0;

 if (VAR_3.reachability) FUNC_0(VAR_3.reachability);
 VAR_3.reachability = ((void*)0);
 VAR_3.reachabilitysize = 0;

 if (VAR_3.nodes) FUNC_0(VAR_3.nodes);
 VAR_3.nodes = ((void*)0);
 VAR_3.numnodes = 0;

 if (VAR_3.portals) FUNC_0(VAR_3.portals);
 VAR_3.portals = ((void*)0);
 VAR_3.numportals = 0;

 if (VAR_3.portalindex) FUNC_0(VAR_3.portalindex);
 VAR_3.portalindex = ((void*)0);
 VAR_3.portalindexsize = 0;

 if (VAR_3.clusters) FUNC_0(VAR_3.clusters);
 VAR_3.clusters = ((void*)0);
 VAR_3.numclusters = 0;

 FUNC_1("freed ");
 FUNC_2(VAR_4);
 FUNC_1(" of AAS memory\n");
 VAR_4 = 0;

 if (VAR_2) FUNC_0(VAR_2);
 VAR_2 = ((void*)0);
 if (VAR_1) FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
 if (VAR_0) FUNC_0(VAR_0);
 VAR_0 = ((void*)0);
}
