
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
typedef TYPE_4__* proc_t ;
typedef int errno_t ;
typedef TYPE_5__* buf_t ;
struct TYPE_19__ {scalar_t__ b_datap; int b_lblkno; int b_bcount; int b_flags; TYPE_3__* b_vp; } ;
struct TYPE_18__ {TYPE_2__* p_stats; } ;
struct TYPE_17__ {int v_numoutput; } ;
struct TYPE_15__ {int ru_oublock; } ;
struct TYPE_16__ {TYPE_1__ p_ru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* FUNC_10 () ;
 int VAR_6 ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int ,int ,int ) ;

errno_t
FUNC_13(buf_t VAR_7)
{
 int VAR_8, VAR_9;
 errno_t VAR_10;
 proc_t VAR_11 = FUNC_10();
 vnode_t VAR_12 = VAR_7->b_vp;

 if (VAR_7->b_datap == 0) {
         if (FUNC_6(VAR_7) == 0)
          return (0);
 }

 VAR_8 = !FUNC_1(VAR_7->b_flags, VAR_0);
 VAR_9 = FUNC_1(VAR_7->b_flags, VAR_1);
 FUNC_0(VAR_7->b_flags, (VAR_4 | VAR_2 | VAR_3 | VAR_1));

 if (VAR_9)
  FUNC_3(-1, &VAR_6);

 if (!VAR_8) {






  if (VAR_9)
   FUNC_9(VAR_7, VAR_12);
  else
   if (VAR_11 && VAR_11->p_stats) {
    FUNC_4(&VAR_11->p_stats->p_ru.ru_oublock);
   }
 }
 FUNC_12(VAR_5, FUNC_11(VAR_12, VAR_7->b_bcount), VAR_7->b_lblkno);



        FUNC_2(1, &VAR_12->v_numoutput);

 FUNC_5(VAR_7);

 if (VAR_8) {



  VAR_10 = FUNC_7(VAR_7);






  if (VAR_9)
   FUNC_9(VAR_7, VAR_12);
  else
   if (VAR_11 && VAR_11->p_stats) {
    FUNC_4(&VAR_11->p_stats->p_ru.ru_oublock);
   }


  FUNC_8(VAR_7);

  return (VAR_10);
 } else {
  return (0);
 }
}
