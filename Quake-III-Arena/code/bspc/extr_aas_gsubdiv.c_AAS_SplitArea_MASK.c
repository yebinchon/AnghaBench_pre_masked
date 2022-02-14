
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_21__ {int planenum; TYPE_2__* backarea; TYPE_2__* frontarea; struct TYPE_21__** next; int * winding; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_22__ {int invalid; TYPE_1__* tmpfaces; int modelnum; int contents; int presencetype; int areanum; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_23__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;


 int FUNC_0 (TYPE_1__*,int,TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,TYPE_1__**,TYPE_1__**) ;
 int * FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*) ;
 TYPE_3__* VAR_0 ;

void FUNC_11(tmp_area_t *VAR_1, int VAR_2, tmp_area_t **VAR_3, tmp_area_t **VAR_4)
{
 int VAR_5;
 tmp_area_t *VAR_6, *VAR_7, *VAR_8;
 tmp_face_t *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 winding_t *VAR_14;
 plane_t *VAR_15;
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 VAR_15 = &VAR_0[VAR_2];
 VAR_14 = FUNC_8(VAR_1, VAR_2);
 if (!VAR_14)
 {







  FUNC_9("AAS_SplitArea: no split winding when splitting area %d\n", VAR_1->areanum);
 }

 VAR_12 = FUNC_2();

 VAR_12->planenum = VAR_2;

 VAR_12->winding = VAR_14;

 (*VAR_3) = FUNC_1();
 (*VAR_3)->presencetype = VAR_1->presencetype;
 (*VAR_3)->contents = VAR_1->contents;
 (*VAR_3)->modelnum = VAR_1->modelnum;
 (*VAR_3)->tmpfaces = ((void*)0);

 (*VAR_4) = FUNC_1();
 (*VAR_4)->presencetype = VAR_1->presencetype;
 (*VAR_4)->contents = VAR_1->contents;
 (*VAR_4)->modelnum = VAR_1->modelnum;
 (*VAR_4)->tmpfaces = ((void*)0);

 FUNC_0(VAR_12, 0, (*VAR_3));
 FUNC_0(VAR_12, 1, (*VAR_4));


 for (VAR_9 = VAR_1->tmpfaces; VAR_9; VAR_9 = VAR_13)
 {

  VAR_5 = VAR_9->frontarea != VAR_1;

  VAR_13 = VAR_9->next[VAR_5];

  VAR_6 = VAR_9->frontarea;

  VAR_7 = VAR_9->backarea;

  if (VAR_6) FUNC_6(VAR_9, VAR_6);
  if (VAR_7) FUNC_6(VAR_9, VAR_7);

  FUNC_7(VAR_9, VAR_15->normal, VAR_15->dist, &VAR_10, &VAR_11);

  FUNC_5(VAR_9);

  if (VAR_5) VAR_8 = VAR_6;
  else VAR_8 = VAR_7;

  if (VAR_8)
  {
   if (VAR_10) FUNC_0(VAR_10, !VAR_5, VAR_8);
   if (VAR_11) FUNC_0(VAR_11, !VAR_5, VAR_8);
  }

  if (VAR_10) FUNC_0(VAR_10, VAR_5, (*VAR_3));
  if (VAR_11) FUNC_0(VAR_11, VAR_5, (*VAR_4));
 }

 if (!(*VAR_3)->tmpfaces) FUNC_10("AAS_SplitArea: front area without faces\n");
 if (!(*VAR_4)->tmpfaces) FUNC_10("AAS_SplitArea: back area without faces\n");

 VAR_1->invalid = 1;
 FUNC_4((*VAR_3));
 FUNC_4((*VAR_4));

 FUNC_3((*VAR_3));
 FUNC_3((*VAR_4));
}
