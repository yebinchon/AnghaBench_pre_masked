
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef TYPE_3__* uthread_t ;
typedef scalar_t__ uint64_t ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
struct tty {int dummy; } ;
struct knote {struct tty* kn_hook; TYPE_2__* kn_fp; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_7__ {struct waitq_set* uu_wqset; } ;
struct TYPE_6__ {TYPE_1__* f_fglob; } ;
struct TYPE_5__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int,int ,scalar_t__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (struct knote*) ;
 int FUNC_5 (struct knote*,int ) ;
 int FUNC_6 (struct waitq**,scalar_t__*,int) ;
 struct tty* FUNC_7 (struct waitq*,int) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*) ;
 int FUNC_10 (struct tty*) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct waitq_set*) ;
 scalar_t__ FUNC_15 (struct waitq_set*,int,int *,int *) ;
 int FUNC_16 (struct waitq_set*) ;

__attribute__((used)) static int
FUNC_17(struct knote *VAR_5)
{
 uthread_t VAR_6;
 vfs_context_t VAR_7;
 vnode_t VAR_8;
 kern_return_t VAR_9;
 struct waitq *VAR_10 = ((void*)0);
 struct waitq_set *VAR_11;
 struct waitq_set VAR_12;
 uint64_t VAR_13, VAR_14;
 uint64_t *VAR_15 = ((void*)0);
 int VAR_16 = -1;
 struct tty *VAR_17;

 VAR_6 = FUNC_3(FUNC_2());

 VAR_7 = FUNC_11();
 VAR_8 = (vnode_t)VAR_5->kn_fp->f_fglob->fg_data;





 VAR_13 = VAR_14 = FUNC_13(((void*)0));
 VAR_15 = (void *)&VAR_14;
 VAR_9 = FUNC_15(&VAR_12, VAR_3 | VAR_4, ((void*)0),
   ((void*)0));
 FUNC_1(VAR_9 == VAR_2);





 FUNC_16(&VAR_12);

 VAR_11 = VAR_6->uu_wqset;
 VAR_6->uu_wqset = &VAR_12;






 VAR_16 = FUNC_0(VAR_8, FUNC_4(VAR_5) | VAR_1, 0, VAR_15, VAR_7);
 VAR_6->uu_wqset = VAR_11;





 FUNC_12(VAR_13);
 if (VAR_13 == VAR_14) {




  FUNC_5(VAR_5, VAR_0);
  VAR_16 = -1;
  goto out;
 }


 FUNC_6(&VAR_10, VAR_15, sizeof(void *));

 VAR_17 = FUNC_7(VAR_10, FUNC_4(VAR_5));
 FUNC_1(VAR_17 != ((void*)0));




 FUNC_8(VAR_17);
 FUNC_10(VAR_17);
 VAR_5->kn_hook = VAR_17;
 FUNC_9(VAR_17);

out:




 FUNC_14(&VAR_12);

 return VAR_16;
}
