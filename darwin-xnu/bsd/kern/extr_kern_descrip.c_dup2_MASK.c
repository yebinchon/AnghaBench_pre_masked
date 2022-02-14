
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct fileproc {int dummy; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; int ** fd_ofiles; } ;
struct dup2_args {int from; int to; } ;
typedef scalar_t__ rlim_t ;
typedef TYPE_2__* proc_t ;
typedef int int32_t ;
struct TYPE_18__ {TYPE_1__* p_rlimit; struct filedesc* p_fd; } ;
struct TYPE_17__ {scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fileproc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int,struct fileproc*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,struct filedesc*,int,int,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int,struct fileproc*,int) ;
 int FUNC_6 (TYPE_2__*,int,struct fileproc*,int ) ;
 int FUNC_7 (TYPE_2__*,int,struct fileproc**,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;

int
FUNC_15(proc_t VAR_10, struct dup2_args *VAR_11, int32_t *VAR_12)
{
 struct filedesc *VAR_13 = VAR_10->p_fd;
 int VAR_14 = VAR_11->from, VAR_15 = VAR_11->to;
 int VAR_16, VAR_17;
 struct fileproc *VAR_18, *VAR_19;

 FUNC_9(VAR_10);

startover:
 if ( (VAR_17 = FUNC_7(VAR_10, VAR_14, &VAR_18, 1)) ) {
  FUNC_11(VAR_10);
  return(VAR_17);
 }
 if (FUNC_0(VAR_18, VAR_3)) {
  VAR_17 = FUNC_6(VAR_10, VAR_14, VAR_18, VAR_8);
  (void) FUNC_5(VAR_10, VAR_14, VAR_18, 1);
  FUNC_11(VAR_10);
  return (VAR_17);
 }
 if (VAR_15 < 0 ||
  (rlim_t)VAR_15 >= VAR_10->p_rlimit[VAR_5].rlim_cur ||
     VAR_15 >= VAR_9) {
  FUNC_5(VAR_10, VAR_14, VAR_18, 1);
  FUNC_11(VAR_10);
  return (VAR_0);
 }
 if (VAR_14 == VAR_15) {
  FUNC_5(VAR_10, VAR_14, VAR_18, 1);
  *VAR_12 = VAR_15;
  FUNC_11(VAR_10);
  return (0);
 }
 if (VAR_15 < 0 || VAR_15 >= VAR_13->fd_nfiles) {
  if ( (VAR_17 = FUNC_2(VAR_10, VAR_15, &VAR_16)) ) {
   FUNC_5(VAR_10, VAR_14, VAR_18, 1);
   FUNC_11(VAR_10);
   return (VAR_17);
  }
  if (VAR_15 != VAR_16) {
   FUNC_3(VAR_10, VAR_16);
   goto closeit;
  }
 } else {
closeit:
  while ((VAR_13->fd_ofileflags[VAR_15] & VAR_6) == VAR_6) {
    FUNC_5(VAR_10, VAR_14, VAR_18, 1);
    FUNC_14(VAR_10, VAR_15);



    goto startover;
  }

  if ((VAR_13->fd_ofiles[VAR_15] != ((void*)0)) &&
      ((VAR_17 = FUNC_7(VAR_10, VAR_15, &VAR_19, 1)) == 0)) {
   FUNC_5(VAR_10, VAR_14, VAR_18, 1);
   if (FUNC_0(VAR_19, VAR_2)) {
    VAR_17 = FUNC_6(VAR_10,
        VAR_15, VAR_19, VAR_7);
    (void) FUNC_5(VAR_10, VAR_15, VAR_19, 1);
    FUNC_11(VAR_10);
    return (VAR_17);
   }
   (void)FUNC_1(VAR_10, VAR_15, VAR_19, VAR_1);



   FUNC_12(VAR_10, VAR_15);
   goto startover;
  } else {




   FUNC_13(VAR_10, VAR_15);
  }





 }






 VAR_17 = FUNC_4(VAR_10, VAR_13, VAR_14, VAR_15, 0, VAR_12);
 FUNC_5(VAR_10, VAR_14, VAR_18, 1);
 FUNC_11(VAR_10);

 return(VAR_17);
}
