
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnode {int dummy; } ;
struct uio {int uio_offset; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {int fg_flag; int fg_offset; scalar_t__ fg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct vnode*,struct uio*,int,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ,int ,struct vnode*) ;
 scalar_t__ FUNC_2 (struct uio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct vnode*,struct uio*) ;
 int FUNC_7 (struct vnode*) ;
 scalar_t__ FUNC_8 (struct vnode*) ;
 scalar_t__ FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 scalar_t__ FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct fileproc *VAR_15, struct uio *VAR_16, int VAR_17, vfs_context_t VAR_18)
{
 struct vnode *VAR_19;
 int VAR_20;
 int VAR_21;
 off_t VAR_22;
 int VAR_23 = 0;

 VAR_19 = (struct vnode *)VAR_15->f_fglob->fg_data;
 if ( (VAR_20 = FUNC_7(VAR_19)) ) {
  return(VAR_20);
 }
 VAR_21 = VAR_12;

 if (VAR_15->f_fglob->fg_flag & VAR_2)
  VAR_21 |= VAR_8;
 if ((VAR_15->f_fglob->fg_flag & VAR_1) || FUNC_8(VAR_19))
     VAR_21 |= VAR_9;
 if (VAR_15->f_fglob->fg_flag & VAR_0) {
  VAR_21 |= VAR_6;
 }
 if (VAR_15->f_fglob->fg_flag & VAR_5) {
  VAR_21 |= VAR_11;
 }
 if (VAR_15->f_fglob->fg_flag & VAR_13) {
  VAR_21 |= VAR_7;
 }
 if (VAR_15->f_fglob->fg_flag & VAR_3)
     VAR_21 |= VAR_10;

 if ((VAR_17 & VAR_4) == 0) {
  if ((FUNC_11(VAR_19) == VAR_14) && !FUNC_9(VAR_19)) {
   FUNC_4(VAR_15->f_fglob);
   VAR_23 = 1;
  }
  VAR_16->uio_offset = VAR_15->f_fglob->fg_offset;
 }
 VAR_22 = FUNC_2(VAR_16);

 if (FUNC_9(VAR_19) && !(VAR_11 & VAR_21)) {


  VAR_20 = FUNC_6(VAR_19, VAR_16);
 } else {
  VAR_20 = FUNC_0(VAR_19, VAR_16, VAR_21, VAR_18);
 }

 if ((VAR_17 & VAR_4) == 0) {
  VAR_15->f_fglob->fg_offset += VAR_22 - FUNC_2(VAR_16);
  if (VAR_23) {
   FUNC_5(VAR_15->f_fglob);
   VAR_23 = 0;
  }
 }

 (void)FUNC_10(VAR_19);
 return (VAR_20);
}
