
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;


typedef TYPE_3__* vnode_t ;
typedef int vm_offset_t ;
typedef void* upl_t ;
typedef int upl_page_info_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct bufhashhdr {int dummy; } ;
typedef int off_t ;
typedef int kern_return_t ;
typedef int daddr64_t ;
typedef TYPE_4__* buf_t ;
struct TYPE_29__ {int b_tag; int b_bcount; int b_bufsize; int b_lblkno; int b_blkno; int b_validend; int b_dirtyend; int * b_stackgetblk; int b_flags; int b_datap; int b_dirtyoff; int b_validoff; void* b_upl; TYPE_3__* b_vp; int b_owner; int b_lflags; } ;
struct TYPE_28__ {TYPE_2__* v_mount; } ;
struct TYPE_26__ {int f_fstypename; } ;
struct TYPE_27__ {TYPE_1__ mnt_vfsstat; } ;
struct TYPE_25__ {int bufs_miss; int bufs_vmhits; int bufs_incore; int bufs_busyincore; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bufhashhdr* FUNC_0 (TYPE_3__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (int ,int) ;
 int VAR_22 ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (TYPE_3__*,int ,int,int*,size_t*,int *,int,int *) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,struct bufhashhdr*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int VAR_28 ;
 int FUNC_15 (TYPE_4__*) ;
 int VAR_29 ;
 TYPE_12__ VAR_30 ;
 int FUNC_16 () ;
 TYPE_4__* FUNC_17 (int,int,int*) ;
 TYPE_4__* FUNC_18 (TYPE_3__*,int,struct bufhashhdr*) ;
 struct bufhashhdr VAR_31 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (TYPE_4__*,int ,int,char*,struct timespec*) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (int ,char const*) ;
 int FUNC_24 (TYPE_3__*,int) ;
 int FUNC_25 (TYPE_3__*,int ,int,void**,int **,int,int ) ;
 int FUNC_26 (void*,int *) ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (void*,uintptr_t,uintptr_t) ;
 int FUNC_29 (int *,int ) ;
 scalar_t__ FUNC_30 (TYPE_3__*) ;

buf_t
FUNC_31(vnode_t VAR_32, daddr64_t VAR_33, int VAR_34, int VAR_35, int VAR_36, int VAR_37)
{
 buf_t VAR_38;
 int VAR_39;
 upl_t VAR_40;
 upl_page_info_t *VAR_41;
 kern_return_t VAR_42;
 int VAR_43;
 struct timespec VAR_44;
 int VAR_45;
 struct bufhashhdr *VAR_46;

 FUNC_4((FUNC_2(VAR_10, 386)) | VAR_13,
       (uintptr_t)(VAR_33 * VAR_18), VAR_34, VAR_37, 0, 0);

 VAR_43 = VAR_37 & VAR_0;
 VAR_37 &= ~VAR_0;
 VAR_46 = FUNC_0(VAR_32, VAR_33);
start:
 FUNC_19(VAR_29);

 if ((VAR_38 = FUNC_18(VAR_32, VAR_33, VAR_46))) {



  if (FUNC_3(VAR_38->b_lflags, VAR_1)) {



   switch (VAR_37) {
   case 129:
   case 128:
   case 130:
    FUNC_7(VAR_38->b_lflags, VAR_2);
    VAR_30.bufs_busyincore++;





    VAR_44.tv_sec = (VAR_36/1000);
    VAR_44.tv_nsec = (VAR_36 % 1000) * 10 * VAR_17 * 1000;

    FUNC_4((FUNC_2(VAR_10, 396)) | VAR_12,
          (uintptr_t)VAR_33, VAR_34, VAR_37, 0, 0);

    VAR_39 = FUNC_21(VAR_38, VAR_29, VAR_35 | VAR_20 | (VAR_21 + 1), "buf_getblk", &VAR_44);





    if (VAR_39 && ((VAR_35 & VAR_19) || ((VAR_39 == VAR_14) && VAR_36)))
     return (((void*)0));
    goto start;


   default:



    FUNC_22("getblk: paging or unknown operation for incore busy buffer - %x\n", VAR_37);

    break;
   }
  } else {
   int VAR_47;




   FUNC_7(VAR_38->b_lflags, VAR_1);
   FUNC_7(VAR_38->b_flags, VAR_4);
   VAR_28++;

   FUNC_13(VAR_38);
   VAR_30.bufs_incore++;

   FUNC_20(VAR_29);




   if ( (VAR_38->b_upl) )
           FUNC_22("buffer has UPL, but not marked BUSY: %p", VAR_38);

   VAR_47 = VAR_15;
   if (!VAR_43) {
    if (VAR_37 == 130 && VAR_38->b_bcount < VAR_34) {





     if (FUNC_3(VAR_38->b_flags, VAR_5)) {
      FUNC_1(VAR_38->b_flags, VAR_4);
      FUNC_15(VAR_38);
      goto start;
     }





     VAR_47 = VAR_22;
    }

    if (VAR_38->b_bufsize != VAR_34)
     FUNC_10(VAR_38, VAR_34);
   }

   VAR_45 = 0;
   switch (VAR_37) {
   case 128:





    VAR_45 |= VAR_24;
   case 129:
    VAR_45 |= VAR_23;
           if (FUNC_8(VAR_38->b_vp) && VAR_38->b_bufsize) {
     VAR_42 = FUNC_25(VAR_32,
             FUNC_24(VAR_32, VAR_38->b_lblkno),
             VAR_38->b_bufsize,
             &VAR_40,
             &VAR_41,
             VAR_45,
             VAR_25);
     if (VAR_42 != VAR_16)
             FUNC_22("Failed to create UPL");

     VAR_38->b_upl = VAR_40;

     if (FUNC_29(VAR_41, 0)) {
             if (FUNC_27(VAR_41, 0))
              FUNC_7(VAR_38->b_flags, VAR_9);
      else
              FUNC_1(VAR_38->b_flags, VAR_9);
     } else
             FUNC_1(VAR_38->b_flags, (VAR_6 | VAR_4 | VAR_9 | VAR_5));

     VAR_42 = FUNC_26(VAR_40, (vm_offset_t*)&(VAR_38->b_datap));

     if (VAR_42 != VAR_16)
             FUNC_22("getblk: ubc_upl_map() failed with (%d)", VAR_42);
    }
    break;

   case 130:




    break;

   default:
    FUNC_22("getblk: paging or unknown operation for incore buffer- %d\n", VAR_37);

    break;
   }

   if (VAR_47)
    FUNC_1(VAR_38->b_flags, VAR_6);
  }
 } else {
  int VAR_48 = VAR_3;

  if (VAR_43) {
   FUNC_20(VAR_29);
   return (((void*)0));
  }
  if ((FUNC_30(VAR_32) == 0) || (FUNC_8(VAR_32) == 0) )
   VAR_37 = 130;

  if ((VAR_38 = FUNC_17(VAR_35, VAR_36, &VAR_48)) == ((void*)0))
   goto start;
  if (FUNC_18(VAR_32, VAR_33, VAR_46)) {
   FUNC_7(VAR_38->b_flags, VAR_7);
   FUNC_12(VAR_38, &VAR_31);

   FUNC_20(VAR_29);

   FUNC_14(VAR_38);
   goto start;
  }
  if (VAR_37 == 130)
          FUNC_7(VAR_38->b_flags, VAR_8);

  VAR_38->b_blkno = VAR_38->b_lblkno = VAR_33;
  VAR_38->b_vp = VAR_32;




  FUNC_12(VAR_38, FUNC_0(VAR_32, VAR_33));

  FUNC_11(VAR_32, VAR_38);

  FUNC_20(VAR_29);

  FUNC_10(VAR_38, VAR_34);

  VAR_45 = 0;
  switch (VAR_37) {
  case 130:
          FUNC_5(1, &VAR_30.bufs_miss);
   break;

  case 128:





   VAR_45 |= VAR_24;
  case 129:
    { off_t VAR_49;
   size_t VAR_50;
   int VAR_51;
   if ( (VAR_38->b_upl) )
    FUNC_22("bp already has UPL: %p",VAR_38);

   VAR_49 = FUNC_24(VAR_32, VAR_33);

   VAR_45 |= VAR_23;
   VAR_42 = FUNC_25(VAR_32,
           VAR_49,
           VAR_38->b_bufsize,
           &VAR_40,
           &VAR_41,
           VAR_45,
           VAR_25);

   if (VAR_42 != VAR_16)
    FUNC_22("Failed to create UPL");



   VAR_38->b_upl = VAR_40;

   if (FUNC_29(VAR_41, 0)) {

           if (VAR_37 == 129)
            VAR_51 = VAR_26;
    else
            VAR_51 = VAR_27;

    FUNC_7(VAR_38->b_flags, VAR_4 | VAR_6);

           FUNC_5(1, &VAR_30.bufs_vmhits);

    VAR_38->b_validoff = 0;
    VAR_38->b_dirtyoff = 0;

    if (FUNC_27(VAR_41, 0)) {

            FUNC_7(VAR_38->b_flags, VAR_9);

     VAR_38->b_validend = VAR_38->b_bcount;
     VAR_38->b_dirtyend = VAR_38->b_bcount;
    } else {

     VAR_38->b_validend = VAR_38->b_bcount;
     VAR_38->b_dirtyend = 0;
    }




    if (FUNC_9(VAR_32, VAR_49, VAR_38->b_bcount, &VAR_38->b_blkno, &VAR_50, ((void*)0), VAR_51, ((void*)0)))
            FUNC_22("getblk: VNOP_BLOCKMAP failed");






    if ((long)VAR_50 < VAR_38->b_bcount)
            VAR_38->b_blkno = VAR_38->b_lblkno;
   } else {
           FUNC_5(1, &VAR_30.bufs_miss);
   }
   VAR_42 = FUNC_26(VAR_40, (vm_offset_t *)&(VAR_38->b_datap));

   if (VAR_42 != VAR_16)
           FUNC_22("getblk: ubc_upl_map() failed with (%d)", VAR_42);
   break;
    }
  default:
   FUNC_22("getblk: paging or unknown operation - %x", VAR_37);

   break;
  }
 }

 FUNC_4((FUNC_2(VAR_10, 386)) | VAR_11,
       VAR_38, VAR_38->b_datap, VAR_38->b_flags, 3, 0);




 return (VAR_38);
}
