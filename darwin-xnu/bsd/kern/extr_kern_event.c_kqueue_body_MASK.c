
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kqueue {int dummy; } ;
struct fileproc {int f_flag; struct kqueue* f_data; int * f_ops; } ;
typedef int int32_t ;
typedef int fp_allocfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*,struct fileproc**,int*,int ,int ,void*) ;
 int * FUNC_1 (struct proc*,int) ;
 int FUNC_2 (struct proc*,int,struct fileproc*,int) ;
 int FUNC_3 (struct proc*,int,struct fileproc*) ;
 struct kqueue* FUNC_4 (struct proc*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*,int,int *) ;
 int FUNC_8 () ;

int
FUNC_9(struct proc *VAR_5, fp_allocfn_t VAR_6, void *VAR_7, int32_t *VAR_8)
{
 struct kqueue *VAR_9;
 struct fileproc *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_0(VAR_5,
     &VAR_10, &VAR_11, FUNC_8(), VAR_6, VAR_7);
 if (VAR_12) {
  return (VAR_12);
 }

 VAR_9 = FUNC_4(VAR_5, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_5, VAR_11, VAR_10);
  return (VAR_0);
 }

 VAR_10->f_flag = VAR_1 | VAR_2;
 VAR_10->f_ops = &VAR_4;
 VAR_10->f_data = VAR_9;

 FUNC_5(VAR_5);
 *FUNC_1(VAR_5, VAR_11) |= VAR_3;
 FUNC_7(VAR_5, VAR_11, ((void*)0));
 FUNC_2(VAR_5, VAR_11, VAR_10, 1);
 FUNC_6(VAR_5);

 *VAR_8 = VAR_11;
 return (VAR_12);
}
