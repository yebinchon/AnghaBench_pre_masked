
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef size_t uint64_t ;
typedef int uint32_t ;
struct vnode_attr {size_t va_data_size; size_t va_total_size; size_t va_data_alloc; size_t va_total_alloc; int va_iosize; int va_rdev; size_t va_rsrc_length; size_t va_rsrc_alloc; scalar_t__ va_nlink; } ;
struct vnode {scalar_t__ v_type; TYPE_4__* v_specinfo; TYPE_2__* v_mount; } ;
struct attrlist {int fileattr; } ;
struct TYPE_7__ {int fileattr; } ;
struct _attrlist_buf {TYPE_3__ actual; } ;
typedef int errno_t ;
struct TYPE_8__ {int si_rdev; } ;
struct TYPE_5__ {int f_bsize; } ;
struct TYPE_6__ {TYPE_1__ mnt_vfsstat; } ;


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
 int FUNC_0 (struct _attrlist_buf,int) ;
 int FUNC_1 (struct _attrlist_buf,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t FUNC_3 (size_t,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (struct vnode*,int ,int *,size_t*,int ,int ) ;

__attribute__((used)) static errno_t
FUNC_5(vfs_context_t VAR_27, struct vnode *VAR_28, struct attrlist *VAR_29,
    struct _attrlist_buf *VAR_30, struct vnode_attr *VAR_31, int VAR_32,
    int VAR_33, int VAR_34)
{
 size_t VAR_35 = 0;
 uint64_t VAR_36 = 0;
 uint64_t VAR_37 = 0;
 int VAR_38 = 0;





 if (VAR_28 && !VAR_34 &&
     (VAR_29->fileattr & (VAR_9 | VAR_0 |
     VAR_8 | VAR_7))) {

  VAR_38 = FUNC_4(VAR_28, VAR_18, ((void*)0),
      &VAR_35, VAR_17, VAR_27);
  if (VAR_38) {
   if ((VAR_38 == VAR_12) || (VAR_38 == VAR_11) ||
       (VAR_38 == VAR_13) || (VAR_38 == VAR_14) ||
       (VAR_38 == VAR_10)) {
    VAR_35 = 0;
    VAR_38 = 0;
   } else {
    goto out;
   }
  }
  VAR_36 = VAR_35;

  if (VAR_29->fileattr & (VAR_7 |
      VAR_0)) {
   uint32_t VAR_39;

   VAR_39 = VAR_28->v_mount->mnt_vfsstat.f_bsize;

   if (VAR_39 == 0) {
    VAR_39 = 512;
   }
   VAR_37 = FUNC_3(VAR_35, VAR_39);
  }
 }

 if (VAR_29->fileattr & VAR_6) {
  FUNC_0((*VAR_30), (uint32_t)VAR_31->va_nlink);
  VAR_30->actual.fileattr |= VAR_6;
 }
 if (VAR_29->fileattr & VAR_9) {
  if (!VAR_34) {
   uint64_t VAR_40 = VAR_36;

   if (FUNC_2(VAR_31, VAR_20)) {
    VAR_40 += VAR_31->va_data_size;
   } else if (FUNC_2(VAR_31, VAR_26)) {
    VAR_40 += VAR_31->va_total_size;
   }

   FUNC_1((*VAR_30), VAR_40);
   VAR_30->actual.fileattr |= VAR_9;
  } else if (FUNC_2(VAR_31, VAR_26)) {
   FUNC_1((*VAR_30), VAR_31->va_total_size);
   VAR_30->actual.fileattr |= VAR_9;
  } else if (!VAR_32 || VAR_33) {
   uint64_t VAR_41 = 0;

   FUNC_1((*VAR_30), VAR_41);
  }
 }
 if (VAR_29->fileattr & VAR_0) {
  if (!VAR_34) {
   uint64_t VAR_42 = VAR_37;





   if (FUNC_2(VAR_31, VAR_19)) {
    VAR_42 += VAR_31->va_data_alloc;
   } else if (FUNC_2(VAR_31, VAR_25)) {
    VAR_42 += VAR_31->va_total_alloc;
   }

   FUNC_1((*VAR_30), VAR_42);
   VAR_30->actual.fileattr |= VAR_0;
  } else if (FUNC_2(VAR_31, VAR_25)) {
   FUNC_1((*VAR_30), VAR_31->va_total_alloc);
   VAR_30->actual.fileattr |= VAR_0;
  } else if (!VAR_32 || VAR_33) {
   uint64_t VAR_43 = 0;

   FUNC_1((*VAR_30), VAR_43);
  }
 }
 if (VAR_29->fileattr & VAR_5) {
  if (FUNC_2(VAR_31, VAR_21)) {
   FUNC_0((*VAR_30), VAR_31->va_iosize);
   VAR_30->actual.fileattr |= VAR_5;
  } else if (!VAR_32 || VAR_33) {
   FUNC_0((*VAR_30), 0);
  }
 }
 if (VAR_29->fileattr & VAR_1) {
  if (!VAR_32 || VAR_33) {
   FUNC_0((*VAR_30), 0);
   VAR_30->actual.fileattr |= VAR_1;
  }
 }
 if (VAR_29->fileattr & VAR_4) {
  if (VAR_28 && (VAR_28->v_type == VAR_16 || VAR_28->v_type == VAR_15)) {
   uint32_t VAR_44;

   if (VAR_28->v_specinfo != ((void*)0)) {
    VAR_44 = VAR_28->v_specinfo->si_rdev;
   } else if (FUNC_2(VAR_31, VAR_22)) {
    VAR_44 = VAR_31->va_rdev;
   } else {
    VAR_44 = 0;
   }
   FUNC_0((*VAR_30), VAR_44);
   VAR_30->actual.fileattr |= VAR_4;
  } else if (VAR_28) {
   FUNC_0((*VAR_30), 0);
   VAR_30->actual.fileattr |= VAR_4;
  } else if (FUNC_2(VAR_31, VAR_22)) {
   FUNC_0((*VAR_30), VAR_31->va_rdev);
   VAR_30->actual.fileattr |= VAR_4;
  } else if (!VAR_32 || VAR_33) {
   FUNC_0((*VAR_30), 0);
  }
 }





 if (VAR_29->fileattr & VAR_3) {
  if (FUNC_2(VAR_31, VAR_20)) {
   FUNC_1((*VAR_30), VAR_31->va_data_size);
   VAR_30->actual.fileattr |= VAR_3;
  } else if (FUNC_2(VAR_31, VAR_26)){
   FUNC_1((*VAR_30), VAR_31->va_total_size);
   VAR_30->actual.fileattr |= VAR_3;
  } else if (!VAR_32 || VAR_33) {
   uint64_t VAR_45 = 0;
   FUNC_1((*VAR_30), VAR_45);
  }
 }
 if (VAR_29->fileattr & VAR_2) {
  if (FUNC_2(VAR_31, VAR_19)) {
   FUNC_1((*VAR_30), VAR_31->va_data_alloc);
   VAR_30->actual.fileattr |= VAR_2;
  } else if (FUNC_2(VAR_31, VAR_25)){
   FUNC_1((*VAR_30), VAR_31->va_total_alloc);
   VAR_30->actual.fileattr |= VAR_2;
  } else if (!VAR_32 || VAR_33) {
   uint64_t VAR_46 = 0;
   FUNC_1((*VAR_30), VAR_46);
  }
 }

 if (VAR_29->fileattr & VAR_8) {
  if (!VAR_34) {
   FUNC_1((*VAR_30), VAR_36);
   VAR_30->actual.fileattr |= VAR_8;
  } else if (FUNC_2(VAR_31, VAR_24)) {
   FUNC_1((*VAR_30), VAR_31->va_rsrc_length);
   VAR_30->actual.fileattr |= VAR_8;
  } else if (!VAR_32 || VAR_33) {
   uint64_t VAR_47 = 0;

   FUNC_1((*VAR_30), VAR_47);
  }
 }
 if (VAR_29->fileattr & VAR_7) {
  if (!VAR_34) {
   FUNC_1((*VAR_30), VAR_37);
   VAR_30->actual.fileattr |= VAR_7;
  } else if (FUNC_2(VAR_31, VAR_23)) {
   FUNC_1((*VAR_30), VAR_31->va_rsrc_alloc);
   VAR_30->actual.fileattr |= VAR_7;
  } else if (!VAR_32 || VAR_33) {
   uint64_t VAR_48 = 0;

   FUNC_1((*VAR_30), VAR_48);
  }
 }
out:
 return (VAR_38);
}
