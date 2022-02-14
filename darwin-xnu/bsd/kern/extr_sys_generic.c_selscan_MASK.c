
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
struct vfs_context {int vc_ucred; } ;
struct proc {struct filedesc* p_fd; } ;
struct fileproc {int f_flags; scalar_t__ f_type; scalar_t__ f_ops; int f_cred; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
struct _select_data {int count; int * wqp; } ;
struct _select {int* ibits; int* obits; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct fileproc*,int,scalar_t__*,struct vfs_context*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct fileproc*,void**,struct waitq_set*) ;
 int FUNC_6 (struct fileproc*,int ,struct waitq_set*) ;
 struct vfs_context* FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct waitq*) ;
 int FUNC_10 (struct waitq_set*) ;

__attribute__((used)) static int
FUNC_11(struct proc *VAR_8, struct _select *VAR_9, struct _select_data * VAR_10,
 int VAR_11, int32_t *VAR_12, int VAR_13, struct waitq_set *VAR_14)
{
 struct filedesc *VAR_15 = VAR_8->p_fd;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 u_int32_t VAR_20;
 struct fileproc *VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 static int VAR_24[3] = { 129, 128, 0 };
 u_int32_t *VAR_25, *VAR_26;
 u_int VAR_27;
 u_int32_t *VAR_28, *VAR_29;
 uint64_t VAR_30, *VAR_31 = ((void*)0);
 int VAR_32;
 struct vfs_context VAR_33 = *FUNC_7();





 if (VAR_15 == ((void*)0)) {
  *VAR_12=0;
  return(VAR_1);
 }
 VAR_28 = VAR_9->ibits;
 VAR_29 = VAR_9->obits;

 VAR_27 = FUNC_2(VAR_11, VAR_4);

 VAR_32 = VAR_10->count;

 VAR_23 = 0;
 if (!VAR_32) {
  *VAR_12 = 0;
  return 0;
 }

 FUNC_3(VAR_8);
 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  VAR_25 = (u_int32_t *)&VAR_28[VAR_16 * VAR_27];
  VAR_26 = (u_int32_t *)&VAR_29[VAR_16 * VAR_27];

  for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17 += VAR_4) {
   VAR_20 = VAR_25[VAR_17/VAR_4];

   while ((VAR_18 = FUNC_0(VAR_20)) && (VAR_19 = VAR_17 + --VAR_18) < VAR_11) {
    VAR_20 &= ~(1 << VAR_18);

    if (VAR_19 < VAR_15->fd_nfiles)
     VAR_21 = VAR_15->fd_ofiles[VAR_19];
    else
     VAR_21 = ((void*)0);

    if (VAR_21 == ((void*)0) || (VAR_15->fd_ofileflags[VAR_19] & VAR_7)) {




     FUNC_4(VAR_8);
     return(VAR_0);
    }
    if (VAR_13 == VAR_6) {
     VAR_30 = 0;
     VAR_31 = ((void*)0);
     FUNC_6(VAR_21, VAR_10->wqp[VAR_23], VAR_14);
    } else {
     VAR_30 = FUNC_9((struct waitq *)VAR_14);
     VAR_31 = &VAR_30;
     if (VAR_21->f_flags & VAR_2)

      VAR_21->f_flags |= VAR_3;
     else
      VAR_21->f_flags |= VAR_2;

     FUNC_10(VAR_14);
    }

    VAR_33.vc_ucred = VAR_21->f_cred;





    uint64_t VAR_34 = VAR_30;


    if (VAR_21->f_ops && VAR_21->f_type
     && FUNC_1(VAR_21, VAR_24[VAR_16], VAR_31, &VAR_33)) {
     VAR_26[VAR_19/VAR_4] |= (1 << (VAR_19 % VAR_4));
     VAR_22++;
    }
    if (VAR_13 == VAR_5) {
     FUNC_8(VAR_34);






     if (VAR_30 == VAR_34)
      VAR_31 = ((void*)0);






     VAR_10->wqp[VAR_23] = FUNC_5(VAR_21, (void **)VAR_31, VAR_14);
    }
    VAR_23++;
   }
  }
 }
 FUNC_4(VAR_8);

 *VAR_12 = VAR_22;
 return (0);
}
