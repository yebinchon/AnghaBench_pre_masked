
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int vnode_t ;
typedef TYPE_1__* upl_t ;
struct clios {int io_error; int io_completed; scalar_t__ io_wanted; int io_mtxp; } ;
typedef TYPE_1__* caddr_t ;
typedef TYPE_1__* buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {int b_lblkno; int b_bcount; int b_flags; int b_uploffset; int b_validend; int b_error; int b_resid; scalar_t__ b_cliodone; struct TYPE_19__* b_upl; struct TYPE_19__* b_trans_next; int b_dev; scalar_t__ b_iostate; struct TYPE_19__* b_real_bp; int b_vp; scalar_t__ b_trans_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,TYPE_1__*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * VAR_19 ;
 int FUNC_5 (struct clios*,TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,void*) ;
 int FUNC_12 (TYPE_1__*,int,int,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_15(buf_t VAR_20, void *VAR_21)
{
        int VAR_22;
        int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28 = 0;
        int VAR_29 = 0;
        int VAR_30 = 0;
 int VAR_31 = 0;
 upl_t VAR_32;
 buf_t VAR_33;
 buf_t VAR_34;
 buf_t VAR_35;
 buf_t VAR_36;
 vnode_t VAR_37;
 struct clios *VAR_38;
 boolean_t VAR_39 = VAR_12;

 FUNC_3(VAR_34 = (buf_t)(VAR_20->b_trans_head));

 FUNC_2((FUNC_0(VAR_8, 20)) | VAR_10,
       VAR_34, VAR_20->b_lblkno, VAR_20->b_bcount, VAR_20->b_flags, 0);

 if (VAR_34->b_trans_next || !(VAR_34->b_flags & VAR_2)) {
  FUNC_9(VAR_19);

  VAR_20->b_flags |= VAR_6;

  for (VAR_33 = VAR_34; VAR_33; VAR_33 = VAR_33->b_trans_next) {




   if ( !(VAR_33->b_flags & VAR_6)) {

    FUNC_2((FUNC_0(VAR_8, 20)) | VAR_9,
          VAR_34, VAR_33, VAR_33->b_bcount, VAR_33->b_flags, 0);

    FUNC_10(VAR_19);

    return 0;
   }

   if (VAR_33->b_trans_next == VAR_7) {
    FUNC_2((FUNC_0(VAR_8, 20)) | VAR_9,
        VAR_34, VAR_33, VAR_33->b_bcount, VAR_33->b_flags, 0);

    FUNC_10(VAR_19);
    FUNC_14(VAR_33);

    return 0;
   }

   if (VAR_33->b_flags & VAR_2)
    VAR_39 = VAR_15;
  }
  FUNC_10(VAR_19);

  if (VAR_39 == VAR_12) {
   FUNC_2((FUNC_0(VAR_8, 20)) | VAR_9,
         VAR_34, 0, 0, 0, 0);
   return 0;
  }
 }
 VAR_23 = 0;
 VAR_24 = 0;
 VAR_25 = 0;

 VAR_33 = VAR_34;
 VAR_37 = VAR_33->b_vp;
 VAR_26 = VAR_33->b_uploffset;
 VAR_32 = VAR_33->b_upl;
 VAR_22 = VAR_33->b_flags;
 VAR_36 = VAR_33->b_real_bp;
 VAR_27= VAR_33->b_validend;
 VAR_38 = (struct clios *)VAR_33->b_iostate;

 if (VAR_36)
         VAR_36->b_dev = VAR_33->b_dev;

 while (VAR_33) {
  if ((VAR_33->b_flags & VAR_3) && VAR_23 == 0)
          VAR_23 = VAR_33->b_error;

  VAR_25 += VAR_33->b_resid;
  VAR_24 += VAR_33->b_bcount;

  VAR_35 = VAR_33->b_trans_next;

  if (VAR_35 == ((void*)0))






   VAR_31 = VAR_33->b_uploffset + VAR_33->b_bcount - VAR_26;

  if (VAR_33 != VAR_34)
          FUNC_8(VAR_33);

  VAR_33 = VAR_35;
 }

 if (FUNC_1(VAR_22, VAR_1)) {
  FUNC_5(VAR_38,
           VAR_34->b_upl,
           VAR_26,
           VAR_31);
 }

 if (VAR_23 == 0 && VAR_25)
  VAR_23 = VAR_11;

 if (VAR_23 == 0) {
         int (*VAR_40)(buf_t, void *) = (int (*)(buf_t, void *))(VAR_34->b_cliodone);

  if (VAR_40 != ((void*)0)) {
          VAR_34->b_bcount = VAR_31;

          VAR_23 = (*VAR_40)(VAR_34, VAR_21);
  }
 }
 if (VAR_27)
         FUNC_7(VAR_32, VAR_27, VAR_14 - (VAR_27 & VAR_13), VAR_36);

        FUNC_8(VAR_34);

 if (VAR_38) {
         int VAR_41 = 0;





  FUNC_9(&VAR_38->io_mtxp);

         if (VAR_23 && VAR_38->io_error == 0)
          VAR_38->io_error = VAR_23;

  VAR_38->io_completed += VAR_24;

  if (VAR_38->io_wanted) {




          VAR_38->io_wanted = 0;
   VAR_41 = 1;
  }
  FUNC_10(&VAR_38->io_mtxp);

  if (VAR_41)
          FUNC_14((caddr_t)&VAR_38->io_wanted);
 }

 if (VAR_22 & VAR_1) {

  VAR_28 = VAR_26 & VAR_13;
  VAR_29 = (VAR_28 + VAR_31 + (VAR_14 - 1)) & ~VAR_13;

  if (VAR_23) {
          FUNC_13(VAR_32, VAR_23);

   VAR_30 = FUNC_6(VAR_32, VAR_26 - VAR_28, VAR_29, VAR_23, VAR_22, VAR_37);
  } else {
   VAR_30 = VAR_16;

   if ((VAR_22 & VAR_4) && (VAR_22 & VAR_5))
           VAR_30 |= VAR_18;

   if (VAR_22 & VAR_0)
           VAR_30 |= VAR_17;

   FUNC_12(VAR_32, VAR_26 - VAR_28, VAR_29, VAR_30);
  }
 }
 if (VAR_36) {
  if (VAR_23) {
   VAR_36->b_flags |= VAR_3;
   VAR_36->b_error = VAR_23;
  }
  VAR_36->b_resid = VAR_25;

  FUNC_4(VAR_36);
 }
 FUNC_2((FUNC_0(VAR_8, 20)) | VAR_9,
       VAR_32, VAR_26 - VAR_28, VAR_29, (VAR_23 << 24) | VAR_30, 0);

 return (VAR_23);
}
