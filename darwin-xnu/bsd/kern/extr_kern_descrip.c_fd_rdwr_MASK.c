
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
typedef int uio_buf ;
typedef int uint64_t ;
struct vfs_context {int vc_ucred; } ;
struct fileproc {scalar_t__ f_type; int f_flag; TYPE_1__* f_fglob; } ;
typedef int proc_t ;
typedef int off_t ;
typedef scalar_t__ int64_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;
struct TYPE_2__ {int fg_cred; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 (struct fileproc*,int *,int,struct vfs_context*) ;
 int FUNC_4 (struct fileproc*,int *,int,struct vfs_context*) ;
 int FUNC_5 (int ,int,struct fileproc*,int ) ;
 int FUNC_6 (int ,int,struct fileproc*) ;
 int FUNC_7 (int ,int,struct fileproc**,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int * FUNC_10 (int,int ,int,int,char*,int) ;
 scalar_t__ FUNC_11 (int *) ;
 struct vfs_context* FUNC_12 () ;

int
FUNC_13(
 int VAR_15,
 enum uio_rw VAR_16,
 uint64_t VAR_17,
 int64_t VAR_18,
 enum uio_seg VAR_19,
 off_t VAR_20,
 int VAR_21,
 int64_t *VAR_22)
{
        struct fileproc *VAR_23;
 proc_t VAR_24;
        int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27;
 uio_t VAR_28 = ((void*)0);
 char VAR_29[ FUNC_1(1) ];
 struct vfs_context VAR_30 = *(FUNC_12());
 bool VAR_31 = 0;

 VAR_24 = FUNC_2();

        VAR_25 = FUNC_7(VAR_24, VAR_15, &VAR_23, 0);
        if (VAR_25)
                return(VAR_25);

 if (VAR_23->f_type != VAR_2 && VAR_23->f_type != VAR_0 && VAR_23->f_type != VAR_1) {
  VAR_25 = VAR_4;
  goto out;
 }
 if (VAR_16 == VAR_14 && !(VAR_23->f_flag & VAR_8)) {
                VAR_25 = VAR_3;
  goto out;
 }

 if (VAR_16 == VAR_10 && !(VAR_23->f_flag & VAR_7)) {
      VAR_25 = VAR_3;
      goto out;
 }

 VAR_30.vc_ucred = VAR_23->f_fglob->fg_cred;

 if (FUNC_0(VAR_19))
  VAR_27 = FUNC_8(VAR_24) ? VAR_13 : VAR_12;
 else
  VAR_27 = VAR_11;

 VAR_28 = FUNC_10(1, VAR_20, VAR_27, VAR_16, &VAR_29[0], sizeof(VAR_29));

 FUNC_9(VAR_28, VAR_17, VAR_18);

 if ( !(VAR_21 & VAR_9))
  VAR_26 = VAR_6;

 if (VAR_16 == VAR_14) {
  user_ssize_t VAR_32 = FUNC_11(VAR_28);
  VAR_25 = FUNC_4(VAR_23, VAR_28, VAR_26, &VAR_30);
  VAR_31 = FUNC_11(VAR_28) < VAR_32;
 } else
  VAR_25 = FUNC_3(VAR_23, VAR_28, VAR_26, &VAR_30);

 if (VAR_22)
  *VAR_22 = FUNC_11(VAR_28);
 else {
  if (FUNC_11(VAR_28) && VAR_25 == 0)
   VAR_25 = VAR_5;
 }
out:
        if (VAR_31)
                FUNC_6(VAR_24, VAR_15, VAR_23);
        else
                FUNC_5(VAR_24, VAR_15, VAR_23, 0);

 return VAR_25;
}
