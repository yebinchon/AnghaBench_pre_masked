
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_15__ {int normal; int dist; } ;
typedef TYPE_1__ q1_dplane_t ;
struct TYPE_16__ {size_t planenum; int numedges; int firstedge; scalar_t__ side; } ;
typedef TYPE_2__ q1_dface_t ;
struct TYPE_17__ {struct TYPE_17__* next; int side; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_19__ {size_t* v; } ;
struct TYPE_18__ {int * point; } ;


 int FUNC_0 (int ,int ,int ) ;
 float FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,int,TYPE_3__**,TYPE_3__**) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int ) ;
 size_t FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;
 TYPE_5__* VAR_0 ;
 int * VAR_1 ;
 int* VAR_2 ;
 TYPE_4__* VAR_3 ;

bspbrush_t *FUNC_12(bspbrush_t *VAR_4, q1_dface_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 float VAR_11;
 q1_dplane_t VAR_12;
 vec_t *VAR_13, *VAR_14;
 vec3_t VAR_15, VAR_16;
 bspbrush_t *VAR_17, *VAR_18, *VAR_19;

 FUNC_11(&VAR_12, &VAR_1[VAR_5->planenum], sizeof(q1_dplane_t));

 if (VAR_5->side)
 {
  FUNC_7(VAR_12.normal, VAR_12.normal);
  VAR_12.dist = -VAR_12.dist;
 }
 VAR_10 = 0;
 VAR_19 = ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_5->numedges; VAR_6++)
 {

  VAR_7 = VAR_2[VAR_5->firstedge + VAR_6];
  VAR_8 = VAR_7 > 0;

  VAR_13 = VAR_3[VAR_0[FUNC_10(VAR_7)].v[VAR_8]].point;
  VAR_14 = VAR_3[VAR_0[FUNC_10(VAR_7)].v[!VAR_8]].point;


  FUNC_9(VAR_13, VAR_14, VAR_16);
  FUNC_0(VAR_16, VAR_12.normal, VAR_15);
  FUNC_8(VAR_15);
  VAR_11 = FUNC_1(VAR_15, VAR_13);

  VAR_9 = FUNC_2(VAR_15, VAR_11);

  FUNC_6(VAR_4, VAR_9, &VAR_17, &VAR_18);

  if (VAR_18)
  {

   VAR_18->side = VAR_4->side;

   VAR_18->next = VAR_19;
   VAR_19 = VAR_18;
   VAR_10++;
  }
  if (!VAR_17)
  {
   FUNC_5("Q1_SplitBrushWithFace: no new brush\n");
   FUNC_4(VAR_19);
   return ((void*)0);
  }

  VAR_17->side = VAR_4->side;

  VAR_4 = VAR_17;
 }
 if (!VAR_10)
 {
  FUNC_3(VAR_17);
  return ((void*)0);
 }
 VAR_17->next = VAR_19;
 VAR_19 = VAR_17;
 return VAR_19;
}
