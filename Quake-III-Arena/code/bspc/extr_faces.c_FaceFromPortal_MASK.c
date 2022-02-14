
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int planenum; int texinfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_10__ {TYPE_1__** nodes; int winding; TYPE_2__* side; } ;
typedef TYPE_3__ portal_t ;
struct TYPE_11__ {int planenum; int contents; int w; TYPE_3__* portal; int texinfo; } ;
typedef TYPE_4__ face_t ;
struct TYPE_8__ {int contents; } ;


 TYPE_4__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

face_t *FUNC_4 (portal_t *VAR_1, int VAR_2)
{
 face_t *VAR_3;
 side_t *VAR_4;

 VAR_4 = VAR_1->side;
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_0 ();

 VAR_3->texinfo = VAR_4->texinfo;
 VAR_3->planenum = (VAR_4->planenum & ~1) | VAR_2;
 VAR_3->portal = VAR_1;

 if ( (VAR_1->nodes[VAR_2]->contents & VAR_0)
  && FUNC_3(VAR_1->nodes[!VAR_2]->contents^VAR_1->nodes[VAR_2]->contents) == VAR_0 )
  return ((void*)0);

 if (VAR_2)
 {
  VAR_3->w = FUNC_2(VAR_1->winding);
  VAR_3->contents = VAR_1->nodes[1]->contents;
 }
 else
 {
  VAR_3->w = FUNC_1(VAR_1->winding);
  VAR_3->contents = VAR_1->nodes[0]->contents;
 }
 return VAR_3;
}
