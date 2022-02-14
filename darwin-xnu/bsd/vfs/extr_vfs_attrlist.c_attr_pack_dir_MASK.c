
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vnode_attr {int va_total_size; int va_data_size; int va_iosize; int va_total_alloc; int va_data_alloc; scalar_t__ va_nchildren; scalar_t__ va_dirlinkcount; } ;
struct vnode {int v_flag; TYPE_1__* v_resolve; } ;
struct attrlist {int dirattr; } ;
struct TYPE_4__ {int dirattr; } ;
struct _attrlist_buf {TYPE_2__ actual; } ;
typedef int errno_t ;
struct TYPE_3__ {int vr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct _attrlist_buf,int ) ;
 int FUNC_1 (struct _attrlist_buf,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct vnode*) ;

__attribute__((used)) static errno_t
FUNC_4(struct vnode *VAR_15, struct attrlist *VAR_16, struct _attrlist_buf *VAR_17,
    struct vnode_attr *VAR_18, int VAR_19, int VAR_20)
{
 if (VAR_16->dirattr & VAR_4) {
  FUNC_0((*VAR_17), (uint32_t)VAR_18->va_dirlinkcount);
  VAR_17->actual.dirattr |= VAR_4;
 }
 if (VAR_16->dirattr & VAR_2) {
  FUNC_0((*VAR_17), (uint32_t)VAR_18->va_nchildren);
  VAR_17->actual.dirattr |= VAR_2;
 }
 if (VAR_16->dirattr & VAR_5) {
  uint32_t VAR_21;

  if (VAR_15) {






   if ((VAR_15->v_flag & VAR_9) || FUNC_3(VAR_15)) {
    VAR_21 = VAR_6;
   } else {
    VAR_21 = 0;
   }
  } else {
   VAR_21 = 0;
  }

  FUNC_0((*VAR_17), VAR_21);
  VAR_17->actual.dirattr |= VAR_5;
 }
 if (VAR_16->dirattr & VAR_0) {
  if (FUNC_2(VAR_18, VAR_10)) {
   FUNC_1((*VAR_17), VAR_18->va_data_alloc);
   VAR_17->actual.dirattr |= VAR_0;
  } else if (FUNC_2(VAR_18, VAR_13)) {
   FUNC_1((*VAR_17), VAR_18->va_total_alloc);
   VAR_17->actual.dirattr |= VAR_0;
  } else if (!VAR_19 || VAR_20) {
   uint64_t VAR_22 = 0;
   FUNC_1((*VAR_17), VAR_22);
  }
 }
 if (VAR_16->dirattr & VAR_3) {
  if (FUNC_2(VAR_18, VAR_12)) {
   FUNC_0((*VAR_17), VAR_18->va_iosize);
   VAR_17->actual.dirattr |= VAR_3;
  } else if (!VAR_19 || VAR_20) {
   FUNC_0((*VAR_17), 0);
  }
 }





 if (VAR_16->dirattr & VAR_1) {
  if (FUNC_2(VAR_18, VAR_11)) {
   FUNC_1((*VAR_17), VAR_18->va_data_size);
   VAR_17->actual.dirattr |= VAR_1;
  } else if (FUNC_2(VAR_18, VAR_14)) {
   FUNC_1((*VAR_17), VAR_18->va_total_size);
   VAR_17->actual.dirattr |= VAR_1;
  } else if (!VAR_19 || VAR_20) {
   uint64_t VAR_23 = 0;
   FUNC_1((*VAR_17), VAR_23);
  }
 }

 return 0;
}
