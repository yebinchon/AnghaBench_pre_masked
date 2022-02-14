
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct fileproc {scalar_t__ f_type; int f_data; } ;
struct filedesc {int dummy; } ;
struct dup_args {int fd; } ;
typedef TYPE_1__* proc_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_10__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct fileproc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,struct filedesc*,int,int,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int,struct fileproc*,int) ;
 int FUNC_6 (TYPE_1__*,int,struct fileproc*,int ) ;
 int FUNC_7 (TYPE_1__*,int,struct fileproc**,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

int
FUNC_10(proc_t VAR_6, struct dup_args *VAR_7, int32_t *VAR_8)
{
 struct filedesc *VAR_9 = VAR_6->p_fd;
 int VAR_10 = VAR_7->fd;
 int VAR_11, VAR_12;
 struct fileproc *VAR_13;

 FUNC_8(VAR_6);
 if ( (VAR_12 = FUNC_7(VAR_6, VAR_10, &VAR_13, 1)) ) {
  FUNC_9(VAR_6);
  return(VAR_12);
 }
 if (FUNC_0(VAR_13, VAR_3)) {
  VAR_12 = FUNC_6(VAR_6, VAR_10, VAR_13, VAR_5);
  (void) FUNC_5(VAR_6, VAR_10, VAR_13, 1);
  FUNC_9(VAR_6);
  return (VAR_12);
 }
 if ( (VAR_12 = FUNC_3(VAR_6, 0, &VAR_11)) ) {
  FUNC_5(VAR_6, VAR_10, VAR_13, 1);
  FUNC_9(VAR_6);
  return (VAR_12);
 }
 VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_10, VAR_11, 0, VAR_8);
 FUNC_5(VAR_6, VAR_10, VAR_13, 1);
 FUNC_9(VAR_6);

 if (VAR_2 && VAR_13->f_type == VAR_1) {
  FUNC_1(VAR_4, VAR_0,
      VAR_11, 0, (int64_t)FUNC_2(VAR_13->f_data));
 }

 return (VAR_12);
}
