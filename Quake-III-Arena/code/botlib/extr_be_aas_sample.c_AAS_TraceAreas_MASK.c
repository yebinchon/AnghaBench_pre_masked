
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {float* start; float* end; int planenum; int nodenum; } ;
typedef TYPE_1__ aas_tracestack_t ;
struct TYPE_7__ {int type; float dist; int normal; } ;
typedef TYPE_2__ aas_plane_t ;
struct TYPE_8__ {size_t planenum; int* children; } ;
typedef TYPE_3__ aas_node_t ;
struct TYPE_10__ {int numareasettings; int numnodes; TYPE_2__* planes; TYPE_3__* nodes; int loaded; } ;
struct TYPE_9__ {int (* Print ) (int ,char*) ;} ;


 float FUNC_0 (float*,int ) ;
 int VAR_0 ;
 int FUNC_1 (float*,float*) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(vec3_t VAR_3, vec3_t VAR_4, int *VAR_5, vec3_t *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 float VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15, VAR_16, VAR_17;
 aas_tracestack_t VAR_18[127];
 aas_tracestack_t *VAR_19;
 aas_node_t *VAR_20;
 aas_plane_t *VAR_21;

 VAR_11 = 0;
 VAR_5[0] = 0;
 if (!VAR_1.loaded) return VAR_11;

 VAR_19 = VAR_18;

 FUNC_1(VAR_3, VAR_19->start);
 FUNC_1(VAR_4, VAR_19->end);
 VAR_19->planenum = 0;

 VAR_19->nodenum = 1;
 VAR_19++;

 while (1)
 {

  VAR_19--;


  if (VAR_19 < VAR_18)
  {
   return VAR_11;
  }

  VAR_9 = VAR_19->nodenum;

  if (VAR_9 < 0)
  {
   VAR_5[VAR_11] = -VAR_9;
   if (VAR_6) FUNC_1(VAR_19->start, VAR_6[VAR_11]);
   VAR_11++;
   if (VAR_11 >= VAR_7) return VAR_11;
   continue;
  }

  if (!VAR_9)
  {
   continue;
  }
  VAR_20 = &VAR_1.nodes[VAR_9];

  FUNC_1(VAR_19->start, VAR_15);

  FUNC_1(VAR_19->end, VAR_16);

  VAR_21 = &VAR_1.planes[VAR_20->planenum];

  switch(VAR_21->type)
  {
   default:
   {
    VAR_12 = FUNC_0(VAR_15, VAR_21->normal) - VAR_21->dist;
    VAR_13 = FUNC_0(VAR_16, VAR_21->normal) - VAR_21->dist;
    break;
   }
  }



  if (VAR_12 > 0 && VAR_13 > 0)
  {


   VAR_19->nodenum = VAR_20->children[0];
   VAR_19++;
   if (VAR_19 >= &VAR_18[127])
   {
    VAR_2.Print(VAR_0, "AAS_TraceAreas: stack overflow\n");
    return VAR_11;
   }
  }


  else if (VAR_12 <= 0 && VAR_13 <= 0)
  {


   VAR_19->nodenum = VAR_20->children[1];
   VAR_19++;
   if (VAR_19 >= &VAR_18[127])
   {
    VAR_2.Print(VAR_0, "AAS_TraceAreas: stack overflow\n");
    return VAR_11;
   }
  }

  else
  {
   VAR_10 = VAR_19->planenum;


   if (VAR_12 < 0) VAR_14 = (VAR_12)/(VAR_12-VAR_13);
   else VAR_14 = (VAR_12)/(VAR_12-VAR_13);
   if (VAR_14 < 0) VAR_14 = 0;
   else if (VAR_14 > 1) VAR_14 = 1;


   VAR_17[0] = VAR_15[0] + (VAR_16[0] - VAR_15[0]) * VAR_14;
   VAR_17[1] = VAR_15[1] + (VAR_16[1] - VAR_15[1]) * VAR_14;
   VAR_17[2] = VAR_15[2] + (VAR_16[2] - VAR_15[2]) * VAR_14;



   VAR_8 = VAR_12 < 0;

   FUNC_1(VAR_17, VAR_19->start);


   VAR_19->planenum = VAR_20->planenum;
   VAR_19->nodenum = VAR_20->children[!VAR_8];
   VAR_19++;
   if (VAR_19 >= &VAR_18[127])
   {
    VAR_2.Print(VAR_0, "AAS_TraceAreas: stack overflow\n");
    return VAR_11;
   }



   FUNC_1(VAR_15, VAR_19->start);
   FUNC_1(VAR_17, VAR_19->end);
   VAR_19->planenum = VAR_10;
   VAR_19->nodenum = VAR_20->children[VAR_8];
   VAR_19++;
   if (VAR_19 >= &VAR_18[127])
   {
    VAR_2.Print(VAR_0, "AAS_TraceAreas: stack overflow\n");
    return VAR_11;
   }
  }
 }

}
