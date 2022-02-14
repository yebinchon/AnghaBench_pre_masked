
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vnode_t ;
typedef TYPE_3__* proc_t ;
typedef TYPE_4__* buf_t ;
struct TYPE_13__ {int b_flags; int b_vp; } ;
struct TYPE_12__ {TYPE_2__* p_stats; } ;
struct TYPE_10__ {int ru_oublock; } ;
struct TYPE_11__ {TYPE_1__ p_ru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ,int ,char*) ;

int
FUNC_9(buf_t VAR_7, int VAR_8)
{
 proc_t VAR_9 = FUNC_7();
 vnode_t VAR_10 = VAR_7->b_vp;







 if (!FUNC_0(VAR_7->b_flags, VAR_0)) {
  FUNC_3(VAR_7->b_flags, VAR_0);
  if (VAR_9 && VAR_9->p_stats) {
   FUNC_2(&VAR_9->p_stats->p_ru.ru_oublock);
  }
  FUNC_1(1, &VAR_5);
  FUNC_6(VAR_7, VAR_10);
 }
 if (!FUNC_0(VAR_7->b_flags, VAR_2) && VAR_5 > ((VAR_6/4)*3)) {
  if (VAR_8)
   return (VAR_3);




  (void)FUNC_8(VAR_10, VAR_4, 0, 0, "buf_bdwrite");

  return (FUNC_4(VAR_7));
 }


 FUNC_3(VAR_7->b_flags, VAR_1);
 FUNC_5(VAR_7);
 return (0);
}
