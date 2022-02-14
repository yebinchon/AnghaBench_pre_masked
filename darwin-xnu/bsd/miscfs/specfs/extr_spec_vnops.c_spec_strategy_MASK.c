
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int uthread_t ;
struct vnop_strategy_args {TYPE_1__* a_bp; } ;
struct bufattr {int ba_flags; } ;
struct buf {int dummy; } ;
struct _throttle_io_info_t {int throttle_last_write_timestamp; } ;
typedef int (* strategy_fcn_ret_t ) (TYPE_1__*) ;
typedef TYPE_2__* proc_t ;
typedef TYPE_3__* mount_t ;
typedef int dev_t ;
typedef TYPE_1__* buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {TYPE_3__* v_mount; } ;
struct TYPE_18__ {int mnt_ioflags; size_t mnt_devbsdunit; int mnt_throttle_mask; int mnt_pending_read_size; int mnt_pending_write_size; int mnt_last_write_issued_timestamp; } ;
struct TYPE_17__ {int p_flag; } ;
struct TYPE_16__ {int b_flags; int b_timestamp_tv; int b_upl; struct bufattr b_attr; } ;
struct TYPE_15__ {scalar_t__ d_strategy; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (int,int ,int,int,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct bufattr*,int) ;
 scalar_t__ VAR_33 ;
 struct _throttle_io_info_t* VAR_34 ;
 TYPE_14__* VAR_35 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_8__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct bufattr*) ;
 TYPE_2__* FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_36 ;
 size_t FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,struct _throttle_io_info_t*,scalar_t__,scalar_t__) ;
 int FUNC_24 (struct _throttle_io_info_t*,int ,int,scalar_t__,scalar_t__,struct bufattr*) ;
 int FUNC_25 (int ) ;

int
FUNC_26(struct vnop_strategy_args *VAR_37)
{
 buf_t VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;
 dev_t VAR_42;
 uthread_t VAR_43;
 mount_t VAR_44;
 struct bufattr *VAR_45;
 int VAR_46;
 struct _throttle_io_info_t *VAR_47;
 boolean_t VAR_48 = VAR_24;
 boolean_t VAR_49 = VAR_24;
 boolean_t VAR_50 = VAR_24;
 int VAR_51 = 0;


 proc_t VAR_52 = FUNC_12();


        VAR_38 = VAR_37->a_bp;
 VAR_42 = FUNC_8(VAR_38);
 VAR_44 = FUNC_10(VAR_38)->v_mount;
 VAR_45 = &VAR_38->b_attr;
 VAR_40 = FUNC_19(&VAR_43);

 VAR_41 = FUNC_20(&VAR_43);






 if (VAR_44 && VAR_40 > FUNC_21(VAR_43, VAR_40)) {





  VAR_50 = VAR_33;

 }

 if (VAR_38->b_flags & VAR_7)
  VAR_45->ba_flags |= VAR_2;
 FUNC_5(VAR_45, VAR_40);

 if (VAR_41) {
  VAR_38->b_flags |= VAR_9;
  VAR_45->ba_flags |= VAR_4;
 }


 if ((VAR_52 != ((void*)0)) && ((VAR_52->p_flag & VAR_32) == VAR_32))
  VAR_45->ba_flags |= VAR_0;


 VAR_39 = VAR_38->b_flags;

 if (((VAR_39 & VAR_10) == 0) && ((VAR_39 & VAR_5) == 0))
  FUNC_11(VAR_45);

 if (VAR_39 & VAR_10)
         VAR_51 |= VAR_19;
 if (VAR_39 & VAR_5)
         VAR_51 |= VAR_14;

 if (VAR_45->ba_flags & VAR_2)
         VAR_51 |= VAR_15;
 else if (VAR_39 & VAR_8)
         VAR_51 |= VAR_17;

 if (VAR_40 != 0)
  VAR_51 |= VAR_20;

 VAR_51 |= ((VAR_40 << VAR_22) & VAR_21);

 if (VAR_39 & VAR_9)
  VAR_51 |= VAR_18;

 if (VAR_45->ba_flags & VAR_3)
  VAR_51 |= VAR_16;

 if (VAR_50) {
  VAR_51 |= VAR_23;
  FUNC_4(VAR_45->ba_flags, VAR_1);
 }

 if (VAR_36) {
  FUNC_3(VAR_29, FUNC_0(VAR_11, VAR_51) | VAR_12,
       FUNC_9(VAR_38), VAR_42, FUNC_6(VAR_38), FUNC_7(VAR_38), 0);
        }

 FUNC_18(FUNC_13(), FUNC_7(VAR_38), VAR_51);

 if (VAR_44 != ((void*)0)) {
  if (FUNC_14(VAR_44))
   VAR_48 = VAR_33;





  if (VAR_44->mnt_devbsdunit || (VAR_44->mnt_throttle_mask != VAR_30 - 1 && VAR_44->mnt_throttle_mask & 0x1)) {
   VAR_49 = VAR_33;
  }
  VAR_47 = &VAR_34[VAR_44->mnt_devbsdunit];

 } else
  VAR_47 = &VAR_34[VAR_30 - 1];

 FUNC_24(VAR_47, VAR_43, VAR_39, VAR_48, VAR_49, VAR_45);

 if ((VAR_39 & VAR_10) == 0) {
  FUNC_16(&VAR_47->throttle_last_write_timestamp);

  if (VAR_44) {
   VAR_44->mnt_last_write_issued_timestamp = VAR_47->throttle_last_write_timestamp;
   FUNC_1(FUNC_7(VAR_38), VAR_44->mnt_pending_write_size);
  }
 } else if (VAR_44) {
  FUNC_1(FUNC_7(VAR_38), VAR_44->mnt_pending_read_size);
 }
 typedef int strategy_fcn_ret_t(struct buf *VAR_53);

 VAR_46 = (*(strategy_fcn_ret_t*)VAR_35[FUNC_15(VAR_42)].d_strategy)(VAR_38);




 FUNC_16(&VAR_38->b_timestamp_tv);

 if (((int)0xcafefeed) == VAR_46) {




  FUNC_22(VAR_43);

 } else if (((int)0xcafebeef) == VAR_46) {




  FUNC_23(VAR_43, VAR_47, VAR_33, VAR_48);
 }
 return (0);
}
