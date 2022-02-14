
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef int user_size_t ;
typedef int user_addr_t ;
typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_t ;
typedef int upl_control_flags_t ;
typedef int u_int32_t ;
struct uio {int uio_offset; int uio_segflg; } ;
struct clios {int io_error; int io_mtxp; scalar_t__ io_wanted; scalar_t__ io_issued; scalar_t__ io_completed; } ;
typedef int off_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int buf_t ;
typedef int addr64_t ;
struct TYPE_9__ {TYPE_1__* v_mount; } ;
struct TYPE_8__ {scalar_t__ mnt_alignmentmask; scalar_t__ mnt_devblocksize; } ;


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
 int FUNC_0 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_13 ;
 int FUNC_2 (int,int,int,int,scalar_t__,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (TYPE_2__*,struct uio*,int,int,int,int (*) (buf_t,void*),void*) ;
 int FUNC_5 (TYPE_2__*,int ,int,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_6 (struct uio*,int*,int*,int ) ;
 int FUNC_7 (struct clios*,int,char*) ;
 int FUNC_8 (TYPE_2__*,int,int (*) (buf_t,void*),void*,int ) ;
 int FUNC_9 () ;
 int VAR_29 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (struct uio*) ;
 int FUNC_15 (struct uio*,int ) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int ,int ,int*,int *,int *,scalar_t__*,int*,int ,int ) ;

__attribute__((used)) static int
FUNC_18(vnode_t VAR_30, struct uio *VAR_31, off_t VAR_32, int *VAR_33, u_int32_t *VAR_34,
      int (*VAR_35)(buf_t, void *), void *VAR_36, int VAR_37)
{
 upl_page_info_t *VAR_38;
 upl_t VAR_39[VAR_16];
 vm_offset_t VAR_40;
 addr64_t VAR_41 = 0;
 user_addr_t VAR_42;
 off_t VAR_43;
 upl_size_t VAR_44;
 vm_size_t VAR_45;
 mach_msg_type_number_t VAR_46;
 upl_control_flags_t VAR_47;
 kern_return_t VAR_48;
 struct clios VAR_49;
 int VAR_50= 0;
 int VAR_51 = 0;
 int VAR_52 = 0;
 int VAR_53;
        u_int32_t VAR_54;
 u_int32_t VAR_55;
 u_int32_t VAR_56;
 u_int32_t VAR_57;
 u_int32_t VAR_58 = 0;
 int VAR_59;

 if (VAR_37 & VAR_12)
  VAR_59 = VAR_4;
 else
  VAR_59 = 0;

 if (VAR_37 & VAR_11)
  VAR_59 |= VAR_2;






 FUNC_8(VAR_30, VAR_32, VAR_35, VAR_36, VAR_19);

 VAR_56 = (u_int32_t)VAR_30->v_mount->mnt_devblocksize;
 VAR_57 = (u_int32_t)VAR_30->v_mount->mnt_alignmentmask;

 VAR_49.io_completed = 0;
 VAR_49.io_issued = 0;
 VAR_49.io_error = 0;
 VAR_49.io_wanted = 0;

 FUNC_11(&VAR_49.io_mtxp, VAR_28, VAR_27);

next_cread:
 VAR_55 = *VAR_34;

 VAR_43 = VAR_32 - VAR_31->uio_offset;

 if (VAR_55 > VAR_43)
         VAR_55 = VAR_43;

 VAR_42 = FUNC_14(VAR_31);

 VAR_40 = (vm_offset_t)((u_int32_t)VAR_42 & VAR_17);
 VAR_45 = VAR_40 + VAR_55;

 VAR_46 = 0;
 VAR_44 = VAR_45;
 VAR_47 = VAR_21 | VAR_22 | VAR_20 | VAR_23 | VAR_25 | VAR_24;


 FUNC_2((FUNC_0(VAR_6, 92)) | VAR_8,
       (int)VAR_40, (int)VAR_44, (int)VAR_42, VAR_55, 0);

 vm_map_t VAR_60 = FUNC_3(VAR_31->uio_segflg) ? FUNC_9() : VAR_29;
 VAR_48 = FUNC_17(VAR_60,
         (vm_map_offset_t)(VAR_42 & ~((user_addr_t)VAR_17)),
         &VAR_44, &VAR_39[VAR_51], ((void*)0), &VAR_46, &VAR_47, VAR_26, 0);

 FUNC_2((FUNC_0(VAR_6, 92)) | VAR_7,
       (int)VAR_40, VAR_44, VAR_55, VAR_48, 0);

 if (VAR_48 != VAR_14) {



         VAR_50 = VAR_9;
  goto wait_for_creads;
 }
 VAR_52++;

 if (VAR_44 < VAR_45) {



         VAR_50 = VAR_9;
  goto wait_for_creads;
 }
 VAR_38 = FUNC_13(VAR_39[VAR_51]);

 VAR_41 = ((addr64_t)FUNC_16(VAR_38, 0) << VAR_18) + (addr64_t)VAR_40;

 while (((VAR_31->uio_offset & (VAR_56 - 1)) || VAR_55 < VAR_56) && VAR_55) {
         u_int32_t VAR_61;

  VAR_61 = VAR_56 - (u_int32_t)(VAR_31->uio_offset & (VAR_56 - 1));

  if (VAR_61 > VAR_55)
          VAR_61 = VAR_55;

  VAR_50 = FUNC_4(VAR_30, VAR_31, VAR_41, VAR_61, VAR_5, VAR_35, VAR_36);

  if (VAR_50)
   goto wait_for_creads;

  VAR_40 += VAR_61;
  VAR_41 += VAR_61;
  VAR_55 -= VAR_61;

  VAR_42 += VAR_61;
 }
 if ((u_int32_t)VAR_42 & VAR_57) {







         VAR_50 = VAR_9;
  goto wait_for_creads;
 }

 VAR_58 = VAR_55 & (VAR_56 - 1);

 VAR_55 -= VAR_58;

 while (VAR_55 && VAR_50 == 0) {

  if (VAR_55 > VAR_15)
          VAR_54 = VAR_15;
  else
          VAR_54 = VAR_55;
  FUNC_7(&VAR_49, VAR_15 * FUNC_1(VAR_30, 2), "cluster_read_contig");

  if (VAR_49.io_error) {






          goto wait_for_creads;
  }
         VAR_50 = FUNC_5(VAR_30, VAR_39[VAR_51], VAR_40, VAR_31->uio_offset, VAR_54,
       VAR_5 | VAR_3 | VAR_1 | VAR_0 | VAR_59,
       (buf_t)((void*)0), &VAR_49, VAR_35, VAR_36);




  if (VAR_50 == 0) {
          FUNC_15(VAR_31, (user_size_t)VAR_54);

   VAR_41 += VAR_54;
   VAR_40 += VAR_54;
   VAR_55 -= VAR_54;
  }
 }
 if (VAR_50 == 0 && VAR_49.io_error == 0 && VAR_58 == 0 && VAR_52 < VAR_16 && VAR_31->uio_offset < VAR_32) {

         VAR_50 = FUNC_6(VAR_31, VAR_33, VAR_34, 0);

  if (VAR_50 == 0 && *VAR_33 == VAR_10) {
          VAR_51++;
   goto next_cread;
  }
 } else
         *VAR_33 = VAR_13;

wait_for_creads:




 FUNC_7(&VAR_49, 0, "cluster_read_contig");

 if (VAR_49.io_error)
         VAR_50 = VAR_49.io_error;

 FUNC_10(&VAR_49.io_mtxp, VAR_28);

 if (VAR_50 == 0 && VAR_58)
         VAR_50 = FUNC_4(VAR_30, VAR_31, VAR_41, VAR_58, VAR_5, VAR_35, VAR_36);

 for (VAR_53 = 0; VAR_53 < VAR_52; VAR_53++)




         FUNC_12(VAR_39[VAR_53], 0);

 return (VAR_50);
}
