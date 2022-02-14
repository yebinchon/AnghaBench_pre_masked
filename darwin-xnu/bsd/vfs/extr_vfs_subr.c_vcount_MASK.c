
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct TYPE_13__ {int v_usecount; int v_kusecount; int v_id; scalar_t__ v_rdev; scalar_t__ v_type; int v_iocount; struct TYPE_13__* v_specnext; TYPE_1__* v_specinfo; struct TYPE_13__** v_hashchain; } ;
struct TYPE_12__ {int si_opencount; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int,int ) ;
 int FUNC_9 (TYPE_2__*) ;

int
FUNC_10(vnode_t VAR_0)
{
 vnode_t VAR_1, VAR_2;
 int VAR_3;
 int VAR_4;

 if (!FUNC_4(VAR_0)) {
  return (VAR_0->v_usecount - VAR_0->v_kusecount);
 }

loop:
 if (!FUNC_3(VAR_0))
         return (VAR_0->v_specinfo->si_opencount);
 VAR_3 = 0;

 FUNC_0();



 VAR_1 = *VAR_0->v_hashchain;
 VAR_4 = VAR_1 ? VAR_1->v_id : 0;

 FUNC_1();

 while (VAR_1) {



  if (FUNC_2(VAR_1, VAR_4)) {
   goto loop;
  }
  FUNC_5(VAR_1);

  if (VAR_1->v_rdev == VAR_0->v_rdev && VAR_1->v_type == VAR_0->v_type) {
   if ((VAR_1->v_usecount == 0) && (VAR_1->v_iocount == 1) && VAR_1 != VAR_0) {



    FUNC_8(VAR_1, 1, 1, 0);
    FUNC_7(VAR_1);
    FUNC_9(VAR_1);
    goto loop;
   }
   VAR_3 += VAR_1->v_specinfo->si_opencount;
  }
  FUNC_9(VAR_1);

  FUNC_0();





  VAR_2 = VAR_1->v_specnext;
  VAR_4 = VAR_2 ? VAR_2->v_id : 0;

  FUNC_1();

  FUNC_6(VAR_1);

  VAR_1 = VAR_2;
 }

 return (VAR_3);
}
