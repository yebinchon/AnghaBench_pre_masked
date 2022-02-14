
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ vec3_t ;
struct TYPE_20__ {TYPE_4__* tmparea; scalar_t__* children; scalar_t__ planenum; } ;
typedef TYPE_2__ tmp_node_t ;
struct TYPE_21__ {int planenum; int faceflags; scalar_t__ aasfacenum; int winding; } ;
typedef TYPE_3__ tmp_face_t ;
struct TYPE_22__ {int presencetype; int modelnum; int contents; int areanum; int * tmpfaces; } ;
typedef TYPE_4__ tmp_area_t ;
struct TYPE_23__ {int planenum; TYPE_6__** nodes; int winding; TYPE_3__* tmpface; struct TYPE_23__** next; } ;
typedef TYPE_5__ portal_t ;
struct TYPE_24__ {int contents; int expansionbboxes; int modelnum; TYPE_5__* portals; } ;
typedef TYPE_6__ node_t ;
struct TYPE_25__ {int allpresencetypes; } ;


 int FUNC_0 (TYPE_3__*,int,TYPE_4__*) ;
 TYPE_4__* FUNC_1 () ;
 TYPE_3__* FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (int ) ;
 TYPE_7__ VAR_28 ;
 int FUNC_10 (char*,int ) ;

tmp_node_t *FUNC_11(node_t *VAR_29)
{
 int VAR_30;
 int VAR_31;
 portal_t *VAR_32;
 tmp_face_t *VAR_33;
 tmp_area_t *VAR_34;
 tmp_node_t *VAR_35;
 vec3_t VAR_36 = {0, 0, 1};


 VAR_34 = FUNC_1();
 VAR_34->tmpfaces = ((void*)0);

 VAR_31 = 0;

 for (VAR_32 = VAR_29->portals; VAR_32; VAR_32 = VAR_32->next[VAR_30])
 {
  VAR_30 = (VAR_32->nodes[1] == VAR_29);



  if (VAR_32->tmpface)
  {

   FUNC_0(VAR_32->tmpface, 1, VAR_34);
  }
  else
  {
   VAR_33 = FUNC_2();


   VAR_32->tmpface = VAR_33;


   VAR_33->planenum = VAR_32->planenum ^ VAR_30;
   if (VAR_30) VAR_33->winding = FUNC_9(VAR_32->winding);
   else VAR_33->winding = FUNC_8(VAR_32->winding);





   if (VAR_32->nodes[!VAR_30]->contents & (VAR_20 | VAR_18))
   {
    VAR_33->faceflags |= VAR_27;
   }


   else if (VAR_29->contents & (VAR_22|VAR_19|VAR_14))
   {
    VAR_33->faceflags |= VAR_25;

    if (!(VAR_32->nodes[!VAR_30]->contents & (VAR_22|VAR_19|VAR_14)))
    {
     VAR_33->faceflags |= VAR_26;
    }
   }

   if ((VAR_32->nodes[VAR_30]->contents & VAR_13) ||
     (VAR_32->nodes[!VAR_30]->contents & VAR_13))
   {
    VAR_33->faceflags |= VAR_24;
   }

   if (FUNC_7(VAR_33))
   {
    VAR_33->faceflags |= VAR_23;
   }

   VAR_31 |= VAR_33->faceflags;

   VAR_33->aasfacenum = 0;

   FUNC_0(VAR_33, 0, VAR_34);
  }
 }
 FUNC_10("\r%6d", VAR_34->areanum);

 VAR_34->presencetype = ~VAR_29->expansionbboxes & VAR_28.allpresencetypes;

 VAR_34->contents = 0;
 if (VAR_29->contents & VAR_10) VAR_34->contents |= VAR_0;
 if (VAR_29->contents & VAR_15) VAR_34->contents |= VAR_4;
 if (VAR_29->contents & VAR_21) VAR_34->contents |= VAR_8;
 if (VAR_29->contents & VAR_12) VAR_34->contents |= VAR_2;
 if (VAR_29->contents & VAR_11) VAR_34->contents |= VAR_1;
 if (VAR_29->contents & VAR_22) VAR_34->contents |= VAR_9;
 if (VAR_29->contents & VAR_14) VAR_34->contents |= VAR_3;
 if (VAR_29->contents & VAR_19) VAR_34->contents |= VAR_7;
 if (VAR_29->contents & VAR_16) VAR_34->contents |= VAR_5;
 if (VAR_29->contents & VAR_17) VAR_34->contents |= VAR_6;


 VAR_34->modelnum = VAR_29->modelnum;

 FUNC_6(VAR_34);

 FUNC_4(VAR_34);

 VAR_35 = FUNC_3();
 VAR_35->planenum = 0;
 VAR_35->children[0] = 0;
 VAR_35->children[1] = 0;
 VAR_35->tmparea = VAR_34;

 return VAR_35;
}
