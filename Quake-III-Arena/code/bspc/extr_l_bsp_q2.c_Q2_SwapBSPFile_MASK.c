
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ qboolean ;
struct TYPE_20__ {int firstface; int numfaces; int headnode; void** origin; void** maxs; void** mins; } ;
typedef TYPE_1__ dmodel_t ;
struct TYPE_27__ {int lightofs; int firstedge; void* numedges; void* side; void* planenum; void* texinfo; } ;
struct TYPE_26__ {int contents; void* numleafbrushes; void* firstleafbrush; void* numleaffaces; void* firstleafface; void** maxs; void** mins; void* area; void* cluster; } ;
struct TYPE_25__ {int planenum; int* children; void* numfaces; void* firstface; void** maxs; void** mins; } ;
struct TYPE_24__ {int type; void* dist; void** normal; } ;
struct TYPE_23__ {void** point; } ;
struct TYPE_22__ {int numclusters; int** bitofs; } ;
struct TYPE_21__ {int flags; int value; int nexttexinfo; void*** vecs; } ;
struct TYPE_19__ {int portalnum; int otherarea; } ;
struct TYPE_18__ {int numareaportals; int firstareaportal; } ;
struct TYPE_17__ {int firstside; int numsides; int contents; } ;
struct TYPE_16__ {void* texinfo; void* planenum; } ;
struct TYPE_15__ {void** v; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 TYPE_14__* VAR_0 ;
 TYPE_13__* VAR_1 ;
 TYPE_12__* VAR_2 ;
 TYPE_11__* VAR_3 ;
 TYPE_10__* VAR_4 ;
 TYPE_9__* VAR_5 ;
 void** VAR_6 ;
 void** VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_6__* VAR_10 ;
 TYPE_5__* VAR_11 ;
 int* VAR_12 ;
 TYPE_4__* VAR_13 ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_2__* VAR_30 ;

void FUNC_3 (qboolean VAR_31)
{
 int VAR_32, VAR_33;
 dmodel_t *VAR_34;



 for (VAR_32=0 ; VAR_32<VAR_24 ; VAR_32++)
 {
  VAR_34 = &VAR_9[VAR_32];

  VAR_34->firstface = FUNC_1 (VAR_34->firstface);
  VAR_34->numfaces = FUNC_1 (VAR_34->numfaces);
  VAR_34->headnode = FUNC_1 (VAR_34->headnode);

  for (VAR_33=0 ; VAR_33<3 ; VAR_33++)
  {
   VAR_34->mins[VAR_33] = FUNC_0(VAR_34->mins[VAR_33]);
   VAR_34->maxs[VAR_33] = FUNC_0(VAR_34->maxs[VAR_33]);
   VAR_34->origin[VAR_33] = FUNC_0(VAR_34->origin[VAR_33]);
  }
 }




 for (VAR_32=0 ; VAR_32<VAR_29 ; VAR_32++)
 {
  for (VAR_33=0 ; VAR_33<3 ; VAR_33++)
   VAR_13[VAR_32].point[VAR_33] = FUNC_0 (VAR_13[VAR_32].point[VAR_33]);
 }




 for (VAR_32=0 ; VAR_32<VAR_26 ; VAR_32++)
 {
  for (VAR_33=0 ; VAR_33<3 ; VAR_33++)
   VAR_11[VAR_32].normal[VAR_33] = FUNC_0 (VAR_11[VAR_32].normal[VAR_33]);
  VAR_11[VAR_32].dist = FUNC_0 (VAR_11[VAR_32].dist);
  VAR_11[VAR_32].type = FUNC_1 (VAR_11[VAR_32].type);
 }




 for (VAR_32=0 ; VAR_32<VAR_28 ; VAR_32++)
 {
  for (VAR_33=0 ; VAR_33<8 ; VAR_33++)
   VAR_30[VAR_32].vecs[0][VAR_33] = FUNC_0 (VAR_30[VAR_32].vecs[0][VAR_33]);
  VAR_30[VAR_32].flags = FUNC_1 (VAR_30[VAR_32].flags);
  VAR_30[VAR_32].value = FUNC_1 (VAR_30[VAR_32].value);
  VAR_30[VAR_32].nexttexinfo = FUNC_1 (VAR_30[VAR_32].nexttexinfo);
 }




 for (VAR_32=0 ; VAR_32<VAR_20 ; VAR_32++)
 {
  VAR_5[VAR_32].texinfo = FUNC_2 (VAR_5[VAR_32].texinfo);
  VAR_5[VAR_32].planenum = FUNC_2 (VAR_5[VAR_32].planenum);
  VAR_5[VAR_32].side = FUNC_2 (VAR_5[VAR_32].side);
  VAR_5[VAR_32].lightofs = FUNC_1 (VAR_5[VAR_32].lightofs);
  VAR_5[VAR_32].firstedge = FUNC_1 (VAR_5[VAR_32].firstedge);
  VAR_5[VAR_32].numedges = FUNC_2 (VAR_5[VAR_32].numedges);
 }




 for (VAR_32=0 ; VAR_32<VAR_25 ; VAR_32++)
 {
  VAR_10[VAR_32].planenum = FUNC_1 (VAR_10[VAR_32].planenum);
  for (VAR_33=0 ; VAR_33<3 ; VAR_33++)
  {
   VAR_10[VAR_32].mins[VAR_33] = FUNC_2 (VAR_10[VAR_32].mins[VAR_33]);
   VAR_10[VAR_32].maxs[VAR_33] = FUNC_2 (VAR_10[VAR_32].maxs[VAR_33]);
  }
  VAR_10[VAR_32].children[0] = FUNC_1 (VAR_10[VAR_32].children[0]);
  VAR_10[VAR_32].children[1] = FUNC_1 (VAR_10[VAR_32].children[1]);
  VAR_10[VAR_32].firstface = FUNC_2 (VAR_10[VAR_32].firstface);
  VAR_10[VAR_32].numfaces = FUNC_2 (VAR_10[VAR_32].numfaces);
 }




 for (VAR_32=0 ; VAR_32<VAR_23 ; VAR_32++)
 {
  VAR_8[VAR_32].contents = FUNC_1 (VAR_8[VAR_32].contents);
  VAR_8[VAR_32].cluster = FUNC_2 (VAR_8[VAR_32].cluster);
  VAR_8[VAR_32].area = FUNC_2 (VAR_8[VAR_32].area);
  for (VAR_33=0 ; VAR_33<3 ; VAR_33++)
  {
   VAR_8[VAR_32].mins[VAR_33] = FUNC_2 (VAR_8[VAR_32].mins[VAR_33]);
   VAR_8[VAR_32].maxs[VAR_33] = FUNC_2 (VAR_8[VAR_32].maxs[VAR_33]);
  }

  VAR_8[VAR_32].firstleafface = FUNC_2 (VAR_8[VAR_32].firstleafface);
  VAR_8[VAR_32].numleaffaces = FUNC_2 (VAR_8[VAR_32].numleaffaces);
  VAR_8[VAR_32].firstleafbrush = FUNC_2 (VAR_8[VAR_32].firstleafbrush);
  VAR_8[VAR_32].numleafbrushes = FUNC_2 (VAR_8[VAR_32].numleafbrushes);
 }




 for (VAR_32=0 ; VAR_32<VAR_22 ; VAR_32++)
  VAR_7[VAR_32] = FUNC_2 (VAR_7[VAR_32]);




 for (VAR_32=0 ; VAR_32<VAR_21 ; VAR_32++)
  VAR_6[VAR_32] = FUNC_2 (VAR_6[VAR_32]);




 for (VAR_32=0 ; VAR_32<VAR_27 ; VAR_32++)
  VAR_12[VAR_32] = FUNC_1 (VAR_12[VAR_32]);




 for (VAR_32=0 ; VAR_32<VAR_19 ; VAR_32++)
 {
  VAR_4[VAR_32].v[0] = FUNC_2 (VAR_4[VAR_32].v[0]);
  VAR_4[VAR_32].v[1] = FUNC_2 (VAR_4[VAR_32].v[1]);
 }




 for (VAR_32=0 ; VAR_32<VAR_17 ; VAR_32++)
 {
  VAR_2[VAR_32].firstside = FUNC_1 (VAR_2[VAR_32].firstside);
  VAR_2[VAR_32].numsides = FUNC_1 (VAR_2[VAR_32].numsides);
  VAR_2[VAR_32].contents = FUNC_1 (VAR_2[VAR_32].contents);
 }




 for (VAR_32=0 ; VAR_32<VAR_16 ; VAR_32++)
 {
  VAR_1[VAR_32].numareaportals = FUNC_1 (VAR_1[VAR_32].numareaportals);
  VAR_1[VAR_32].firstareaportal = FUNC_1 (VAR_1[VAR_32].firstareaportal);
 }




 for (VAR_32=0 ; VAR_32<VAR_15 ; VAR_32++)
 {
  VAR_0[VAR_32].portalnum = FUNC_1 (VAR_0[VAR_32].portalnum);
  VAR_0[VAR_32].otherarea = FUNC_1 (VAR_0[VAR_32].otherarea);
 }




 for (VAR_32=0 ; VAR_32<VAR_18 ; VAR_32++)
 {
  VAR_3[VAR_32].planenum = FUNC_2 (VAR_3[VAR_32].planenum);
  VAR_3[VAR_32].texinfo = FUNC_2 (VAR_3[VAR_32].texinfo);
 }




 if (VAR_31)
  VAR_33 = VAR_14->numclusters;
 else
  VAR_33 = FUNC_1(VAR_14->numclusters);
 VAR_14->numclusters = FUNC_1 (VAR_14->numclusters);
 for (VAR_32=0 ; VAR_32<VAR_33 ; VAR_32++)
 {
  VAR_14->bitofs[VAR_32][0] = FUNC_1 (VAR_14->bitofs[VAR_32][0]);
  VAR_14->bitofs[VAR_32][1] = FUNC_1 (VAR_14->bitofs[VAR_32][1]);
 }
}
