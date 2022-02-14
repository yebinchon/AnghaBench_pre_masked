
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int winding_t ;
struct TYPE_16__ {int type; float photons; float* origin; int radiusByDist; double* normal; int w; void* insolid; int atten_disttype; } ;
typedef TYPE_1__ vsound_t ;
typedef float* vec3_t ;
struct TYPE_15__ {float* normal; void* dist; } ;
struct TYPE_17__ {size_t numplanes; float** points; int cluster; int surfaceNum; struct TYPE_17__* clusterTested; struct TYPE_17__* facetTested; void* type; TYPE_13__ endplane; TYPE_13__ farplane; TYPE_13__* planes; } ;
typedef TYPE_2__ lightvolume_t ;
struct TYPE_18__ {int cluster; } ;
typedef TYPE_3__ dleaf_t ;


 int FUNC_0 (double*,float*,float*) ;
 void* FUNC_1 (float*,float*) ;
 int VAR_0 ;






 float VAR_1 ;
 int FUNC_2 (float*,double*,float*,float) ;
 void* VAR_2 ;
 int FUNC_3 (float*) ;
 int FUNC_4 (TYPE_13__*,float*,float*,float*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (float*,float*,float*) ;
 int FUNC_11 (float*) ;
 int FUNC_12 (float*,float*) ;
 int FUNC_13 (float*) ;
 int FUNC_14 (float*,float,float*,float*) ;
 int FUNC_15 (float*,float,float*) ;
 TYPE_3__* VAR_3 ;
 float FUNC_16 (float) ;
 float VAR_4 ;
 int FUNC_17 (int *,int *,int) ;
 int FUNC_18 (TYPE_2__*,int ,int) ;
 void* VAR_5 ;
 float FUNC_19 (float) ;

void FUNC_20(vsound_t *VAR_6)
{
 lightvolume_t VAR_7;
 dleaf_t *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13[2][4] = {{1, 1, -1, -1}, {1, -1, -1, 1}};
 float VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 vec3_t VAR_19, VAR_20, VAR_21, VAR_22;
 winding_t VAR_23;

 switch(VAR_6->type)
 {
  case 132:
  {







   if ( VAR_6->atten_disttype == VAR_0 )
    VAR_16 = VAR_6->photons * VAR_4;
   else
    VAR_16 = FUNC_19(VAR_6->photons);

   VAR_18 = VAR_1;
   if (VAR_16 > VAR_18)
    VAR_18 = VAR_16;

   VAR_9 = FUNC_3(VAR_6->origin);
   VAR_8 = &VAR_3[VAR_9];
   if (VAR_8->cluster == -1)
   {
    VAR_6->insolid = VAR_5;
    break;
   }

   for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   {

    for (VAR_11 = -1; VAR_11 <= 1; VAR_11 += 2)
    {
     FUNC_18(&VAR_7, 0, sizeof(lightvolume_t));
     VAR_7.numplanes = 0;
     for (VAR_12 = 0; VAR_12 < 4; VAR_12 ++)
     {
      VAR_7.points[VAR_7.numplanes][VAR_10] = VAR_6->origin[VAR_10] + VAR_11 * VAR_18;
      VAR_7.points[VAR_7.numplanes][(VAR_10+1)%3] = VAR_6->origin[(VAR_10+1)%3] + VAR_13[0][VAR_12] * VAR_18;
      VAR_7.points[VAR_7.numplanes][(VAR_10+2)%3] = VAR_6->origin[(VAR_10+2)%3] + VAR_13[1][VAR_12] * VAR_18;
      VAR_7.numplanes++;
     }
     if (VAR_11 >= 0)
     {
      FUNC_12(VAR_7.points[0], VAR_22);
      FUNC_12(VAR_7.points[2], VAR_7.points[0]);
      FUNC_12(VAR_22, VAR_7.points[2]);
     }
     for (VAR_12 = 0; VAR_12 < VAR_7.numplanes; VAR_12++)
     {
      FUNC_4(&VAR_7.planes[VAR_12], VAR_6->origin, VAR_7.points[(VAR_12+1)%VAR_7.numplanes], VAR_7.points[VAR_12]);
     }
     FUNC_12(VAR_6->origin, VAR_22);
     VAR_22[VAR_10] += (float) VAR_11 * VAR_16;
     FUNC_11(VAR_7.endplane.normal);
     VAR_7.endplane.normal[VAR_10] = -VAR_11;
     VAR_7.endplane.dist = FUNC_1(VAR_7.endplane.normal, VAR_22);
     VAR_7.farplane = VAR_7.endplane;
     VAR_7.cluster = VAR_8->cluster;
     VAR_7.surfaceNum = -1;
     VAR_7.type = VAR_2;

     FUNC_18(VAR_7.facetTested, 0, sizeof(VAR_7.facetTested));
     FUNC_18(VAR_7.clusterTested, 0, sizeof(VAR_7.clusterTested));
     FUNC_6(VAR_6, &VAR_7, VAR_8->cluster, 0);
     if (VAR_7.surfaceNum >= 0)
     {
      FUNC_5(VAR_6, &VAR_7);
     }
    }
   }
   break;
  }
  case 131:
  {






   if ( VAR_6->atten_disttype == VAR_0 )
    VAR_16 = VAR_6->photons * VAR_4;
   else
    VAR_16 = FUNC_19(VAR_6->photons);
   VAR_16 *= 2;

   VAR_18 = 4096;
   if (VAR_16 > VAR_18)
    VAR_18 = VAR_16;

   VAR_17 = 8 * VAR_18 * VAR_6->radiusByDist;

   FUNC_18(&VAR_7, 0, sizeof(lightvolume_t));
   VAR_9 = FUNC_3(VAR_6->origin);
   VAR_8 = &VAR_3[VAR_9];
   if (VAR_8->cluster == -1)
   {
    VAR_6->insolid = VAR_5;
    break;
   }

   FUNC_11(VAR_19);
   for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   {
    if (VAR_6->normal[VAR_10] > -0.9 && VAR_6->normal[VAR_10] < 0.9)
    {
     VAR_19[VAR_10] = 1;
     break;
    }
   }
   FUNC_0(VAR_6->normal, VAR_19, VAR_20);
   FUNC_15(VAR_20, VAR_17, VAR_21);
   VAR_7.numplanes = 0;
   VAR_15 = 45;
   for (VAR_14 = VAR_15 / 2; VAR_14 < 360 + VAR_15 / 2; VAR_14 += VAR_15)
   {
    FUNC_2(VAR_7.points[VAR_7.numplanes], VAR_6->normal, VAR_21, VAR_14);
    FUNC_10(VAR_6->origin, VAR_7.points[VAR_7.numplanes], VAR_7.points[VAR_7.numplanes]);
    FUNC_14(VAR_7.points[VAR_7.numplanes], VAR_18, VAR_6->normal, VAR_7.points[VAR_7.numplanes]);
    VAR_7.numplanes++;
   }
   for (VAR_10 = 0; VAR_10 < VAR_7.numplanes; VAR_10++)
   {
    FUNC_4(&VAR_7.planes[VAR_10], VAR_6->origin, VAR_7.points[(VAR_10+1)%VAR_7.numplanes], VAR_7.points[VAR_10]);
   }
   FUNC_14(VAR_6->origin, VAR_16, VAR_6->normal, VAR_22);
   FUNC_12(VAR_6->normal, VAR_7.endplane.normal);
   FUNC_13(VAR_7.endplane.normal);
   VAR_7.endplane.dist = FUNC_1(VAR_7.endplane.normal, VAR_22);
   VAR_7.farplane = VAR_7.endplane;
   VAR_7.cluster = VAR_8->cluster;
   VAR_7.surfaceNum = -1;
   VAR_7.type = VAR_2;

   FUNC_18(VAR_7.facetTested, 0, sizeof(VAR_7.facetTested));
   FUNC_18(VAR_7.clusterTested, 0, sizeof(VAR_7.clusterTested));
   FUNC_6(VAR_6, &VAR_7, VAR_8->cluster, 0);
   if (VAR_7.surfaceNum >= 0)
   {
    FUNC_5(VAR_6, &VAR_7);
   }
   break;
  }
  case 133:
  {
   float VAR_24;
   int VAR_25, VAR_26;
   vec3_t VAR_27, VAR_28[2];

   if ( VAR_6->atten_disttype == VAR_0 )
    VAR_16 = VAR_6->photons * VAR_4;
   else
    VAR_16 = FUNC_19(VAR_6->photons);

   VAR_18 = 4096;
   if (VAR_16 > VAR_18)
    VAR_18 = VAR_16;

   FUNC_14(VAR_6->origin, 0.1, VAR_6->normal, VAR_6->origin);

   VAR_9 = FUNC_3(VAR_6->origin);
   VAR_8 = &VAR_3[VAR_9];
   if (VAR_8->cluster == -1)
   {
    VAR_6->insolid = VAR_5;
    break;
   }
   VAR_24 = 0;
   for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   {
    if (FUNC_16(VAR_6->normal[VAR_10]) > VAR_24)
    {
     VAR_24 = FUNC_16(VAR_6->normal[VAR_10]);
     VAR_26 = VAR_10;
    }
   }
   for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
   {
    FUNC_11(VAR_27);
    VAR_27[(VAR_26 + 1 + VAR_10) % 3] = 1;
    FUNC_0(VAR_6->normal, VAR_27, VAR_28[VAR_10]);
   }

   for (VAR_10 = -1; VAR_10 <= 1; VAR_10 += 2)
   {
    for (VAR_11 = -1; VAR_11 <= 1; VAR_11 += 2)
    {
     for (VAR_25 = 0; VAR_25 < 2; VAR_25++)
     {
      FUNC_18(&VAR_7, 0, sizeof(lightvolume_t));
      VAR_7.numplanes = 3;
      FUNC_14(VAR_6->origin, VAR_10 * VAR_18, VAR_28[0], VAR_7.points[(VAR_10 == VAR_11) == VAR_25]);
      FUNC_14(VAR_6->origin, VAR_11 * VAR_18, VAR_28[1], VAR_7.points[(VAR_10 != VAR_11) == VAR_25]);
      FUNC_14(VAR_6->origin, VAR_18, VAR_6->normal, VAR_7.points[2]);
      for (VAR_12 = 0; VAR_12 < VAR_7.numplanes; VAR_12++)
      {
       FUNC_4(&VAR_7.planes[VAR_12], VAR_6->origin, VAR_7.points[(VAR_12+1)%VAR_7.numplanes], VAR_7.points[VAR_12]);
      }
      FUNC_4(&VAR_7.endplane, VAR_7.points[0], VAR_7.points[1], VAR_7.points[2]);
      FUNC_14(VAR_6->origin, VAR_16, VAR_6->normal, VAR_22);
      VAR_7.endplane.dist = FUNC_1(VAR_7.endplane.normal, VAR_22);
      if (FUNC_1(VAR_6->origin, VAR_7.endplane.normal) - VAR_7.endplane.dist > 0)
       break;
     }
     VAR_7.farplane = VAR_7.endplane;
     VAR_7.cluster = VAR_8->cluster;
     VAR_7.surfaceNum = -1;
     VAR_7.type = VAR_2;

     FUNC_18(VAR_7.facetTested, 0, sizeof(VAR_7.facetTested));
     FUNC_18(VAR_7.clusterTested, 0, sizeof(VAR_7.clusterTested));

     FUNC_6(VAR_6, &VAR_7, VAR_8->cluster, 0);
     if (VAR_7.surfaceNum >= 0)
     {
      FUNC_5(VAR_6, &VAR_7);
     }
    }
   }
   break;
  }
  case 130:
  {





   FUNC_17(&VAR_23, &VAR_6->w, sizeof(winding_t));
   FUNC_8(VAR_6, 0, &VAR_23);
   break;
  }
  case 129:
  {



   FUNC_17(&VAR_23, &VAR_6->w, sizeof(winding_t));
   FUNC_9(VAR_6, 0, &VAR_23);
   break;
  }
  case 128:
  {



   FUNC_17(&VAR_23, &VAR_6->w, sizeof(winding_t));
   FUNC_7(VAR_6, 0, &VAR_23);
   break;
  }
 }
}
