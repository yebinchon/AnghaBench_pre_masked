
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int * vfs_context_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef void* u_int16_t ;
typedef int off_t ;
typedef TYPE_1__* mount_t ;
typedef int errno_t ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ dk_corestorage_info_t ;
typedef scalar_t__ dk_apfs_flavour_t ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ mnt_devbsdunit; int mnt_devblocksize; int mnt_maxreadcnt; int mnt_maxwritecnt; int mnt_maxsegreadsize; int mnt_maxsegwritesize; int mnt_alignmentmask; int mnt_ioqueue_depth; int mnt_ioscale; int mnt_ioflags; int mnt_minsaturationbytecount; void* mnt_segwritecnt; void* mnt_segreadcnt; int mnt_kern_flag; int mnt_throttle_mask; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ VAR_39 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int * FUNC_6 () ;

errno_t
FUNC_7(vnode_t VAR_42, mount_t VAR_43)
{
 int VAR_44;
 off_t VAR_45 = 0;
 off_t VAR_46 = 0;
 off_t VAR_47 = 0;
 off_t VAR_48 = 0;
 off_t VAR_49 = 0;
 off_t VAR_50 = 0;
 off_t VAR_51 = 0;
 off_t VAR_52 = 0;
 off_t VAR_53 = 0;
 u_int32_t VAR_54 = 0;
 u_int32_t VAR_55 = 0;
 u_int32_t VAR_56;
 u_int64_t VAR_57;
 u_int32_t VAR_58;
 vfs_context_t VAR_59 = FUNC_6();
 dk_corestorage_info_t VAR_60;
 boolean_t VAR_61 = VAR_23;;
 int VAR_62 = 0;
 int VAR_63 = 0;


 FUNC_1(VAR_42, VAR_15, (caddr_t)&VAR_43->mnt_throttle_mask, 0, ((void*)0));




 VAR_43->mnt_devbsdunit = FUNC_2(VAR_43->mnt_throttle_mask);

 if (VAR_42 == VAR_41)
  VAR_40 = VAR_43->mnt_devbsdunit;

 if (VAR_43->mnt_devbsdunit == VAR_40) {





  VAR_43->mnt_kern_flag |= VAR_25;
 }





 FUNC_4(VAR_42);


 if ((VAR_44 = FUNC_1(VAR_42, VAR_2,
    (caddr_t)&VAR_56, 0, VAR_59)))
  return (VAR_44);

 VAR_43->mnt_devblocksize = VAR_56;
 VAR_43->mnt_maxreadcnt = VAR_24;
 VAR_43->mnt_maxwritecnt = VAR_24;

 if (FUNC_1(VAR_42, VAR_17, (caddr_t)&VAR_63, 0, VAR_59) == 0) {
         if (VAR_63)
          VAR_43->mnt_kern_flag |= VAR_27;
 }
 if (FUNC_1(VAR_42, VAR_16, (caddr_t)&VAR_62, 0, VAR_59) == 0) {
         if (VAR_62)
          VAR_43->mnt_kern_flag |= VAR_26;
 }
 if ((VAR_44 = FUNC_1(VAR_42, VAR_4,
    (caddr_t)&VAR_58, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_6,
    (caddr_t)&VAR_45, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_7,
    (caddr_t)&VAR_46, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_8,
    (caddr_t)&VAR_47, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_9,
    (caddr_t)&VAR_48, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_12,
    (caddr_t)&VAR_49, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_13,
    (caddr_t)&VAR_50, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_10,
    (caddr_t)&VAR_51, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_11,
    (caddr_t)&VAR_52, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_14,
    (caddr_t)&VAR_53, 0, VAR_59)))
  return (VAR_44);

 if ((VAR_44 = FUNC_1(VAR_42, VAR_3,
    (caddr_t)&VAR_55, 0, VAR_59)))
  return (VAR_44);

 if (VAR_47)
  VAR_43->mnt_maxreadcnt = (VAR_47 > VAR_38) ? VAR_38 : VAR_47;

 if (VAR_45) {
  VAR_57 = VAR_45 * VAR_56;
  VAR_57 = (VAR_57 > VAR_38) ? VAR_38 : VAR_57;

  if (VAR_57 < VAR_43->mnt_maxreadcnt)
   VAR_43->mnt_maxreadcnt = (u_int32_t)VAR_57;
 }

 if (VAR_48)
  VAR_43->mnt_maxwritecnt = (VAR_48 > VAR_38) ? VAR_38 : VAR_48;

 if (VAR_46) {
  VAR_57 = VAR_46 * VAR_56;
  VAR_57 = (VAR_57 > VAR_38) ? VAR_38 : VAR_57;

  if (VAR_57 < VAR_43->mnt_maxwritecnt)
   VAR_43->mnt_maxwritecnt = (u_int32_t)VAR_57;
 }

 if (VAR_49) {
         VAR_57 = (VAR_49 > VAR_37) ? VAR_37 : VAR_49;
 } else {
  VAR_57 = VAR_43->mnt_maxreadcnt / VAR_35;

  if (VAR_57 > VAR_37)
   VAR_57 = VAR_37;
 }
 VAR_43->mnt_segreadcnt = (u_int16_t)VAR_57;

 if (VAR_50) {
         VAR_57 = (VAR_50 > VAR_37) ? VAR_37 : VAR_50;
 } else {
  VAR_57 = VAR_43->mnt_maxwritecnt / VAR_35;

  if (VAR_57 > VAR_37)
   VAR_57 = VAR_37;
 }
 VAR_43->mnt_segwritecnt = (u_int16_t)VAR_57;

 if (VAR_51)
         VAR_57 = (VAR_51 > VAR_38) ? VAR_38 : VAR_51;
 else
         VAR_57 = VAR_43->mnt_maxreadcnt;
 VAR_43->mnt_maxsegreadsize = (u_int32_t)VAR_57;

 if (VAR_52)
         VAR_57 = (VAR_52 > VAR_38) ? VAR_38 : VAR_52;
 else
         VAR_57 = VAR_43->mnt_maxwritecnt;
 VAR_43->mnt_maxsegwritesize = (u_int32_t)VAR_57;

 if (VAR_53)
         VAR_57 = (VAR_53 > VAR_35) ? VAR_34 : VAR_53 - 1;
 else
         VAR_57 = 0;
 VAR_43->mnt_alignmentmask = VAR_57;


 if (VAR_55 > VAR_28)
  VAR_57 = VAR_55;
 else
  VAR_57 = VAR_28;

 VAR_43->mnt_ioqueue_depth = VAR_57;
 VAR_43->mnt_ioscale = FUNC_0(VAR_43->mnt_ioqueue_depth);

 if (VAR_43->mnt_ioscale > 1)
  FUNC_3("ioqueue_depth = %d,   ioscale = %d\n", (int)VAR_43->mnt_ioqueue_depth, (int)VAR_43->mnt_ioscale);

 if (VAR_58 & VAR_20)
         VAR_43->mnt_ioflags |= VAR_30;

 if (FUNC_1(VAR_42, VAR_5, (caddr_t)&VAR_54, 0, VAR_59) == 0) {
  VAR_43->mnt_minsaturationbytecount = VAR_54;
 } else {
  VAR_43->mnt_minsaturationbytecount = 0;
 }

 if (FUNC_1(VAR_42, VAR_0, (caddr_t)&VAR_60, 0, VAR_59) == 0)
  VAR_61 = VAR_36;

 if (VAR_58 & VAR_22) {
  VAR_43->mnt_ioflags |= VAR_33;

  if (VAR_61 == VAR_36)
   VAR_43->mnt_ioflags |= VAR_29;
 }
 if (VAR_61 == VAR_36) {




  if ((VAR_60.flags & VAR_19))
   VAR_43->mnt_ioflags |= VAR_31;
 } else {

  dk_apfs_flavour_t VAR_64;
  if ((FUNC_1(VAR_42, VAR_1, (caddr_t)&VAR_64, 0, VAR_59) == 0) &&
      (VAR_64 == VAR_18)) {
   VAR_43->mnt_ioflags |= VAR_31;
  }
 }







 return (VAR_44);
}
