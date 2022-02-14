
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int vnode_t ;
typedef scalar_t__ u_int ;
struct fileproc {int f_flags; scalar_t__ f_type; TYPE_10__* f_fglob; scalar_t__ f_data; } ;
struct filedesc {int* fd_ofileflags; int fd_knlistsize; } ;
typedef TYPE_1__* proc_t ;
typedef int int64_t ;
struct TYPE_16__ {struct filedesc* p_fd; } ;
struct TYPE_15__ {int fg_cred; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct fileproc*,TYPE_10__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct fileproc*) ;
 int FUNC_6 (struct fileproc*) ;
 int VAR_14 ;
 int FUNC_7 (int ,int ,uintptr_t,uintptr_t) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_1__*,struct fileproc*) ;
 int FUNC_19 (int*) ;

int
FUNC_20(proc_t VAR_15, int VAR_16, struct fileproc *VAR_17, int VAR_18)
{
 struct filedesc *VAR_19 = VAR_15->p_fd;
 int VAR_20 =0;
 int VAR_21 = VAR_18 & VAR_4;







 FUNC_14(VAR_15, VAR_16);


 if ((VAR_17->f_flags & VAR_6) == VAR_6) {
  FUNC_10("close_internal_locked: being called on already closing fd");
 }







 VAR_17->f_flags |= VAR_6;

 if ( (VAR_17->f_flags & VAR_5) || FUNC_8() ) {

         FUNC_13(VAR_15);

  if ( (VAR_17->f_type == VAR_2) && FUNC_8() ) {




          if (FUNC_16((vnode_t)VAR_17->f_data) == 0) {
           u_int VAR_22 = 0;
           if ((VAR_17->f_flags & VAR_9) != 0)
            VAR_22 |= VAR_11;
           FUNC_7(VAR_17->f_fglob->fg_cred, VAR_10,
             (uintptr_t)VAR_17->f_data, (uintptr_t)VAR_22);
    FUNC_17((vnode_t)VAR_17->f_data);
   }
  }
  if (VAR_17->f_flags & VAR_5)



          FUNC_2( VAR_15, VAR_16 );

  FUNC_11(VAR_15);
 }

 if (VAR_16 < VAR_19->fd_knlistsize)
  FUNC_9(VAR_15, VAR_16);

 if (VAR_17->f_flags & VAR_8)
  (void)FUNC_18(VAR_15, VAR_17);

 FUNC_5(VAR_15, VAR_17);

 if (VAR_21 == 0) {
  FUNC_3(VAR_15, VAR_16);
 } else {
  FUNC_15(VAR_15, VAR_16);
 }

 if (VAR_3 && VAR_17->f_type == VAR_1)
  FUNC_0(VAR_14, VAR_0,
      VAR_16, 0, (int64_t)FUNC_1(VAR_17->f_data));

 VAR_20 = FUNC_4(VAR_17, VAR_17->f_fglob, VAR_15);
 if ((VAR_17->f_flags & VAR_7) == VAR_7)
  FUNC_19(&VAR_17->f_flags);
 VAR_17->f_flags &= ~(VAR_7 | VAR_6);

 FUNC_13(VAR_15);

 FUNC_6(VAR_17);

 FUNC_11(VAR_15);
 return(VAR_20);
}
