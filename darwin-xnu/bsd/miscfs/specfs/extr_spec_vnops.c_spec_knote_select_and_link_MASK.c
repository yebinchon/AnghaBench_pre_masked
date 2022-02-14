
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef TYPE_3__* uthread_t ;
typedef scalar_t__ uint64_t ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
struct selinfo {int dummy; } ;
struct knote {int kn_hook_data; int kn_hookid; TYPE_2__* kn_fp; } ;
struct TYPE_9__ {struct waitq_set kq_wqs; } ;
struct TYPE_8__ {struct waitq_set* uu_wqset; } ;
struct TYPE_7__ {TYPE_1__* f_fglob; } ;
struct TYPE_6__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,scalar_t__*,int ) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (struct knote*) ;
 int FUNC_4 (struct knote*) ;
 int FUNC_5 (struct knote*,int ) ;
 int FUNC_6 (struct waitq**,scalar_t__*,int) ;
 struct selinfo* FUNC_7 (struct waitq*) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct waitq*) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct waitq_set*) ;

__attribute__((used)) static int
FUNC_15(struct knote *VAR_2)
{
 uthread_t VAR_3;
 vfs_context_t VAR_4;
 vnode_t VAR_5;
 struct waitq_set *VAR_6;
 uint64_t VAR_7, VAR_8;
 uint64_t *VAR_9 = ((void*)0);
 struct selinfo *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_3 = FUNC_2(FUNC_1());

 VAR_4 = FUNC_8();
 VAR_5 = (vnode_t)VAR_2->kn_fp->f_fglob->fg_data;

 int VAR_12 = FUNC_9(VAR_5, VAR_2->kn_hookid);
 if (VAR_12 != 0) {
  FUNC_5(VAR_2, VAR_1);
  return 0;
 }
 VAR_7 = VAR_8 = FUNC_13(((void*)0));
 VAR_9 = (void *)&VAR_8;





 VAR_6 = VAR_3->uu_wqset;
 VAR_3->uu_wqset = &(FUNC_3(VAR_2)->kq_wqs);






 FUNC_14(VAR_3->uu_wqset);
 VAR_11 = FUNC_0(VAR_5, FUNC_4(VAR_2), 0, VAR_9, VAR_4);
 VAR_3->uu_wqset = VAR_6;





 FUNC_12(VAR_7);
 if (VAR_7 != VAR_8) {

  struct waitq *VAR_13;
  FUNC_6(&VAR_13, VAR_9, sizeof(void *));







  VAR_10 = FUNC_7(VAR_13);
  VAR_2->kn_hook_data = FUNC_11(VAR_13);
 } else if (VAR_11 == 0) {






  FUNC_5(VAR_2, VAR_0);
 }

 FUNC_10(VAR_5);

 return VAR_11;
}
