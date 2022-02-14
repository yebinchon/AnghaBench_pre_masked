
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct proc {int dummy; } ;
struct fileproc {int f_flag; scalar_t__ f_data; int * f_ops; } ;
typedef int pid_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (struct proc*,struct fileproc**,int*,int ) ;
 int FUNC_4 (struct proc*,int,struct fileproc*,int) ;
 int FUNC_5 (struct proc*,int,struct fileproc*) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (struct proc*) ;
 int FUNC_11 (struct proc*,int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int,struct socket**,int,int) ;
 int FUNC_13 (int,struct socket**,int,int,int ) ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15(struct proc *VAR_9,
  int VAR_10,
  int VAR_11,
  int VAR_12,
  pid_t VAR_13,
  int32_t *VAR_14,
  int VAR_15)
{
 struct socket *VAR_16;
 struct fileproc *VAR_17;
 int VAR_18, VAR_19;

 FUNC_0(VAR_7, VAR_10, VAR_11, VAR_12);






 if (VAR_15) {
  VAR_19 = FUNC_8(FUNC_6(),
      VAR_5, 0);
  if (VAR_19)
   return (VAR_1);
 }

 VAR_19 = FUNC_3(VAR_9, &VAR_17, &VAR_18, FUNC_14());
 if (VAR_19) {
  return (VAR_19);
 }
 VAR_17->f_flag = VAR_3|VAR_4;
 VAR_17->f_ops = &VAR_8;

 if (VAR_15)
  VAR_19 = FUNC_13(VAR_10, &VAR_16, VAR_11, VAR_12, VAR_13);
 else
  VAR_19 = FUNC_12(VAR_10, &VAR_16, VAR_11, VAR_12);

 if (VAR_19) {
  FUNC_5(VAR_9, VAR_18, VAR_17);
 } else {
  VAR_17->f_data = (caddr_t)VAR_16;

  FUNC_9(VAR_9);
  FUNC_11(VAR_9, VAR_18, ((void*)0));

  FUNC_4(VAR_9, VAR_18, VAR_17, 1);
  FUNC_10(VAR_9);

  *VAR_14 = VAR_18;
  if (VAR_2) {
   FUNC_1(VAR_6, VAR_0,
       VAR_18, 0, (int64_t)FUNC_2(VAR_16));
  }
 }
 return (VAR_19);
}
