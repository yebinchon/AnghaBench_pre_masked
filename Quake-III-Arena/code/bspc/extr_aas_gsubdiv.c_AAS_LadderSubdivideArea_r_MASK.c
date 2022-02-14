
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int winding_t ;
typedef int* vec3_t ;
struct TYPE_19__ {int planenum; struct TYPE_19__** children; TYPE_4__* tmparea; } ;
typedef TYPE_2__ tmp_node_t ;
struct TYPE_20__ {int faceflags; size_t planenum; TYPE_4__* frontarea; struct TYPE_20__** next; TYPE_1__* winding; } ;
typedef TYPE_3__ tmp_face_t ;
struct TYPE_21__ {int contents; int presencetype; TYPE_3__* tmpfaces; } ;
typedef TYPE_4__ tmp_area_t ;
struct TYPE_22__ {int* normal; double dist; } ;
typedef TYPE_5__ plane_t ;
struct TYPE_23__ {int nodes; } ;
struct TYPE_18__ {int numpoints; int** p; } ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,TYPE_4__*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,int,TYPE_4__**,TYPE_4__**) ;
 int * FUNC_3 (TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_4 (int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int*,float) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int*,int*) ;
 TYPE_5__* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,int ) ;
 TYPE_6__ VAR_8 ;

tmp_node_t *FUNC_9(tmp_node_t *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 float VAR_15;
 tmp_area_t *VAR_16, *VAR_17, *VAR_18;
 tmp_face_t *VAR_19;
 tmp_node_t *VAR_20, *VAR_21;
 vec3_t VAR_22, VAR_23 = {0, 0, 1};
 plane_t *VAR_24;
 winding_t *VAR_25;

 VAR_16 = VAR_9->tmparea;

 if (VAR_16->contents & (VAR_2
         | VAR_0
         | VAR_1)) return VAR_9;

 if (!(VAR_16->presencetype & VAR_5)) return VAR_9;

 VAR_13 = 0;
 VAR_14 = 0;
 VAR_22[2] = 99999;

 for (VAR_19 = VAR_16->tmpfaces; VAR_19; VAR_19 = VAR_19->next[VAR_10])
 {

  VAR_10 = VAR_19->frontarea != VAR_16;

  if (VAR_19->faceflags & VAR_4)
  {
   VAR_24 = &VAR_6[VAR_19->planenum];

   if (FUNC_4(VAR_24->normal, VAR_23) > -0.1)
   {
    VAR_13 = 1;

    for (VAR_11 = 0; VAR_11 < VAR_19->winding->numpoints; VAR_11++)
    {
     if (VAR_19->winding->p[VAR_11][2] < VAR_22[2])
     {
      FUNC_7(VAR_19->winding->p[VAR_11], VAR_22);
     }
    }
   }
  }
  else if (VAR_19->faceflags & VAR_3)
  {
   VAR_14 = 1;
  }
 }

 if ((!VAR_13) || (!VAR_14)) return VAR_9;

 for (VAR_19 = VAR_16->tmpfaces; VAR_19; VAR_19 = VAR_19->next[VAR_10])
 {

  VAR_10 = VAR_19->frontarea != VAR_16;

  if (!(VAR_19->faceflags & VAR_3)) continue;

  VAR_24 = &VAR_6[VAR_19->planenum];

  VAR_15 = FUNC_4(VAR_24->normal, VAR_22) - VAR_24->dist;

  if (VAR_15 > -1 && VAR_15 < 1)
  {
   return VAR_9;
  }
 }

 VAR_15 = FUNC_4(VAR_23, VAR_22);
 VAR_12 = FUNC_5(VAR_23, VAR_15);

 VAR_25 = FUNC_3(VAR_16, VAR_12);
 if (!VAR_25) return VAR_9;
 FUNC_6(VAR_25);

 FUNC_8("\r%6d", ++VAR_7);

 FUNC_2(VAR_16, VAR_12, &VAR_17, &VAR_18);

 VAR_9->tmparea = ((void*)0);
 VAR_9->planenum = VAR_12;

 VAR_20 = FUNC_0();
 VAR_20->planenum = 0;
 VAR_20->tmparea = VAR_17;

 VAR_21 = FUNC_0();
 VAR_21->planenum = 0;
 VAR_21->tmparea = VAR_18;

 VAR_9->children[0] = FUNC_9(VAR_20);
 VAR_9->children[1] = FUNC_9(VAR_21);

 FUNC_1(VAR_8.nodes, VAR_16, VAR_20, VAR_21, VAR_12);

 return VAR_9;
}
