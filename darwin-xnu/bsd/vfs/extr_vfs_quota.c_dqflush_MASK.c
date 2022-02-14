
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct TYPE_4__ {struct dquot* le_next; } ;
struct dquot {TYPE_1__* dq_qfile; scalar_t__ dq_cnt; TYPE_2__ dq_hash; } ;
struct dqhash {struct dquot* lh_first; } ;
struct TYPE_3__ {struct vnode* qf_vp; } ;


 int FUNC_0 (struct dquot*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t VAR_1 ;
 struct dqhash* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

void
FUNC_5(struct vnode *VAR_3)
{
 struct dquot *VAR_4, *VAR_5;
 struct dqhash *VAR_6;

 if (!FUNC_3())
  return;






 FUNC_1();

 for (VAR_6 = &VAR_2[VAR_1]; VAR_6 >= VAR_2; VAR_6--) {
  for (VAR_4 = VAR_6->lh_first; VAR_4; VAR_4 = VAR_5) {
   VAR_5 = VAR_4->dq_hash.le_next;
   if (VAR_4->dq_qfile->qf_vp != VAR_3)
    continue;
   if (VAR_4->dq_cnt)
    FUNC_4("dqflush: stray dquot");
   FUNC_0(VAR_4, VAR_0);
   VAR_4->dq_qfile = ((void*)0);
  }
 }
 FUNC_2();
}
